#ifndef DATA_CONSTRUCT_H
#define DATA_CONSTRUCT_H
#include <vector>
#include <pcl/point_cloud.h>
#include <QString>

typedef struct _MYCloud{
    pcl::PointCloud<pcl::PointXYZ> cloud;
//    vector <int> selected_index;
//    vector <Color> color;
//    bool isColor;
    float min[3];
    float max[3];
//    float min_filted[3];
//    float max_filted[3];
//    float min_registrated[3];
//    float max_registrated[3];
//    float s_ruler_point[6] = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
//    int show_index;
    QString mycloud_name;
}MYCloud;


#endif // DATA_CONSTRUCT_H
