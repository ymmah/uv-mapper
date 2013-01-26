#ifndef MAPMANAGER_H
#define MAPMANAGER_H

#include <QVector>
#include <QSize>
#include <QString>
#include <QtOpenGL>

#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"

class MapManager
{
public:
    MapManager();
    ~MapManager();

    bool load( QString newFileName = NULL );
    bool save( QString newFileName = NULL );

    bool undo();
    bool redo();

    QSize getSize();

    void setMat( cv::Mat );
    cv::Mat getMat();

    GLuint getTexture();

    void createFromTexture( GLuint );
    
private:
    QString fileName;

    cv::Mat map;
    GLuint texture;

    QVector<cv::Mat> history;
    int historyIndex;

    void resetHistory( int fromIndex = 0 );
    void addHistoryState();

    void updateTexture();
};

#endif // MAPMANAGER_H
