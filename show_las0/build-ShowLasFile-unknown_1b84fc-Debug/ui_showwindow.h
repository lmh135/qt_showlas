/********************************************************************************
** Form generated from reading UI file 'showwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWWINDOW_H
#define UI_SHOWWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include <widget.h>

QT_BEGIN_NAMESPACE

class Ui_ShowWindow
{
public:
    QWidget *centralWidget;
    QPushButton *openBtn;
    QPushButton *CloseBtn;
    Widget *widget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ShowWindow)
    {
        if (ShowWindow->objectName().isEmpty())
            ShowWindow->setObjectName(QStringLiteral("ShowWindow"));
        ShowWindow->resize(1383, 767);
        centralWidget = new QWidget(ShowWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        openBtn = new QPushButton(centralWidget);
        openBtn->setObjectName(QStringLiteral("openBtn"));
        openBtn->setGeometry(QRect(50, 0, 80, 26));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(openBtn->sizePolicy().hasHeightForWidth());
        openBtn->setSizePolicy(sizePolicy);
        CloseBtn = new QPushButton(centralWidget);
        CloseBtn->setObjectName(QStringLiteral("CloseBtn"));
        CloseBtn->setGeometry(QRect(170, 0, 80, 26));
        sizePolicy.setHeightForWidth(CloseBtn->sizePolicy().hasHeightForWidth());
        CloseBtn->setSizePolicy(sizePolicy);
        widget = new Widget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(50, 50, 1280, 640));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        ShowWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ShowWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ShowWindow->setStatusBar(statusBar);

        retranslateUi(ShowWindow);

        QMetaObject::connectSlotsByName(ShowWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ShowWindow)
    {
        ShowWindow->setWindowTitle(QApplication::translate("ShowWindow", "ShowWindow", Q_NULLPTR));
        openBtn->setText(QApplication::translate("ShowWindow", "OpenLasFile", Q_NULLPTR));
        CloseBtn->setText(QApplication::translate("ShowWindow", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ShowWindow: public Ui_ShowWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWWINDOW_H
