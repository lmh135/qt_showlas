#include "widget.h"

Widget::Widget(QWidget* parent):QGLWidget(parent)
{
}

Widget::~Widget(void)
{
}

void Widget::initializeGL()
{
    glClearColor( 1.0, 1.0, 1.0, 0.0 );
    glShadeModel(GL_SMOOTH);
    glClearDepth( 1.0 );
    glEnable( GL_DEPTH_TEST );  
    glViewport(0, 0,this->width(),this->height());

    //光照
    float intensity[] = {1,1,1,1};
    float position[] = {1,1,5,0};
    glLightfv(GL_LIGHT0,GL_DIFFUSE,intensity);
    glLightfv(GL_LIGHT0,GL_SPECULAR,intensity);
    glLightfv(GL_LIGHT0,GL_POSITION,position);
    glLightModeli(GL_LIGHT_MODEL_LOCAL_VIEWER,GL_FALSE);
    glLightModeli(GL_LIGHT_MODEL_TWO_SIDE,GL_TRUE);
}

void Widget::resizeGL()
{
    glMatrixMode( GL_PROJECTION );
    glLoadIdentity( );//zuobiao->0  
    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity( );
}

void Widget::paintGL()
{
    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity( );
    gluPerspective( 80,this->width()/this->height(), 0.0625f, 1500.0f );

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(translateX,translateY,-50.0f+numSteps);//沿XYZ坐标轴平移
    glRotatef(180+rotationX, 1.0, 0.0, 0.0);//沿X轴旋转
    glRotatef(rotationY, 0.0, 1.0, 0.0);
    glRotatef(rotationZ, 0.0, 0.0, 1.0);

    ShowWindow showwindow;
    showwindow.DrawLasPoints();
}

void Widget::wheelEvent(QWheelEvent *event)//滑轮缩放
{
    int numDegrees=event->delta()/8;
    numSteps+=numDegrees/15;
    updateGL();
}

void Widget::mousePressEvent(QMouseEvent *event)//鼠标按住
{
    lastPos = event->pos();
    if(Qt::LeftButton == event->button())
    {
        pressPos = event->pos();
        updateGL();
    }
}

void Widget::mouseMoveEvent(QMouseEvent *event)//鼠标移动
{

    GLfloat dx=GLfloat(lastPos.x()-event->x())/1280;
    GLfloat dy=GLfloat(event->y()-lastPos.y())/640;
    if (event->buttons() & Qt::LeftButton)
    {
        rotationX += 180 * dy;
        rotationY += 180 * dx;
    }

    else if (event->buttons() & Qt::RightButton)
    {
        translateX -= 100*dx;
        translateY -= 100*dy;
    }
    lastPos = event->pos();
    updateGL();
}
