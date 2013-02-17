#include "mapoperations.h"
#include <QDebug>

MapOperations::MapOperations(cv::Mat initialMap)
{
    map = initialMap;
}

MapOperations::~MapOperations()
{
}

cv::Mat MapOperations::inverse(QSize size, bool centered)
{
    cv::Mat newMap = cv::Mat::zeros(size.height(), size.width(), CV_16UC4);

    const int channels = map.channels();
    const uint mapCols = map.cols;
    const uint mapRows = map.rows;

    uint x,y;

    for (y=0; y<mapRows; y++) {
        for(x=0; x<mapCols; x++) {
            int u,v,a;
            if(channels == 3) {
                cv::Vec3s mapPixel = map.at<cv::Vec3s>(x,y);
                // CV stores pixels in BGR order
                u = ((unsigned long)mapPixel[2]*(unsigned long)size.width()) >> 16;
                v = ((unsigned long)mapPixel[1]*(unsigned long)size.height()) >> 16;
                a = -1;
            } else {
                cv::Vec4s mapPixel = map.at<cv::Vec4s>(y,x);
                // CV stores pixels in BGR order
                u = mapPixel[2]*size.width() >> 16;
                v = mapPixel[1]*size.height() >> 16;
                a = mapPixel[3];
            }
            if(u<0) u=size.width()+u;
            if(v<0) v=size.height()+v;

            cv::Vec4s &newMapPixel = newMap.at<cv::Vec4s>(v,u);
            if((uint)newMapPixel[3] < a) {
                int newX = (x << 16) / mapCols;
                int newY = (y << 16) / mapRows;

                if(newX<0) newX=mapCols+newX;
                if(newY<0) newY=mapRows+newY;

                newMapPixel[0] = 0;
                newMapPixel[1] = newY;
                newMapPixel[2] = newX;
                newMapPixel[3] = a;
            }

        }
    }

    map = newMap;
    return map;
}

cv::Mat MapOperations::guassianBlur(double radius)
{
    // NB: this function should be made alphachannel-aware
    cv::Mat newMap = map.clone();

    cv::GaussianBlur(map, newMap, cv::Size(), radius);
    map = newMap;
    return map;
}

cv::Mat MapOperations::medianBlur(int radius)
{
    // NB: this function should be made alphachannel-aware
    cv::Mat newMap = map.clone();

    cv::medianBlur(map, newMap, radius);
    map = newMap;
    return map;
}

cv::Mat MapOperations::despeckle()
{
    // NB: this function should be made alphachannel-aware
    cv::Mat newMap = map.clone();

    // TODO: despeckle
    map = newMap;
    return map;
}