/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *OpenBtn;
    QAction *SaveBtn;
    QAction *action_3;
    QAction *ColorModeBtn;
    QAction *SelectBtn;
    QAction *action_6;
    QAction *Measure_distanceBtn;
    QAction *action_10;
    QAction *action_11;
    QAction *action_12;
    QAction *RotateBtn;
    QAction *TranslateBtn;
    QAction *ZoomBtn;
    QAction *ClearBtn;
    QAction *CloseTabPageBtn;
    QAction *counterBtn;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QListView *listView;
    QToolBox *toolBox;
    QWidget *page_4;
    QPushButton *point_show_Btn;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *openfileBtn;
    QPushButton *getPointBtn;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *connect_Btn;
    QPushButton *getDataBtn;
    QGroupBox *groupBox_4;
    QWidget *layoutWidget3;
    QFormLayout *formLayout;
    QPushButton *posDetectBtn;
    QPushButton *eulerDetectBtn;
    QPushButton *picDetectBtn;
    QWidget *page_3;
    QWidget *layoutWidget4;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QPushButton *DEM_Btn;
    QPushButton *conture_Btn;
    QLabel *label_3;
    QLabel *label_2;
    QDoubleSpinBox *filter_doubleSpinBox2;
    QDoubleSpinBox *filter_doubleSpinBox3;
    QDoubleSpinBox *filter_doubleSpinBox1;
    QComboBox *filter_comboBox;
    QWidget *page_2;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_3;
    QComboBox *comboBox_2;
    QPushButton *switch_Btn;
    QPushButton *start_Btn;
    QPushButton *continune_Btn;
    QPushButton *show_all_Btn;
    QTabWidget *tabWidget;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1563, 781);
        OpenBtn = new QAction(MainWindow);
        OpenBtn->setObjectName(QStringLiteral("OpenBtn"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        OpenBtn->setIcon(icon);
        SaveBtn = new QAction(MainWindow);
        SaveBtn->setObjectName(QStringLiteral("SaveBtn"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        SaveBtn->setIcon(icon1);
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QStringLiteral("action_3"));
        ColorModeBtn = new QAction(MainWindow);
        ColorModeBtn->setObjectName(QStringLiteral("ColorModeBtn"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icon/color.png"), QSize(), QIcon::Normal, QIcon::Off);
        ColorModeBtn->setIcon(icon2);
        SelectBtn = new QAction(MainWindow);
        SelectBtn->setObjectName(QStringLiteral("SelectBtn"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icon/measurep.png"), QSize(), QIcon::Normal, QIcon::Off);
        SelectBtn->setIcon(icon3);
        action_6 = new QAction(MainWindow);
        action_6->setObjectName(QStringLiteral("action_6"));
        Measure_distanceBtn = new QAction(MainWindow);
        Measure_distanceBtn->setObjectName(QStringLiteral("Measure_distanceBtn"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icon/measure.png"), QSize(), QIcon::Normal, QIcon::Off);
        Measure_distanceBtn->setIcon(icon4);
        action_10 = new QAction(MainWindow);
        action_10->setObjectName(QStringLiteral("action_10"));
        action_11 = new QAction(MainWindow);
        action_11->setObjectName(QStringLiteral("action_11"));
        action_12 = new QAction(MainWindow);
        action_12->setObjectName(QStringLiteral("action_12"));
        RotateBtn = new QAction(MainWindow);
        RotateBtn->setObjectName(QStringLiteral("RotateBtn"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icon/rotate.png"), QSize(), QIcon::Normal, QIcon::Off);
        RotateBtn->setIcon(icon5);
        TranslateBtn = new QAction(MainWindow);
        TranslateBtn->setObjectName(QStringLiteral("TranslateBtn"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icon/translate.png"), QSize(), QIcon::Normal, QIcon::Off);
        TranslateBtn->setIcon(icon6);
        ZoomBtn = new QAction(MainWindow);
        ZoomBtn->setObjectName(QStringLiteral("ZoomBtn"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/icon/zoom.png"), QSize(), QIcon::Normal, QIcon::Off);
        ZoomBtn->setIcon(icon7);
        ClearBtn = new QAction(MainWindow);
        ClearBtn->setObjectName(QStringLiteral("ClearBtn"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/icon/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        ClearBtn->setIcon(icon8);
        CloseTabPageBtn = new QAction(MainWindow);
        CloseTabPageBtn->setObjectName(QStringLiteral("CloseTabPageBtn"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/icon/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        CloseTabPageBtn->setIcon(icon9);
        counterBtn = new QAction(MainWindow);
        counterBtn->setObjectName(QStringLiteral("counterBtn"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/icon/conture.png"), QSize(), QIcon::Normal, QIcon::Off);
        counterBtn->setIcon(icon10);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMinimumSize(QSize(197, 292));
        groupBox->setMaximumSize(QSize(197, 100000));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        listView = new QListView(groupBox);
        listView->setObjectName(QStringLiteral("listView"));

        gridLayout_2->addWidget(listView, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox, 1, 0, 1, 1);

        toolBox = new QToolBox(centralWidget);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        sizePolicy.setHeightForWidth(toolBox->sizePolicy().hasHeightForWidth());
        toolBox->setSizePolicy(sizePolicy);
        toolBox->setMinimumSize(QSize(171, 401));
        toolBox->setMaximumSize(QSize(171, 100000));
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        page_4->setGeometry(QRect(0, 0, 171, 305));
        point_show_Btn = new QPushButton(page_4);
        point_show_Btn->setObjectName(QStringLiteral("point_show_Btn"));
        point_show_Btn->setGeometry(QRect(0, 240, 169, 26));
        layoutWidget = new QWidget(page_4);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 171, 231));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox_2 = new QGroupBox(layoutWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMaximumSize(QSize(16777215, 50));
        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 20, 168, 28));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        openfileBtn = new QPushButton(layoutWidget1);
        openfileBtn->setObjectName(QStringLiteral("openfileBtn"));

        horizontalLayout_3->addWidget(openfileBtn);

        getPointBtn = new QPushButton(layoutWidget1);
        getPointBtn->setObjectName(QStringLiteral("getPointBtn"));

        horizontalLayout_3->addWidget(getPointBtn);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(layoutWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setMaximumSize(QSize(16777215, 50));
        layoutWidget2 = new QWidget(groupBox_3);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(0, 20, 171, 28));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        connect_Btn = new QPushButton(layoutWidget2);
        connect_Btn->setObjectName(QStringLiteral("connect_Btn"));

        horizontalLayout_2->addWidget(connect_Btn);

        getDataBtn = new QPushButton(layoutWidget2);
        getDataBtn->setObjectName(QStringLiteral("getDataBtn"));

        horizontalLayout_2->addWidget(getDataBtn);


        verticalLayout->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(layoutWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setMaximumSize(QSize(16777215, 85));
        layoutWidget3 = new QWidget(groupBox_4);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(0, 21, 168, 60));
        formLayout = new QFormLayout(layoutWidget3);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        posDetectBtn = new QPushButton(layoutWidget3);
        posDetectBtn->setObjectName(QStringLiteral("posDetectBtn"));

        formLayout->setWidget(0, QFormLayout::LabelRole, posDetectBtn);

        eulerDetectBtn = new QPushButton(layoutWidget3);
        eulerDetectBtn->setObjectName(QStringLiteral("eulerDetectBtn"));

        formLayout->setWidget(0, QFormLayout::FieldRole, eulerDetectBtn);

        picDetectBtn = new QPushButton(layoutWidget3);
        picDetectBtn->setObjectName(QStringLiteral("picDetectBtn"));

        formLayout->setWidget(1, QFormLayout::LabelRole, picDetectBtn);


        verticalLayout->addWidget(groupBox_4);


        verticalLayout_2->addLayout(verticalLayout);

        toolBox->addItem(page_4, QString::fromUtf8("\347\202\271\344\272\221\351\207\207\351\233\206\344\270\216\346\201\242\345\244\215"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setGeometry(QRect(0, 0, 171, 305));
        layoutWidget4 = new QWidget(page_3);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(0, 10, 171, 251));
        gridLayout_3 = new QGridLayout(layoutWidget4);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget4);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_3->addWidget(label, 1, 0, 1, 1);

        DEM_Btn = new QPushButton(layoutWidget4);
        DEM_Btn->setObjectName(QStringLiteral("DEM_Btn"));

        gridLayout_3->addWidget(DEM_Btn, 4, 0, 1, 2);

        conture_Btn = new QPushButton(layoutWidget4);
        conture_Btn->setObjectName(QStringLiteral("conture_Btn"));

        gridLayout_3->addWidget(conture_Btn, 5, 0, 1, 2);

        label_3 = new QLabel(layoutWidget4);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_3->addWidget(label_3, 3, 0, 1, 1);

        label_2 = new QLabel(layoutWidget4);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_3->addWidget(label_2, 2, 0, 1, 1);

        filter_doubleSpinBox2 = new QDoubleSpinBox(layoutWidget4);
        filter_doubleSpinBox2->setObjectName(QStringLiteral("filter_doubleSpinBox2"));

        gridLayout_3->addWidget(filter_doubleSpinBox2, 2, 1, 1, 1);

        filter_doubleSpinBox3 = new QDoubleSpinBox(layoutWidget4);
        filter_doubleSpinBox3->setObjectName(QStringLiteral("filter_doubleSpinBox3"));

        gridLayout_3->addWidget(filter_doubleSpinBox3, 3, 1, 1, 1);

        filter_doubleSpinBox1 = new QDoubleSpinBox(layoutWidget4);
        filter_doubleSpinBox1->setObjectName(QStringLiteral("filter_doubleSpinBox1"));

        gridLayout_3->addWidget(filter_doubleSpinBox1, 1, 1, 1, 1);

        filter_comboBox = new QComboBox(layoutWidget4);
        filter_comboBox->setObjectName(QStringLiteral("filter_comboBox"));

        gridLayout_3->addWidget(filter_comboBox, 0, 0, 1, 2);

        toolBox->addItem(page_3, QString::fromUtf8("\347\202\271\344\272\221\346\273\244\346\263\242\344\270\216DEM"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 171, 305));
        layoutWidget5 = new QWidget(page_2);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(30, 0, 101, 241));
        verticalLayout_3 = new QVBoxLayout(layoutWidget5);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        comboBox_2 = new QComboBox(layoutWidget5);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        verticalLayout_3->addWidget(comboBox_2);

        switch_Btn = new QPushButton(layoutWidget5);
        switch_Btn->setObjectName(QStringLiteral("switch_Btn"));

        verticalLayout_3->addWidget(switch_Btn);

        start_Btn = new QPushButton(layoutWidget5);
        start_Btn->setObjectName(QStringLiteral("start_Btn"));

        verticalLayout_3->addWidget(start_Btn);

        continune_Btn = new QPushButton(layoutWidget5);
        continune_Btn->setObjectName(QStringLiteral("continune_Btn"));

        verticalLayout_3->addWidget(continune_Btn);

        show_all_Btn = new QPushButton(layoutWidget5);
        show_all_Btn->setObjectName(QStringLiteral("show_all_Btn"));

        verticalLayout_3->addWidget(show_all_Btn);

        toolBox->addItem(page_2, QString::fromUtf8("\347\202\271\344\272\221\346\213\274\346\216\245"));

        gridLayout->addWidget(toolBox, 0, 0, 1, 1);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setMinimumSize(QSize(1331, 701));

        gridLayout->addWidget(tabWidget, 0, 1, 2, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1563, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        menu_4 = new QMenu(menuBar);
        menu_4->setObjectName(QStringLiteral("menu_4"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menuBar->addAction(menu_4->menuAction());
        menu->addAction(OpenBtn);
        menu->addAction(SaveBtn);
        menu->addAction(action_3);
        menu_2->addAction(ColorModeBtn);
        menu_2->addAction(RotateBtn);
        menu_2->addAction(TranslateBtn);
        menu_2->addAction(ZoomBtn);
        menu_3->addAction(SelectBtn);
        menu_3->addAction(Measure_distanceBtn);
        menu_3->addAction(ClearBtn);
        menu_4->addAction(action_12);
        mainToolBar->addAction(OpenBtn);
        mainToolBar->addAction(SaveBtn);
        mainToolBar->addAction(ClearBtn);
        mainToolBar->addAction(TranslateBtn);
        mainToolBar->addAction(RotateBtn);
        mainToolBar->addAction(ZoomBtn);
        mainToolBar->addAction(ColorModeBtn);
        mainToolBar->addAction(SelectBtn);
        mainToolBar->addAction(Measure_distanceBtn);
        mainToolBar->addAction(counterBtn);
        mainToolBar->addSeparator();
        mainToolBar->addAction(CloseTabPageBtn);

        retranslateUi(MainWindow);

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        OpenBtn->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", Q_NULLPTR));
        SaveBtn->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230\346\226\207\344\273\266", Q_NULLPTR));
        action_3->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
        ColorModeBtn->setText(QApplication::translate("MainWindow", "\351\242\234\350\211\262\346\250\241\345\274\217", Q_NULLPTR));
        SelectBtn->setText(QApplication::translate("MainWindow", "\351\200\211\347\202\271\346\250\241\345\274\217", Q_NULLPTR));
        action_6->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\345\235\220\346\240\207", Q_NULLPTR));
        Measure_distanceBtn->setText(QApplication::translate("MainWindow", "\346\265\213\350\267\235", Q_NULLPTR));
        action_10->setText(QApplication::translate("MainWindow", "\347\202\271\344\272\221\346\213\274\346\216\245", Q_NULLPTR));
        action_11->setText(QApplication::translate("MainWindow", "\347\202\271\344\272\221\346\273\244\346\263\242", Q_NULLPTR));
        action_12->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216", Q_NULLPTR));
        RotateBtn->setText(QApplication::translate("MainWindow", "\346\227\213\350\275\254", Q_NULLPTR));
        TranslateBtn->setText(QApplication::translate("MainWindow", "\345\271\263\347\247\273", Q_NULLPTR));
        ZoomBtn->setText(QApplication::translate("MainWindow", "\347\274\251\346\224\276", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ZoomBtn->setToolTip(QApplication::translate("MainWindow", "\347\274\251\346\224\276", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        ClearBtn->setText(QApplication::translate("MainWindow", "\346\270\205\351\231\244\347\202\271\344\272\221", Q_NULLPTR));
        CloseTabPageBtn->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255\345\275\223\345\211\215\345\267\245\344\275\234\345\217\260", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CloseTabPageBtn->setToolTip(QApplication::translate("MainWindow", "\345\205\263\351\227\255\345\275\223\345\211\215\345\267\245\344\275\234\345\217\260", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        counterBtn->setText(QApplication::translate("MainWindow", "\347\224\237\346\210\220\347\255\211\351\253\230\347\272\277", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        counterBtn->setToolTip(QApplication::translate("MainWindow", "\347\224\237\346\210\220\347\255\211\351\253\230\347\272\277", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("MainWindow", "\345\205\250\345\261\200\347\212\266\346\200\201\344\277\241\346\201\257", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        point_show_Btn->setToolTip(QApplication::translate("MainWindow", "\347\202\271\344\272\221\346\230\276\347\244\272", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        point_show_Btn->setText(QApplication::translate("MainWindow", "\347\202\271\344\272\221\346\230\276\347\244\272", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\347\246\273\347\272\277\351\207\207\351\233\206\346\201\242\345\244\215", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        openfileBtn->setToolTip(QApplication::translate("MainWindow", "\350\275\275\345\205\245\346\225\260\346\215\256", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        openfileBtn->setText(QApplication::translate("MainWindow", "\350\275\275\345\205\245\346\225\260\346\215\256", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        getPointBtn->setToolTip(QApplication::translate("MainWindow", "\345\274\200\345\247\213\346\201\242\345\244\215", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        getPointBtn->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\346\201\242\345\244\215", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\345\234\250\347\272\277\351\207\207\351\233\206\346\201\242\345\244\215", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        connect_Btn->setToolTip(QApplication::translate("MainWindow", "\345\273\272\347\253\213\350\277\236\346\216\245", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        connect_Btn->setText(QApplication::translate("MainWindow", "\345\273\272\347\253\213\350\277\236\346\216\245", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        getDataBtn->setToolTip(QApplication::translate("MainWindow", "\345\274\200\345\247\213\351\207\207\351\233\206\344\270\216\346\201\242\345\244\215", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        getDataBtn->setText(QApplication::translate("MainWindow", "\351\207\207\351\233\206\344\270\216\346\201\242\345\244\215", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\346\225\260\346\215\256\347\233\221\346\265\213", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        posDetectBtn->setToolTip(QApplication::translate("MainWindow", "\344\275\215\347\275\256\346\243\200\346\265\213", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        posDetectBtn->setText(QApplication::translate("MainWindow", "\344\275\215\347\275\256\346\243\200\346\265\213", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        eulerDetectBtn->setToolTip(QApplication::translate("MainWindow", "\345\247\277\346\200\201\347\233\221\346\265\213", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        eulerDetectBtn->setText(QApplication::translate("MainWindow", "\345\247\277\346\200\201\347\233\221\346\265\213", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        picDetectBtn->setToolTip(QApplication::translate("MainWindow", "\345\233\276\345\203\217\347\233\221\346\265\213", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        picDetectBtn->setText(QApplication::translate("MainWindow", "\345\233\276\345\203\217\347\233\221\346\265\213", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_4), QApplication::translate("MainWindow", "\347\202\271\344\272\221\351\207\207\351\233\206\344\270\216\346\201\242\345\244\215", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        DEM_Btn->setToolTip(QApplication::translate("MainWindow", "\347\202\271\344\272\221\344\270\211\350\247\222\345\214\226", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        DEM_Btn->setText(QApplication::translate("MainWindow", "\347\202\271\344\272\221\344\270\211\350\247\222\345\214\226", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        conture_Btn->setToolTip(QApplication::translate("MainWindow", "\347\255\211\351\253\230\347\272\277", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        conture_Btn->setText(QApplication::translate("MainWindow", "\347\224\237\346\210\220\347\255\211\351\253\230\347\272\277", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        filter_comboBox->clear();
        filter_comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\347\202\271\344\272\221\346\273\244\346\263\242", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        filter_comboBox->setToolTip(QApplication::translate("MainWindow", "\347\202\271\344\272\221\346\273\244\346\263\242", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("MainWindow", "\347\202\271\344\272\221\346\273\244\346\263\242\344\270\216DEM", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\346\213\274\346\216\245\346\226\271\346\263\225", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        comboBox_2->setToolTip(QApplication::translate("MainWindow", "\346\213\274\346\216\245\346\226\271\346\263\225", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        switch_Btn->setToolTip(QApplication::translate("MainWindow", "\346\230\276\347\244\272\345\210\207\346\215\242", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        switch_Btn->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        switch_Btn->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\345\210\207\346\215\242", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        start_Btn->setToolTip(QApplication::translate("MainWindow", "\345\274\200\345\247\213\351\205\215\345\207\206", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        start_Btn->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\351\205\215\345\207\206", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        continune_Btn->setToolTip(QApplication::translate("MainWindow", "\347\273\247\347\273\255", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        continune_Btn->setText(QApplication::translate("MainWindow", "\347\273\247\347\273\255", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        show_all_Btn->setToolTip(QApplication::translate("MainWindow", "\346\225\264\344\275\223\346\230\276\347\244\272", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        show_all_Btn->setText(QApplication::translate("MainWindow", "\346\225\264\344\275\223\346\230\276\347\244\272", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("MainWindow", "\347\202\271\344\272\221\346\213\274\346\216\245", Q_NULLPTR));
        menu->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("MainWindow", "\346\237\245\347\234\213", Q_NULLPTR));
        menu_3->setTitle(QApplication::translate("MainWindow", "\345\267\245\345\205\267", Q_NULLPTR));
        menu_4->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
