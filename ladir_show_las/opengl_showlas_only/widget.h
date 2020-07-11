#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QGLWidget>
#include <qgl.h>
#include <pcl/point_cloud.h>
#include "mainwindow.h"
#include <QString>
#include<qevent.h>
#include<GL/glut.h>
#include<iostream>
#include<GL/glu.h>

using namespace std;

class Widget : public QGLWidget
{
    Q_OBJECT
public:
    Widget(QWidget* parent=0,
           const QString title =0
           );
    ~Widget(void);
    QPoint lastPos;
    QPoint pressPos;
    QPoint releasePos;


public slots:
    void wheelEvent(QWheelEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);

protected:
    void initializeGL(void);
    void resizeGL(int width, int height);
    void paintGL(void);

private:
    GLint numSteps=0;
    GLfloat rotationX=0.0;
    GLfloat rotationY=0.0;
    GLfloat rotationZ=0.0;
    GLfloat translateX=0.0;
    GLfloat translateY=0.0;

};
#endif // WIDGET_H
