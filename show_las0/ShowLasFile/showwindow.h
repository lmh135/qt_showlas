#ifndef SHOWWINDOW_H
#define SHOWWINDOW_H

#include <QMainWindow>
#include <widget.h>
#include "qfiledialog.h"
#include <liblas/liblas.hpp>
#include <liblas/header.hpp>
#include <pcl/point_cloud.h>
#include <pcl/octree/octree.h>
#include <fstream>
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

namespace Ui {
class ShowWindow;
}

class ShowWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ShowWindow(QWidget *parent = 0);
    ~ShowWindow();
    bool loadlasFile(const QString &fileName);
    void DrawLasPoints();

private slots:
    void on_openBtn_clicked();
    void on_CloseBtn_clicked();

private:
    Ui::ShowWindow *ui;
    QString fileName;
    ifstream ifs;
};

#endif // SHOWWINDOW_H
