#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QGLWidget>
#include <qgl.h>
#include "showwindow.h"
#include <qevent.h>
#include <GL/glut.h>
#include <GL/glu.h>

class Widget : public QGLWidget
{
    Q_OBJECT
public:
    Widget(QWidget* parent=0);
    ~Widget(void);
    QPoint lastPos;
    QPoint pressPos;

public slots:
    void wheelEvent(QWheelEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);

protected:
    void initializeGL(void);
    void resizeGL();
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
