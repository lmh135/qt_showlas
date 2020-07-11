#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <liblas/liblas.hpp>
#include <liblas/header.hpp>
#include <pcl/point_cloud.h>
#include <QKeyEvent>
#include <pcl/point_types.h>
#include <QFileDialog>
#include <qgl.h>
#include "widget.h"
#include "data_construct.h"
using namespace std;

void draw_fuc();
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    bool loadlasFile(const QString &fileName); // 加载文件
    void add_cloud_page();

private slots:
    void on_OpenBtn_triggered();
    void on_ColorModeBtn_triggered();
    void on_tabWidget_currentChanged(int index);
    void on_ClearBtn_triggered();
    void update_GL();


    void on_CloseTabPageBtn_triggered();

private:
    Ui::MainWindow *ui;
    ifstream ifs;
};

#endif // MAINWINDOW_H
