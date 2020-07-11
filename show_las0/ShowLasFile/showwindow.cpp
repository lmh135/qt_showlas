#include "showwindow.h"
#include "ui_showwindow.h"

double vorxba = 0,voryba = 0,vorzba = 0;
float max_x = -10000,min_x = 10000,max_y = -10000,min_y = 10000,max_z = -10000,min_z = 10000;
pcl::PointCloud<pcl::PointXYZ> cloud_in;

ShowWindow::ShowWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ShowWindow)
{
    ui->setupUi(this);
}

ShowWindow::~ShowWindow()
{
    delete ui;
}

bool ShowWindow::loadlasFile(const QString &fileName)
{
    QByteArray fn=(fileName).toLocal8Bit();
    const char* file_name=fn.data();
    cout<<file_name<<endl;

    ifs.open(file_name, ios::in | ios::binary);

    liblas::ReaderFactory f ;
    liblas::Reader reader = f.CreateWithStream(ifs);
    liblas::Header const& header = reader.GetHeader();

    int point_num = header.GetPointRecordsCount();
    cout<<"Number of point records     : "<<point_num<<endl;
    cout<<"X scale factor              : "<<header.GetScaleX()<<endl;
    cout<<"Y scale factor              : "<<header.GetScaleY()<<endl;
    cout<<"Z scale factor              : "<<header.GetScaleZ()<<endl;
    cout<<"X offset                    : "<<header.GetOffsetX()<<endl;
    cout<<"Y offset                    : "<<header.GetOffsetY()<<endl;
    cout<<"Z offset                    : "<<header.GetOffsetZ()<<endl;
    cout<<"Max X                       : "<<header.GetMaxX()<<endl;
    cout<<"Max Y                       : "<<header.GetMaxY()<<endl;
    cout<<"Max Z                       : "<<header.GetMaxZ()<<endl;
    cout<<"Min X                       : "<<header.GetMinX()<<endl;
    cout<<"Min Y                       : "<<header.GetMinY()<<endl;
    cout<<"Min Z                       : "<<header.GetMinZ()<<endl;
    max_x = header.GetMaxX()+0.05;
    max_y = header.GetMaxY()+0.05;
    max_z = header.GetMaxZ()+0.05;
    min_x = header.GetMinX()-0.05;
    min_y = header.GetMinY()-0.05;
    min_z = header.GetMinZ()-0.05;

    while(reader.ReadNextPoint())
    {
        pcl::PointXYZ p;
        p.x = reader.GetPoint().GetX();
        p.y = reader.GetPoint().GetY();
        p.z = reader.GetPoint().GetZ();
        cloud_in.points.push_back(p);

    }
    vorxba = (max_x+min_x)/2;
    voryba = (max_y+min_y)/2;
    vorzba = (max_z+min_z)/2;

    ifs.close();
    ui->widget->updateGL();
    return 0;
}

void ShowWindow::on_openBtn_clicked()
{
    QString fileName=QFileDialog::getOpenFileName(this,QString("open data"));
    loadlasFile(fileName);
}

void ShowWindow::DrawLasPoints()
{
    glPointSize(2.0);
    glBegin( GL_POINTS);
    float boundingBoxZ=max_z-min_z;
    for(unsigned int i=0;i<cloud_in.points.size();i++)
    {
        float highZ=cloud_in.points[i].z-min_z;
        if(highZ<(boundingBoxZ/3))
        {
            glColor3f(0.1f+0.7f*highZ/(boundingBoxZ/3),0.1f,0.1f);
        }
        else if(highZ<2*(boundingBoxZ/3))
        {
            glColor3f(0.8f,0.7f*(highZ-(boundingBoxZ/3))/(boundingBoxZ/3),0.1f);
        }
        else
        {
            glColor3f(0.8f,0.8f,0.1f+0.7f*(highZ-2*(boundingBoxZ/3))/(boundingBoxZ/3));
        }
        glVertex3f(cloud_in.points[i].x-vorxba,cloud_in.points[i].y-voryba,cloud_in.points[i].z-vorzba);
    }
    glEnd();
}

void ShowWindow::on_CloseBtn_clicked()
{
    this->close();
}
