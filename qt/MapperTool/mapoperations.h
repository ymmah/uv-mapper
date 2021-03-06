#ifndef MAPOPERATIONS_H
#define MAPOPERATIONS_H

#include <QSize>

#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

class MapOperations
{
public:
    MapOperations(cv::Mat initialMap);
    ~MapOperations();

    cv::Mat inverse(QSize size, uint bits, bool centered);

    cv::Mat guassianBlur(double radius);
    cv::Mat medianBlur(int radius);
    cv::Mat despeckle();

    cv::Mat fillHoles();

private:
    cv::Mat m_map;
};

#endif // MAPOPERATIONS_H
