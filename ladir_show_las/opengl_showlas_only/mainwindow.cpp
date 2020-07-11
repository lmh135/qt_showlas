#include "mainwindow.h"
#include "ui_mainwindow.h"

int tool_page = -1;
int color_mode = 0;
int tab_page_num = 0;
int tab_current_index = -1;
vector<MYCloud> cloud_seq;
vector<Widget*> gl_seq;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->SaveBtn->setEnabled(false);
    ui->ClearBtn->setEnabled(false);
    ui->SelectBtn->setEnabled(false);
    ui->ColorModeBtn->setEnabled(false);
    ui->Measure_distanceBtn->setEnabled(false);
    ui->RotateBtn->setEnabled(false);
    ui->TranslateBtn->setEnabled(false);
    ui->ZoomBtn->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_OpenBtn_triggered()
{
    tool_page = -1;
    QString fileName=QFileDialog::getOpenFileName(this,QString("open data"));
    if(fileName == NULL)
        return;
    loadlasFile(fileName);
}

bool MainWindow::loadlasFile(const QString &fileName)
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

    MYCloud cloud_in;
    //cloud_in.show_index = 0;

    cloud_in.cloud.points.clear();
    while(reader.ReadNextPoint())
    {
        pcl::PointXYZ p;
        p.x = reader.GetPoint().GetX();
        p.y = reader.GetPoint().GetY();
        p.z = reader.GetPoint().GetZ();
        cloud_in.cloud.points.push_back(p);
    }

    cloud_in.min[0] = header.GetMinX()-0.05;
    cloud_in.min[1] = header.GetMinY()-0.05;
    cloud_in.min[2] = header.GetMinZ()-0.05;
    cloud_in.max[0] = header.GetMaxX()+0.05;
    cloud_in.max[1] = header.GetMaxY()+0.05;
    cloud_in.max[2] = header.GetMaxZ()+0.05;

    cloud_seq.push_back(cloud_in);
    ifs.close();
    add_cloud_page();

    ui->SaveBtn->setEnabled(true);
    ui->ClearBtn->setEnabled(true);
    ui->SelectBtn->setEnabled(true);
    ui->ColorModeBtn->setEnabled(true);
    ui->Measure_distanceBtn->setEnabled(true);
    ui->RotateBtn->setEnabled(true);
    ui->TranslateBtn->setEnabled(true);
    ui->ZoomBtn->setEnabled(true);

    return 0;
}

void MainWindow::add_cloud_page()
{
    static int ever_num = 0;
    ever_num++;
    tab_page_num++;
    Widget *wid = new Widget(this);

    ui->tabWidget->addTab(wid, "点云图"+QString::number(ever_num));
    ui->tabWidget->setCurrentIndex(tab_page_num-1);

    ui->tabWidget->currentIndex();
    tab_current_index = tab_page_num-1;
    wid->updateGL();
    gl_seq.push_back(wid);
    vector<Widget*>::iterator item = gl_seq.end();
    item--;
    (*item) = wid;

    vector<MYCloud>::iterator item_cloud = cloud_seq.begin();
    item_cloud += tab_current_index;
    (*item_cloud).mycloud_name = "点云图"+QString::number(ever_num);

}

void draw_fuc()
{
    vector<MYCloud>::iterator item_cloud = cloud_seq.begin();
    item_cloud += tab_current_index;
    if((*item_cloud).cloud.points.empty())
        return;

    glPointSize(2.0);
    glBegin( GL_POINTS);
    float min_x = (*item_cloud).min[0];
    float max_x = (*item_cloud).max[0];

    float min_y = (*item_cloud).min[1];
    float max_y = (*item_cloud).max[1];

    float min_z = (*item_cloud).min[2];
    float max_z = (*item_cloud).max[2];
    float boundingBoxZ = max_z-min_z;

    float ave_x = (max_x+min_x)/2;
    float ave_y = (max_y+min_y)/2;
    float ave_z = (max_z+min_z)/2;
    for(unsigned int i=0;i<(*item_cloud).cloud.points.size();i++)
    {
        if(color_mode)
        {
            float highZ = (*item_cloud).cloud.points[i].z-min_z;


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
            glVertex3f((*item_cloud).cloud.points[i].x-ave_x,(*item_cloud).cloud.points[i].y-ave_y,(*item_cloud).cloud.points[i].z-ave_z);
        }
        else
        {
            glColor3f(0.0f,0.0f,0.0f);
            glVertex3f((*item_cloud).cloud.points[i].x-ave_x,(*item_cloud).cloud.points[i].y-ave_y,(*item_cloud).cloud.points[i].z-ave_z);
        }
    }
    glEnd();
}



void MainWindow::on_ColorModeBtn_triggered()
{
    color_mode++;
    color_mode = color_mode%2;
    vector<Widget*>::iterator item_wid = gl_seq.begin();
    item_wid += tab_current_index;
    (*item_wid)->updateGL();
}

