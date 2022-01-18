/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qvtkopenglwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *newSketch;
    QAction *exitSketch;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_6;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_5;
    QVTKOpenGLWidget *openGLWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *clearSpaceButton;
    QPushButton *deleteActor;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    QDoubleSpinBox *cameraX;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_5;
    QDoubleSpinBox *cameraY;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_6;
    QDoubleSpinBox *cameraZ;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_7;
    QDoubleSpinBox *cameraAzimuth;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_8;
    QDoubleSpinBox *cameraElevation;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QPushButton *addCircleButton;
    QPushButton *addSquareButton;
    QPushButton *addRectangleButton;
    QPushButton *addTriangleButton;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QPushButton *addCubeButton;
    QPushButton *addSphereButton;
    QPushButton *addConeButton;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSlider *redColorSlider;
    QLabel *redValue;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSlider *greenColorSlider;
    QLabel *greenValue;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSlider *blueColorSlider;
    QLabel *blueValue;
    QWidget *colorBox;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1190, 900);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(700, 900));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(23, 188, 188, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(227, 227, 227, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(160, 160, 160, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        QBrush brush5(QColor(127, 128, 129, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush5);
        QBrush brush6(QColor(105, 105, 105, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        QBrush brush7(QColor(0, 120, 215, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush7);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush2);
        QBrush brush8(QColor(0, 0, 255, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Link, brush8);
        QBrush brush9(QColor(255, 0, 255, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::LinkVisited, brush9);
        QBrush brush10(QColor(245, 245, 245, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        palette.setBrush(QPalette::Active, QPalette::NoRole, brush);
        QBrush brush11(QColor(255, 255, 220, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush12(QColor(0, 0, 0, 128));
        brush12.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush13(QColor(240, 240, 240, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush13);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush13);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Link, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        QBrush brush14(QColor(0, 0, 0, 255));
        brush14.setStyle(Qt::NoBrush);
        palette.setBrush(QPalette::Inactive, QPalette::NoRole, brush14);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush12);
#endif
        QBrush brush15(QColor(120, 120, 120, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush15);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        QBrush brush16(QColor(247, 247, 247, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush16);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush15);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush15);
        QBrush brush17(QColor(64, 65, 66, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush17);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Link, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        QBrush brush18(QColor(0, 0, 0, 255));
        brush18.setStyle(Qt::NoBrush);
        palette.setBrush(QPalette::Disabled, QPalette::NoRole, brush18);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        MainWindow->setPalette(palette);
        QFont font;
        MainWindow->setFont(font);
        newSketch = new QAction(MainWindow);
        newSketch->setObjectName(QString::fromUtf8("newSketch"));
        exitSketch = new QAction(MainWindow);
        exitSketch->setObjectName(QString::fromUtf8("exitSketch"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy1);
        horizontalLayout_6 = new QHBoxLayout(centralwidget);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        openGLWidget_2 = new QVTKOpenGLWidget(frame);
        openGLWidget_2->setObjectName(QString::fromUtf8("openGLWidget_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(openGLWidget_2->sizePolicy().hasHeightForWidth());
        openGLWidget_2->setSizePolicy(sizePolicy2);
        openGLWidget_2->setMaximumSize(QSize(16777215, 16777215));
        openGLWidget_2->setCursor(QCursor(Qt::OpenHandCursor));
        openGLWidget_2->setMouseTracking(true);
        openGLWidget_2->setTabletTracking(true);
        openGLWidget_2->setAcceptDrops(true);
        openGLWidget_2->setAutoFillBackground(true);

        horizontalLayout_5->addWidget(openGLWidget_2);


        horizontalLayout_6->addWidget(frame);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        clearSpaceButton = new QPushButton(centralwidget);
        clearSpaceButton->setObjectName(QString::fromUtf8("clearSpaceButton"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        QBrush brush19(QColor(170, 0, 0, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush19);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush19);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush19);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush7);
        palette1.setBrush(QPalette::Active, QPalette::HighlightedText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Link, brush8);
        palette1.setBrush(QPalette::Active, QPalette::LinkVisited, brush9);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        palette1.setBrush(QPalette::Active, QPalette::NoRole, brush);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush19);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush19);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush19);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Link, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        QBrush brush20(QColor(0, 0, 0, 255));
        brush20.setStyle(Qt::NoBrush);
        palette1.setBrush(QPalette::Inactive, QPalette::NoRole, brush20);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush19);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush16);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush19);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush19);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Highlight, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Link, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        QBrush brush21(QColor(0, 0, 0, 255));
        brush21.setStyle(Qt::NoBrush);
        palette1.setBrush(QPalette::Disabled, QPalette::NoRole, brush21);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        clearSpaceButton->setPalette(palette1);
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        clearSpaceButton->setFont(font1);
        clearSpaceButton->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
""));

        verticalLayout_2->addWidget(clearSpaceButton);

        deleteActor = new QPushButton(centralwidget);
        deleteActor->setObjectName(QString::fromUtf8("deleteActor"));
        deleteActor->setEnabled(true);
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush19);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush19);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush19);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Highlight, brush7);
        palette2.setBrush(QPalette::Active, QPalette::HighlightedText, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Link, brush8);
        palette2.setBrush(QPalette::Active, QPalette::LinkVisited, brush9);
        QBrush brush22(QColor(204, 204, 204, 255));
        brush22.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush22);
        palette2.setBrush(QPalette::Active, QPalette::NoRole, brush);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush19);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush19);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush19);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Link, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush22);
        QBrush brush23(QColor(0, 0, 0, 255));
        brush23.setStyle(Qt::NoBrush);
        palette2.setBrush(QPalette::Inactive, QPalette::NoRole, brush23);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush19);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush16);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush19);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush19);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Highlight, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Link, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush22);
        QBrush brush24(QColor(0, 0, 0, 255));
        brush24.setStyle(Qt::NoBrush);
        palette2.setBrush(QPalette::Disabled, QPalette::NoRole, brush24);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        deleteActor->setPalette(palette2);
        deleteActor->setFont(font1);
        deleteActor->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"alternate-background-color: rgb(204, 204, 204);"));

        verticalLayout_2->addWidget(deleteActor);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush13);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush17);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Highlight, brush7);
        palette3.setBrush(QPalette::Active, QPalette::HighlightedText, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Link, brush8);
        palette3.setBrush(QPalette::Active, QPalette::LinkVisited, brush9);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        QBrush brush25(QColor(0, 0, 0, 255));
        brush25.setStyle(Qt::NoBrush);
        palette3.setBrush(QPalette::Active, QPalette::NoRole, brush25);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush13);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush13);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette3.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Link, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        QBrush brush26(QColor(0, 0, 0, 255));
        brush26.setStyle(Qt::NoBrush);
        palette3.setBrush(QPalette::Inactive, QPalette::NoRole, brush26);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush12);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush15);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush13);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush16);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush15);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush15);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush13);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush17);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Highlight, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Link, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        QBrush brush27(QColor(0, 0, 0, 255));
        brush27.setStyle(Qt::NoBrush);
        palette3.setBrush(QPalette::Disabled, QPalette::NoRole, brush27);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        groupBox_3->setPalette(palette3);
        verticalLayout_5 = new QVBoxLayout(groupBox_3);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush13);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush4);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush17);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Highlight, brush7);
        palette4.setBrush(QPalette::Active, QPalette::HighlightedText, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Link, brush8);
        palette4.setBrush(QPalette::Active, QPalette::LinkVisited, brush9);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        QBrush brush28(QColor(0, 0, 0, 255));
        brush28.setStyle(Qt::NoBrush);
        palette4.setBrush(QPalette::Active, QPalette::NoRole, brush28);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush13);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush13);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette4.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Link, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush9);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        QBrush brush29(QColor(0, 0, 0, 255));
        brush29.setStyle(Qt::NoBrush);
        palette4.setBrush(QPalette::Inactive, QPalette::NoRole, brush29);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush12);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush15);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush13);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush16);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush15);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush15);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush13);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush17);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Highlight, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Link, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush9);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        QBrush brush30(QColor(0, 0, 0, 255));
        brush30.setStyle(Qt::NoBrush);
        palette4.setBrush(QPalette::Disabled, QPalette::NoRole, brush30);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        label_4->setPalette(palette4);
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_4);

        cameraX = new QDoubleSpinBox(groupBox_3);
        cameraX->setObjectName(QString::fromUtf8("cameraX"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush13);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush4);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush17);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Highlight, brush7);
        palette5.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Link, brush8);
        palette5.setBrush(QPalette::Active, QPalette::LinkVisited, brush9);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        QBrush brush31(QColor(0, 0, 0, 255));
        brush31.setStyle(Qt::NoBrush);
        palette5.setBrush(QPalette::Active, QPalette::NoRole, brush31);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush13);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush13);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette5.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Link, brush8);
        palette5.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush9);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        QBrush brush32(QColor(0, 0, 0, 255));
        brush32.setStyle(Qt::NoBrush);
        palette5.setBrush(QPalette::Inactive, QPalette::NoRole, brush32);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush12);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush15);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush13);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush16);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush15);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush15);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush13);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush17);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Highlight, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Link, brush8);
        palette5.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush9);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        QBrush brush33(QColor(0, 0, 0, 255));
        brush33.setStyle(Qt::NoBrush);
        palette5.setBrush(QPalette::Disabled, QPalette::NoRole, brush33);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        cameraX->setPalette(palette5);
        cameraX->setMinimum(-999.990000000000009);
        cameraX->setMaximum(999.990000000000009);

        horizontalLayout_7->addWidget(cameraX);


        verticalLayout_5->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush13);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush4);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush17);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Highlight, brush7);
        palette6.setBrush(QPalette::Active, QPalette::HighlightedText, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Link, brush8);
        palette6.setBrush(QPalette::Active, QPalette::LinkVisited, brush9);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        QBrush brush34(QColor(0, 0, 0, 255));
        brush34.setStyle(Qt::NoBrush);
        palette6.setBrush(QPalette::Active, QPalette::NoRole, brush34);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush13);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush13);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette6.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Link, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush9);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        QBrush brush35(QColor(0, 0, 0, 255));
        brush35.setStyle(Qt::NoBrush);
        palette6.setBrush(QPalette::Inactive, QPalette::NoRole, brush35);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush12);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush15);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush13);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush16);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush15);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush15);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush13);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush17);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Highlight, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Link, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush9);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        QBrush brush36(QColor(0, 0, 0, 255));
        brush36.setStyle(Qt::NoBrush);
        palette6.setBrush(QPalette::Disabled, QPalette::NoRole, brush36);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        label_5->setPalette(palette6);
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(label_5);

        cameraY = new QDoubleSpinBox(groupBox_3);
        cameraY->setObjectName(QString::fromUtf8("cameraY"));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush13);
        palette7.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette7.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette7.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette7.setBrush(QPalette::Active, QPalette::Mid, brush4);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush);
        palette7.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush17);
        palette7.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Highlight, brush7);
        palette7.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Link, brush8);
        palette7.setBrush(QPalette::Active, QPalette::LinkVisited, brush9);
        palette7.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        QBrush brush37(QColor(0, 0, 0, 255));
        brush37.setStyle(Qt::NoBrush);
        palette7.setBrush(QPalette::Active, QPalette::NoRole, brush37);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush13);
        palette7.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette7.setBrush(QPalette::Inactive, QPalette::Mid, brush4);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush13);
        palette7.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette7.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Link, brush8);
        palette7.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush9);
        palette7.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        QBrush brush38(QColor(0, 0, 0, 255));
        brush38.setStyle(Qt::NoBrush);
        palette7.setBrush(QPalette::Inactive, QPalette::NoRole, brush38);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush12);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush15);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush13);
        palette7.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Midlight, brush16);
        palette7.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::Mid, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush15);
        palette7.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush15);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush13);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush17);
        palette7.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Highlight, brush7);
        palette7.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Link, brush8);
        palette7.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush9);
        palette7.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        QBrush brush39(QColor(0, 0, 0, 255));
        brush39.setStyle(Qt::NoBrush);
        palette7.setBrush(QPalette::Disabled, QPalette::NoRole, brush39);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        cameraY->setPalette(palette7);
        cameraY->setMinimum(-999.990000000000009);
        cameraY->setMaximum(999.990000000000009);

        horizontalLayout_8->addWidget(cameraY);


        verticalLayout_5->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush13);
        palette8.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette8.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette8.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette8.setBrush(QPalette::Active, QPalette::Mid, brush4);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush);
        palette8.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush17);
        palette8.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette8.setBrush(QPalette::Active, QPalette::Highlight, brush7);
        palette8.setBrush(QPalette::Active, QPalette::HighlightedText, brush2);
        palette8.setBrush(QPalette::Active, QPalette::Link, brush8);
        palette8.setBrush(QPalette::Active, QPalette::LinkVisited, brush9);
        palette8.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        QBrush brush40(QColor(0, 0, 0, 255));
        brush40.setStyle(Qt::NoBrush);
        palette8.setBrush(QPalette::Active, QPalette::NoRole, brush40);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush13);
        palette8.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette8.setBrush(QPalette::Inactive, QPalette::Mid, brush4);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush13);
        palette8.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette8.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Link, brush8);
        palette8.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush9);
        palette8.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        QBrush brush41(QColor(0, 0, 0, 255));
        brush41.setStyle(Qt::NoBrush);
        palette8.setBrush(QPalette::Inactive, QPalette::NoRole, brush41);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush12);
#endif
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush15);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush13);
        palette8.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::Midlight, brush16);
        palette8.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::Mid, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush15);
        palette8.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush15);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush13);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush17);
        palette8.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Highlight, brush7);
        palette8.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::Link, brush8);
        palette8.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush9);
        palette8.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        QBrush brush42(QColor(0, 0, 0, 255));
        brush42.setStyle(Qt::NoBrush);
        palette8.setBrush(QPalette::Disabled, QPalette::NoRole, brush42);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        label_6->setPalette(palette8);
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(label_6);

        cameraZ = new QDoubleSpinBox(groupBox_3);
        cameraZ->setObjectName(QString::fromUtf8("cameraZ"));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush13);
        palette9.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette9.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette9.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette9.setBrush(QPalette::Active, QPalette::Mid, brush4);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush);
        palette9.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush17);
        palette9.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette9.setBrush(QPalette::Active, QPalette::Highlight, brush7);
        palette9.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Link, brush8);
        palette9.setBrush(QPalette::Active, QPalette::LinkVisited, brush9);
        palette9.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        QBrush brush43(QColor(0, 0, 0, 255));
        brush43.setStyle(Qt::NoBrush);
        palette9.setBrush(QPalette::Active, QPalette::NoRole, brush43);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush13);
        palette9.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette9.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette9.setBrush(QPalette::Inactive, QPalette::Mid, brush4);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush13);
        palette9.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette9.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Link, brush8);
        palette9.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush9);
        palette9.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        QBrush brush44(QColor(0, 0, 0, 255));
        brush44.setStyle(Qt::NoBrush);
        palette9.setBrush(QPalette::Inactive, QPalette::NoRole, brush44);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush12);
#endif
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush15);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush13);
        palette9.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::Midlight, brush16);
        palette9.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette9.setBrush(QPalette::Disabled, QPalette::Mid, brush4);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush15);
        palette9.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush15);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush13);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush17);
        palette9.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Highlight, brush7);
        palette9.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::Link, brush8);
        palette9.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush9);
        palette9.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        QBrush brush45(QColor(0, 0, 0, 255));
        brush45.setStyle(Qt::NoBrush);
        palette9.setBrush(QPalette::Disabled, QPalette::NoRole, brush45);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        cameraZ->setPalette(palette9);
        cameraZ->setMinimum(-999.990000000000009);
        cameraZ->setMaximum(999.990000000000009);
        cameraZ->setValue(5.000000000000000);

        horizontalLayout_9->addWidget(cameraZ);


        verticalLayout_5->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush13);
        palette10.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette10.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette10.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette10.setBrush(QPalette::Active, QPalette::Mid, brush4);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush);
        palette10.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush17);
        palette10.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette10.setBrush(QPalette::Active, QPalette::Highlight, brush7);
        palette10.setBrush(QPalette::Active, QPalette::HighlightedText, brush2);
        palette10.setBrush(QPalette::Active, QPalette::Link, brush8);
        palette10.setBrush(QPalette::Active, QPalette::LinkVisited, brush9);
        palette10.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        QBrush brush46(QColor(0, 0, 0, 255));
        brush46.setStyle(Qt::NoBrush);
        palette10.setBrush(QPalette::Active, QPalette::NoRole, brush46);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush13);
        palette10.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette10.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette10.setBrush(QPalette::Inactive, QPalette::Mid, brush4);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush13);
        palette10.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette10.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Link, brush8);
        palette10.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush9);
        palette10.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        QBrush brush47(QColor(0, 0, 0, 255));
        brush47.setStyle(Qt::NoBrush);
        palette10.setBrush(QPalette::Inactive, QPalette::NoRole, brush47);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush12);
#endif
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush15);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush13);
        palette10.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::Midlight, brush16);
        palette10.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette10.setBrush(QPalette::Disabled, QPalette::Mid, brush4);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush15);
        palette10.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush15);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush13);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush17);
        palette10.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Highlight, brush7);
        palette10.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::Link, brush8);
        palette10.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush9);
        palette10.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        QBrush brush48(QColor(0, 0, 0, 255));
        brush48.setStyle(Qt::NoBrush);
        palette10.setBrush(QPalette::Disabled, QPalette::NoRole, brush48);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        label_7->setPalette(palette10);
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(label_7);

        cameraAzimuth = new QDoubleSpinBox(groupBox_3);
        cameraAzimuth->setObjectName(QString::fromUtf8("cameraAzimuth"));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush13);
        palette11.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette11.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette11.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette11.setBrush(QPalette::Active, QPalette::Mid, brush4);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush);
        palette11.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush17);
        palette11.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette11.setBrush(QPalette::Active, QPalette::Highlight, brush7);
        palette11.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Link, brush8);
        palette11.setBrush(QPalette::Active, QPalette::LinkVisited, brush9);
        palette11.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        QBrush brush49(QColor(0, 0, 0, 255));
        brush49.setStyle(Qt::NoBrush);
        palette11.setBrush(QPalette::Active, QPalette::NoRole, brush49);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush13);
        palette11.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette11.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette11.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette11.setBrush(QPalette::Inactive, QPalette::Mid, brush4);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush13);
        palette11.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette11.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Link, brush8);
        palette11.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush9);
        palette11.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        QBrush brush50(QColor(0, 0, 0, 255));
        brush50.setStyle(Qt::NoBrush);
        palette11.setBrush(QPalette::Inactive, QPalette::NoRole, brush50);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush12);
#endif
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush15);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush13);
        palette11.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette11.setBrush(QPalette::Disabled, QPalette::Midlight, brush16);
        palette11.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette11.setBrush(QPalette::Disabled, QPalette::Mid, brush4);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush15);
        palette11.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush15);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush13);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush17);
        palette11.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::Highlight, brush7);
        palette11.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush2);
        palette11.setBrush(QPalette::Disabled, QPalette::Link, brush8);
        palette11.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush9);
        palette11.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        QBrush brush51(QColor(0, 0, 0, 255));
        brush51.setStyle(Qt::NoBrush);
        palette11.setBrush(QPalette::Disabled, QPalette::NoRole, brush51);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        cameraAzimuth->setPalette(palette11);
        cameraAzimuth->setMinimum(-360.000000000000000);
        cameraAzimuth->setMaximum(360.000000000000000);

        horizontalLayout_10->addWidget(cameraAzimuth);


        verticalLayout_5->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette12.setBrush(QPalette::Active, QPalette::Button, brush13);
        palette12.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette12.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette12.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette12.setBrush(QPalette::Active, QPalette::Mid, brush4);
        palette12.setBrush(QPalette::Active, QPalette::Text, brush);
        palette12.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush17);
        palette12.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette12.setBrush(QPalette::Active, QPalette::Highlight, brush7);
        palette12.setBrush(QPalette::Active, QPalette::HighlightedText, brush2);
        palette12.setBrush(QPalette::Active, QPalette::Link, brush8);
        palette12.setBrush(QPalette::Active, QPalette::LinkVisited, brush9);
        palette12.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        QBrush brush52(QColor(0, 0, 0, 255));
        brush52.setStyle(Qt::NoBrush);
        palette12.setBrush(QPalette::Active, QPalette::NoRole, brush52);
        palette12.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette12.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush13);
        palette12.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette12.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette12.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette12.setBrush(QPalette::Inactive, QPalette::Mid, brush4);
        palette12.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush13);
        palette12.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette12.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Link, brush8);
        palette12.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush9);
        palette12.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        QBrush brush53(QColor(0, 0, 0, 255));
        brush53.setStyle(Qt::NoBrush);
        palette12.setBrush(QPalette::Inactive, QPalette::NoRole, brush53);
        palette12.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette12.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush12);
#endif
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush15);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush13);
        palette12.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette12.setBrush(QPalette::Disabled, QPalette::Midlight, brush16);
        palette12.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette12.setBrush(QPalette::Disabled, QPalette::Mid, brush4);
        palette12.setBrush(QPalette::Disabled, QPalette::Text, brush15);
        palette12.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush15);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush13);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush17);
        palette12.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::Highlight, brush7);
        palette12.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush2);
        palette12.setBrush(QPalette::Disabled, QPalette::Link, brush8);
        palette12.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush9);
        palette12.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        QBrush brush54(QColor(0, 0, 0, 255));
        brush54.setStyle(Qt::NoBrush);
        palette12.setBrush(QPalette::Disabled, QPalette::NoRole, brush54);
        palette12.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette12.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        label_8->setPalette(palette12);
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(label_8);

        cameraElevation = new QDoubleSpinBox(groupBox_3);
        cameraElevation->setObjectName(QString::fromUtf8("cameraElevation"));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Active, QPalette::Button, brush13);
        palette13.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette13.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette13.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette13.setBrush(QPalette::Active, QPalette::Mid, brush4);
        palette13.setBrush(QPalette::Active, QPalette::Text, brush);
        palette13.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette13.setBrush(QPalette::Active, QPalette::Window, brush17);
        palette13.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette13.setBrush(QPalette::Active, QPalette::Highlight, brush7);
        palette13.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette13.setBrush(QPalette::Active, QPalette::Link, brush8);
        palette13.setBrush(QPalette::Active, QPalette::LinkVisited, brush9);
        palette13.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        QBrush brush55(QColor(0, 0, 0, 255));
        brush55.setStyle(Qt::NoBrush);
        palette13.setBrush(QPalette::Active, QPalette::NoRole, brush55);
        palette13.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette13.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Button, brush13);
        palette13.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette13.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette13.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette13.setBrush(QPalette::Inactive, QPalette::Mid, brush4);
        palette13.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette13.setBrush(QPalette::Inactive, QPalette::Window, brush13);
        palette13.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette13.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette13.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Link, brush8);
        palette13.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush9);
        palette13.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        QBrush brush56(QColor(0, 0, 0, 255));
        brush56.setStyle(Qt::NoBrush);
        palette13.setBrush(QPalette::Inactive, QPalette::NoRole, brush56);
        palette13.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette13.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush12);
#endif
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush15);
        palette13.setBrush(QPalette::Disabled, QPalette::Button, brush13);
        palette13.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette13.setBrush(QPalette::Disabled, QPalette::Midlight, brush16);
        palette13.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette13.setBrush(QPalette::Disabled, QPalette::Mid, brush4);
        palette13.setBrush(QPalette::Disabled, QPalette::Text, brush15);
        palette13.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush15);
        palette13.setBrush(QPalette::Disabled, QPalette::Base, brush13);
        palette13.setBrush(QPalette::Disabled, QPalette::Window, brush17);
        palette13.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::Highlight, brush7);
        palette13.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush2);
        palette13.setBrush(QPalette::Disabled, QPalette::Link, brush8);
        palette13.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush9);
        palette13.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        QBrush brush57(QColor(0, 0, 0, 255));
        brush57.setStyle(Qt::NoBrush);
        palette13.setBrush(QPalette::Disabled, QPalette::NoRole, brush57);
        palette13.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette13.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        cameraElevation->setPalette(palette13);
        cameraElevation->setMinimum(-360.000000000000000);
        cameraElevation->setMaximum(360.000000000000000);

        horizontalLayout_11->addWidget(cameraElevation);


        verticalLayout_5->addLayout(horizontalLayout_11);


        verticalLayout_2->addWidget(groupBox_3);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy3);
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette14.setBrush(QPalette::Active, QPalette::Button, brush13);
        palette14.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette14.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette14.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette14.setBrush(QPalette::Active, QPalette::Mid, brush4);
        palette14.setBrush(QPalette::Active, QPalette::Text, brush);
        palette14.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette14.setBrush(QPalette::Active, QPalette::Window, brush17);
        palette14.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette14.setBrush(QPalette::Active, QPalette::Highlight, brush7);
        palette14.setBrush(QPalette::Active, QPalette::HighlightedText, brush2);
        palette14.setBrush(QPalette::Active, QPalette::Link, brush8);
        palette14.setBrush(QPalette::Active, QPalette::LinkVisited, brush9);
        palette14.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        QBrush brush58(QColor(0, 0, 0, 255));
        brush58.setStyle(Qt::NoBrush);
        palette14.setBrush(QPalette::Active, QPalette::NoRole, brush58);
        palette14.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette14.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Button, brush13);
        palette14.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette14.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette14.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette14.setBrush(QPalette::Inactive, QPalette::Mid, brush4);
        palette14.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette14.setBrush(QPalette::Inactive, QPalette::Window, brush13);
        palette14.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette14.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette14.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Link, brush8);
        palette14.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush9);
        palette14.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        QBrush brush59(QColor(0, 0, 0, 255));
        brush59.setStyle(Qt::NoBrush);
        palette14.setBrush(QPalette::Inactive, QPalette::NoRole, brush59);
        palette14.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette14.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush12);
#endif
        palette14.setBrush(QPalette::Disabled, QPalette::WindowText, brush15);
        palette14.setBrush(QPalette::Disabled, QPalette::Button, brush13);
        palette14.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette14.setBrush(QPalette::Disabled, QPalette::Midlight, brush16);
        palette14.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette14.setBrush(QPalette::Disabled, QPalette::Mid, brush4);
        palette14.setBrush(QPalette::Disabled, QPalette::Text, brush15);
        palette14.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette14.setBrush(QPalette::Disabled, QPalette::ButtonText, brush15);
        palette14.setBrush(QPalette::Disabled, QPalette::Base, brush13);
        palette14.setBrush(QPalette::Disabled, QPalette::Window, brush17);
        palette14.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::Highlight, brush7);
        palette14.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush2);
        palette14.setBrush(QPalette::Disabled, QPalette::Link, brush8);
        palette14.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush9);
        palette14.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        QBrush brush60(QColor(0, 0, 0, 255));
        brush60.setStyle(Qt::NoBrush);
        palette14.setBrush(QPalette::Disabled, QPalette::NoRole, brush60);
        palette14.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette14.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        groupBox->setPalette(palette14);
        horizontalLayout_4 = new QHBoxLayout(groupBox);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        addCircleButton = new QPushButton(groupBox);
        addCircleButton->setObjectName(QString::fromUtf8("addCircleButton"));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        QBrush brush61(QColor(85, 166, 229, 255));
        brush61.setStyle(Qt::SolidPattern);
        palette15.setBrush(QPalette::Active, QPalette::Button, brush61);
        palette15.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette15.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette15.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette15.setBrush(QPalette::Active, QPalette::Mid, brush4);
        palette15.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette15.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette15.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette15.setBrush(QPalette::Active, QPalette::Base, brush61);
        palette15.setBrush(QPalette::Active, QPalette::Window, brush61);
        palette15.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette15.setBrush(QPalette::Active, QPalette::Highlight, brush7);
        palette15.setBrush(QPalette::Active, QPalette::HighlightedText, brush2);
        palette15.setBrush(QPalette::Active, QPalette::Link, brush8);
        palette15.setBrush(QPalette::Active, QPalette::LinkVisited, brush9);
        palette15.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        palette15.setBrush(QPalette::Active, QPalette::NoRole, brush);
        palette15.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette15.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette15.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette15.setBrush(QPalette::Inactive, QPalette::Button, brush61);
        palette15.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette15.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette15.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette15.setBrush(QPalette::Inactive, QPalette::Mid, brush4);
        palette15.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette15.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette15.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette15.setBrush(QPalette::Inactive, QPalette::Base, brush61);
        palette15.setBrush(QPalette::Inactive, QPalette::Window, brush61);
        palette15.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette15.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette15.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Link, brush8);
        palette15.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush9);
        palette15.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        QBrush brush62(QColor(0, 0, 0, 255));
        brush62.setStyle(Qt::NoBrush);
        palette15.setBrush(QPalette::Inactive, QPalette::NoRole, brush62);
        palette15.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette15.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette15.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette15.setBrush(QPalette::Disabled, QPalette::Button, brush61);
        palette15.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette15.setBrush(QPalette::Disabled, QPalette::Midlight, brush16);
        palette15.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette15.setBrush(QPalette::Disabled, QPalette::Mid, brush4);
        palette15.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette15.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette15.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette15.setBrush(QPalette::Disabled, QPalette::Base, brush61);
        palette15.setBrush(QPalette::Disabled, QPalette::Window, brush61);
        palette15.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::Highlight, brush7);
        palette15.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush2);
        palette15.setBrush(QPalette::Disabled, QPalette::Link, brush8);
        palette15.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush9);
        palette15.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        QBrush brush63(QColor(0, 0, 0, 255));
        brush63.setStyle(Qt::NoBrush);
        palette15.setBrush(QPalette::Disabled, QPalette::NoRole, brush63);
        palette15.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette15.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        addCircleButton->setPalette(palette15);
        addCircleButton->setFont(font1);
        addCircleButton->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 166, 229);\n"
"color: rgb(255, 255, 255);\n"
""));

        verticalLayout->addWidget(addCircleButton);

        addSquareButton = new QPushButton(groupBox);
        addSquareButton->setObjectName(QString::fromUtf8("addSquareButton"));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette16.setBrush(QPalette::Active, QPalette::Button, brush61);
        palette16.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette16.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette16.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette16.setBrush(QPalette::Active, QPalette::Mid, brush4);
        palette16.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette16.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette16.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette16.setBrush(QPalette::Active, QPalette::Base, brush61);
        palette16.setBrush(QPalette::Active, QPalette::Window, brush61);
        palette16.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette16.setBrush(QPalette::Active, QPalette::Highlight, brush7);
        palette16.setBrush(QPalette::Active, QPalette::HighlightedText, brush2);
        palette16.setBrush(QPalette::Active, QPalette::Link, brush8);
        palette16.setBrush(QPalette::Active, QPalette::LinkVisited, brush9);
        palette16.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        palette16.setBrush(QPalette::Active, QPalette::NoRole, brush);
        palette16.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette16.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette16.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette16.setBrush(QPalette::Inactive, QPalette::Button, brush61);
        palette16.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette16.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette16.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette16.setBrush(QPalette::Inactive, QPalette::Mid, brush4);
        palette16.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette16.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette16.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette16.setBrush(QPalette::Inactive, QPalette::Base, brush61);
        palette16.setBrush(QPalette::Inactive, QPalette::Window, brush61);
        palette16.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette16.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette16.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Link, brush8);
        palette16.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush9);
        palette16.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        QBrush brush64(QColor(0, 0, 0, 255));
        brush64.setStyle(Qt::NoBrush);
        palette16.setBrush(QPalette::Inactive, QPalette::NoRole, brush64);
        palette16.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette16.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette16.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette16.setBrush(QPalette::Disabled, QPalette::Button, brush61);
        palette16.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette16.setBrush(QPalette::Disabled, QPalette::Midlight, brush16);
        palette16.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette16.setBrush(QPalette::Disabled, QPalette::Mid, brush4);
        palette16.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette16.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette16.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette16.setBrush(QPalette::Disabled, QPalette::Base, brush61);
        palette16.setBrush(QPalette::Disabled, QPalette::Window, brush61);
        palette16.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::Highlight, brush7);
        palette16.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush2);
        palette16.setBrush(QPalette::Disabled, QPalette::Link, brush8);
        palette16.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush9);
        palette16.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        QBrush brush65(QColor(0, 0, 0, 255));
        brush65.setStyle(Qt::NoBrush);
        palette16.setBrush(QPalette::Disabled, QPalette::NoRole, brush65);
        palette16.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette16.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        addSquareButton->setPalette(palette16);
        addSquareButton->setFont(font1);
        addSquareButton->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 166, 229);\n"
"color: rgb(255, 255, 255);\n"
""));

        verticalLayout->addWidget(addSquareButton);

        addRectangleButton = new QPushButton(groupBox);
        addRectangleButton->setObjectName(QString::fromUtf8("addRectangleButton"));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette17.setBrush(QPalette::Active, QPalette::Button, brush61);
        palette17.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette17.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette17.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette17.setBrush(QPalette::Active, QPalette::Mid, brush4);
        palette17.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette17.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette17.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette17.setBrush(QPalette::Active, QPalette::Base, brush61);
        palette17.setBrush(QPalette::Active, QPalette::Window, brush61);
        palette17.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette17.setBrush(QPalette::Active, QPalette::Highlight, brush7);
        palette17.setBrush(QPalette::Active, QPalette::HighlightedText, brush2);
        palette17.setBrush(QPalette::Active, QPalette::Link, brush8);
        palette17.setBrush(QPalette::Active, QPalette::LinkVisited, brush9);
        palette17.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        palette17.setBrush(QPalette::Active, QPalette::NoRole, brush);
        palette17.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette17.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette17.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette17.setBrush(QPalette::Inactive, QPalette::Button, brush61);
        palette17.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette17.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette17.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette17.setBrush(QPalette::Inactive, QPalette::Mid, brush4);
        palette17.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette17.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette17.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette17.setBrush(QPalette::Inactive, QPalette::Base, brush61);
        palette17.setBrush(QPalette::Inactive, QPalette::Window, brush61);
        palette17.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette17.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette17.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::Link, brush8);
        palette17.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush9);
        palette17.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        QBrush brush66(QColor(0, 0, 0, 255));
        brush66.setStyle(Qt::NoBrush);
        palette17.setBrush(QPalette::Inactive, QPalette::NoRole, brush66);
        palette17.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette17.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette17.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette17.setBrush(QPalette::Disabled, QPalette::Button, brush61);
        palette17.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette17.setBrush(QPalette::Disabled, QPalette::Midlight, brush16);
        palette17.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette17.setBrush(QPalette::Disabled, QPalette::Mid, brush4);
        palette17.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette17.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette17.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette17.setBrush(QPalette::Disabled, QPalette::Base, brush61);
        palette17.setBrush(QPalette::Disabled, QPalette::Window, brush61);
        palette17.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::Highlight, brush7);
        palette17.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush2);
        palette17.setBrush(QPalette::Disabled, QPalette::Link, brush8);
        palette17.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush9);
        palette17.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        QBrush brush67(QColor(0, 0, 0, 255));
        brush67.setStyle(Qt::NoBrush);
        palette17.setBrush(QPalette::Disabled, QPalette::NoRole, brush67);
        palette17.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette17.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        addRectangleButton->setPalette(palette17);
        addRectangleButton->setFont(font1);
        addRectangleButton->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 166, 229);\n"
"color: rgb(255, 255, 255);\n"
""));

        verticalLayout->addWidget(addRectangleButton);

        addTriangleButton = new QPushButton(groupBox);
        addTriangleButton->setObjectName(QString::fromUtf8("addTriangleButton"));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette18.setBrush(QPalette::Active, QPalette::Button, brush61);
        palette18.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette18.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette18.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette18.setBrush(QPalette::Active, QPalette::Mid, brush4);
        palette18.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette18.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette18.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette18.setBrush(QPalette::Active, QPalette::Base, brush61);
        palette18.setBrush(QPalette::Active, QPalette::Window, brush61);
        palette18.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette18.setBrush(QPalette::Active, QPalette::Highlight, brush7);
        palette18.setBrush(QPalette::Active, QPalette::HighlightedText, brush2);
        palette18.setBrush(QPalette::Active, QPalette::Link, brush8);
        palette18.setBrush(QPalette::Active, QPalette::LinkVisited, brush9);
        palette18.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        palette18.setBrush(QPalette::Active, QPalette::NoRole, brush);
        palette18.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette18.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette18.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette18.setBrush(QPalette::Inactive, QPalette::Button, brush61);
        palette18.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette18.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette18.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette18.setBrush(QPalette::Inactive, QPalette::Mid, brush4);
        palette18.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette18.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette18.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette18.setBrush(QPalette::Inactive, QPalette::Base, brush61);
        palette18.setBrush(QPalette::Inactive, QPalette::Window, brush61);
        palette18.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette18.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette18.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Link, brush8);
        palette18.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush9);
        palette18.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        QBrush brush68(QColor(0, 0, 0, 255));
        brush68.setStyle(Qt::NoBrush);
        palette18.setBrush(QPalette::Inactive, QPalette::NoRole, brush68);
        palette18.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette18.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette18.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette18.setBrush(QPalette::Disabled, QPalette::Button, brush61);
        palette18.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette18.setBrush(QPalette::Disabled, QPalette::Midlight, brush16);
        palette18.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette18.setBrush(QPalette::Disabled, QPalette::Mid, brush4);
        palette18.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette18.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette18.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette18.setBrush(QPalette::Disabled, QPalette::Base, brush61);
        palette18.setBrush(QPalette::Disabled, QPalette::Window, brush61);
        palette18.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::Highlight, brush7);
        palette18.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush2);
        palette18.setBrush(QPalette::Disabled, QPalette::Link, brush8);
        palette18.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush9);
        palette18.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        QBrush brush69(QColor(0, 0, 0, 255));
        brush69.setStyle(Qt::NoBrush);
        palette18.setBrush(QPalette::Disabled, QPalette::NoRole, brush69);
        palette18.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette18.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        addTriangleButton->setPalette(palette18);
        addTriangleButton->setFont(font1);
        addTriangleButton->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 166, 229);\n"
"color: rgb(255, 255, 255);\n"
""));

        verticalLayout->addWidget(addTriangleButton);


        horizontalLayout_4->addLayout(verticalLayout);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        sizePolicy3.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy3);
        QPalette palette19;
        palette19.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette19.setBrush(QPalette::Active, QPalette::Button, brush13);
        palette19.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette19.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette19.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette19.setBrush(QPalette::Active, QPalette::Mid, brush4);
        palette19.setBrush(QPalette::Active, QPalette::Text, brush);
        palette19.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette19.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette19.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette19.setBrush(QPalette::Active, QPalette::Window, brush17);
        palette19.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette19.setBrush(QPalette::Active, QPalette::Highlight, brush7);
        palette19.setBrush(QPalette::Active, QPalette::HighlightedText, brush2);
        palette19.setBrush(QPalette::Active, QPalette::Link, brush8);
        palette19.setBrush(QPalette::Active, QPalette::LinkVisited, brush9);
        palette19.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        QBrush brush70(QColor(0, 0, 0, 255));
        brush70.setStyle(Qt::NoBrush);
        palette19.setBrush(QPalette::Active, QPalette::NoRole, brush70);
        palette19.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette19.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette19.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::Button, brush13);
        palette19.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette19.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette19.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette19.setBrush(QPalette::Inactive, QPalette::Mid, brush4);
        palette19.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette19.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette19.setBrush(QPalette::Inactive, QPalette::Window, brush13);
        palette19.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette19.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette19.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::Link, brush8);
        palette19.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush9);
        palette19.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        QBrush brush71(QColor(0, 0, 0, 255));
        brush71.setStyle(Qt::NoBrush);
        palette19.setBrush(QPalette::Inactive, QPalette::NoRole, brush71);
        palette19.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette19.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush12);
#endif
        palette19.setBrush(QPalette::Disabled, QPalette::WindowText, brush15);
        palette19.setBrush(QPalette::Disabled, QPalette::Button, brush13);
        palette19.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette19.setBrush(QPalette::Disabled, QPalette::Midlight, brush16);
        palette19.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette19.setBrush(QPalette::Disabled, QPalette::Mid, brush4);
        palette19.setBrush(QPalette::Disabled, QPalette::Text, brush15);
        palette19.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette19.setBrush(QPalette::Disabled, QPalette::ButtonText, brush15);
        palette19.setBrush(QPalette::Disabled, QPalette::Base, brush13);
        palette19.setBrush(QPalette::Disabled, QPalette::Window, brush17);
        palette19.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette19.setBrush(QPalette::Disabled, QPalette::Highlight, brush7);
        palette19.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush2);
        palette19.setBrush(QPalette::Disabled, QPalette::Link, brush8);
        palette19.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush9);
        palette19.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        QBrush brush72(QColor(0, 0, 0, 255));
        brush72.setStyle(Qt::NoBrush);
        palette19.setBrush(QPalette::Disabled, QPalette::NoRole, brush72);
        palette19.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette19.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        groupBox_2->setPalette(palette19);
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        addCubeButton = new QPushButton(groupBox_2);
        addCubeButton->setObjectName(QString::fromUtf8("addCubeButton"));
        QPalette palette20;
        palette20.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette20.setBrush(QPalette::Active, QPalette::Button, brush61);
        palette20.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette20.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette20.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette20.setBrush(QPalette::Active, QPalette::Mid, brush4);
        palette20.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette20.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette20.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette20.setBrush(QPalette::Active, QPalette::Base, brush61);
        palette20.setBrush(QPalette::Active, QPalette::Window, brush61);
        palette20.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette20.setBrush(QPalette::Active, QPalette::Highlight, brush7);
        palette20.setBrush(QPalette::Active, QPalette::HighlightedText, brush2);
        palette20.setBrush(QPalette::Active, QPalette::Link, brush8);
        palette20.setBrush(QPalette::Active, QPalette::LinkVisited, brush9);
        palette20.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        palette20.setBrush(QPalette::Active, QPalette::NoRole, brush);
        palette20.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette20.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette20.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette20.setBrush(QPalette::Inactive, QPalette::Button, brush61);
        palette20.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette20.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette20.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette20.setBrush(QPalette::Inactive, QPalette::Mid, brush4);
        palette20.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette20.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette20.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette20.setBrush(QPalette::Inactive, QPalette::Base, brush61);
        palette20.setBrush(QPalette::Inactive, QPalette::Window, brush61);
        palette20.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette20.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette20.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::Link, brush8);
        palette20.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush9);
        palette20.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        QBrush brush73(QColor(0, 0, 0, 255));
        brush73.setStyle(Qt::NoBrush);
        palette20.setBrush(QPalette::Inactive, QPalette::NoRole, brush73);
        palette20.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette20.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette20.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette20.setBrush(QPalette::Disabled, QPalette::Button, brush61);
        palette20.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette20.setBrush(QPalette::Disabled, QPalette::Midlight, brush16);
        palette20.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette20.setBrush(QPalette::Disabled, QPalette::Mid, brush4);
        palette20.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette20.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette20.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette20.setBrush(QPalette::Disabled, QPalette::Base, brush61);
        palette20.setBrush(QPalette::Disabled, QPalette::Window, brush61);
        palette20.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette20.setBrush(QPalette::Disabled, QPalette::Highlight, brush7);
        palette20.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush2);
        palette20.setBrush(QPalette::Disabled, QPalette::Link, brush8);
        palette20.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush9);
        palette20.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        QBrush brush74(QColor(0, 0, 0, 255));
        brush74.setStyle(Qt::NoBrush);
        palette20.setBrush(QPalette::Disabled, QPalette::NoRole, brush74);
        palette20.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette20.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        addCubeButton->setPalette(palette20);
        addCubeButton->setFont(font1);
        addCubeButton->setAutoFillBackground(false);
        addCubeButton->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 166, 229);\n"
"color: rgb(255, 255, 255);\n"
""));
        addCubeButton->setAutoDefault(false);
        addCubeButton->setFlat(false);

        verticalLayout_4->addWidget(addCubeButton);

        addSphereButton = new QPushButton(groupBox_2);
        addSphereButton->setObjectName(QString::fromUtf8("addSphereButton"));
        QPalette palette21;
        palette21.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette21.setBrush(QPalette::Active, QPalette::Button, brush61);
        palette21.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette21.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette21.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette21.setBrush(QPalette::Active, QPalette::Mid, brush4);
        palette21.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette21.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette21.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette21.setBrush(QPalette::Active, QPalette::Base, brush61);
        palette21.setBrush(QPalette::Active, QPalette::Window, brush61);
        palette21.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette21.setBrush(QPalette::Active, QPalette::Highlight, brush7);
        palette21.setBrush(QPalette::Active, QPalette::HighlightedText, brush2);
        palette21.setBrush(QPalette::Active, QPalette::Link, brush8);
        palette21.setBrush(QPalette::Active, QPalette::LinkVisited, brush9);
        palette21.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        palette21.setBrush(QPalette::Active, QPalette::NoRole, brush);
        palette21.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette21.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette21.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette21.setBrush(QPalette::Inactive, QPalette::Button, brush61);
        palette21.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette21.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette21.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette21.setBrush(QPalette::Inactive, QPalette::Mid, brush4);
        palette21.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette21.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette21.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette21.setBrush(QPalette::Inactive, QPalette::Base, brush61);
        palette21.setBrush(QPalette::Inactive, QPalette::Window, brush61);
        palette21.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette21.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette21.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::Link, brush8);
        palette21.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush9);
        palette21.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        QBrush brush75(QColor(0, 0, 0, 255));
        brush75.setStyle(Qt::NoBrush);
        palette21.setBrush(QPalette::Inactive, QPalette::NoRole, brush75);
        palette21.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette21.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette21.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette21.setBrush(QPalette::Disabled, QPalette::Button, brush61);
        palette21.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette21.setBrush(QPalette::Disabled, QPalette::Midlight, brush16);
        palette21.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette21.setBrush(QPalette::Disabled, QPalette::Mid, brush4);
        palette21.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette21.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette21.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette21.setBrush(QPalette::Disabled, QPalette::Base, brush61);
        palette21.setBrush(QPalette::Disabled, QPalette::Window, brush61);
        palette21.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette21.setBrush(QPalette::Disabled, QPalette::Highlight, brush7);
        palette21.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush2);
        palette21.setBrush(QPalette::Disabled, QPalette::Link, brush8);
        palette21.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush9);
        palette21.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        QBrush brush76(QColor(0, 0, 0, 255));
        brush76.setStyle(Qt::NoBrush);
        palette21.setBrush(QPalette::Disabled, QPalette::NoRole, brush76);
        palette21.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette21.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        addSphereButton->setPalette(palette21);
        addSphereButton->setFont(font1);
        addSphereButton->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 166, 229);\n"
"color: rgb(255, 255, 255);\n"
""));

        verticalLayout_4->addWidget(addSphereButton);

        addConeButton = new QPushButton(groupBox_2);
        addConeButton->setObjectName(QString::fromUtf8("addConeButton"));
        QPalette palette22;
        palette22.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette22.setBrush(QPalette::Active, QPalette::Button, brush61);
        palette22.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette22.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette22.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette22.setBrush(QPalette::Active, QPalette::Mid, brush4);
        palette22.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette22.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette22.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette22.setBrush(QPalette::Active, QPalette::Base, brush61);
        palette22.setBrush(QPalette::Active, QPalette::Window, brush61);
        palette22.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette22.setBrush(QPalette::Active, QPalette::Highlight, brush7);
        palette22.setBrush(QPalette::Active, QPalette::HighlightedText, brush2);
        palette22.setBrush(QPalette::Active, QPalette::Link, brush8);
        palette22.setBrush(QPalette::Active, QPalette::LinkVisited, brush9);
        palette22.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        palette22.setBrush(QPalette::Active, QPalette::NoRole, brush);
        palette22.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette22.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette22.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette22.setBrush(QPalette::Inactive, QPalette::Button, brush61);
        palette22.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette22.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette22.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette22.setBrush(QPalette::Inactive, QPalette::Mid, brush4);
        palette22.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette22.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette22.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette22.setBrush(QPalette::Inactive, QPalette::Base, brush61);
        palette22.setBrush(QPalette::Inactive, QPalette::Window, brush61);
        palette22.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette22.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette22.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::Link, brush8);
        palette22.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush9);
        palette22.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        QBrush brush77(QColor(0, 0, 0, 255));
        brush77.setStyle(Qt::NoBrush);
        palette22.setBrush(QPalette::Inactive, QPalette::NoRole, brush77);
        palette22.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette22.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette22.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette22.setBrush(QPalette::Disabled, QPalette::Button, brush61);
        palette22.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette22.setBrush(QPalette::Disabled, QPalette::Midlight, brush16);
        palette22.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette22.setBrush(QPalette::Disabled, QPalette::Mid, brush4);
        palette22.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette22.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette22.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette22.setBrush(QPalette::Disabled, QPalette::Base, brush61);
        palette22.setBrush(QPalette::Disabled, QPalette::Window, brush61);
        palette22.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette22.setBrush(QPalette::Disabled, QPalette::Highlight, brush7);
        palette22.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush2);
        palette22.setBrush(QPalette::Disabled, QPalette::Link, brush8);
        palette22.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush9);
        palette22.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        QBrush brush78(QColor(0, 0, 0, 255));
        brush78.setStyle(Qt::NoBrush);
        palette22.setBrush(QPalette::Disabled, QPalette::NoRole, brush78);
        palette22.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette22.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        addConeButton->setPalette(palette22);
        addConeButton->setFont(font1);
        addConeButton->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 166, 229);\n"
"color: rgb(255, 255, 255);\n"
""));

        verticalLayout_4->addWidget(addConeButton);


        verticalLayout_3->addLayout(verticalLayout_4);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        sizePolicy3.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy3);
        QPalette palette23;
        palette23.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette23.setBrush(QPalette::Active, QPalette::Button, brush13);
        palette23.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette23.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette23.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette23.setBrush(QPalette::Active, QPalette::Mid, brush4);
        palette23.setBrush(QPalette::Active, QPalette::Text, brush);
        palette23.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette23.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette23.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette23.setBrush(QPalette::Active, QPalette::Window, brush17);
        palette23.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette23.setBrush(QPalette::Active, QPalette::Highlight, brush7);
        palette23.setBrush(QPalette::Active, QPalette::HighlightedText, brush2);
        palette23.setBrush(QPalette::Active, QPalette::Link, brush8);
        palette23.setBrush(QPalette::Active, QPalette::LinkVisited, brush9);
        palette23.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        QBrush brush79(QColor(0, 0, 0, 255));
        brush79.setStyle(Qt::NoBrush);
        palette23.setBrush(QPalette::Active, QPalette::NoRole, brush79);
        palette23.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette23.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette23.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::Button, brush13);
        palette23.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette23.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette23.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette23.setBrush(QPalette::Inactive, QPalette::Mid, brush4);
        palette23.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette23.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette23.setBrush(QPalette::Inactive, QPalette::Window, brush13);
        palette23.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette23.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette23.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::Link, brush8);
        palette23.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush9);
        palette23.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        QBrush brush80(QColor(0, 0, 0, 255));
        brush80.setStyle(Qt::NoBrush);
        palette23.setBrush(QPalette::Inactive, QPalette::NoRole, brush80);
        palette23.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette23.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush12);
#endif
        palette23.setBrush(QPalette::Disabled, QPalette::WindowText, brush15);
        palette23.setBrush(QPalette::Disabled, QPalette::Button, brush13);
        palette23.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette23.setBrush(QPalette::Disabled, QPalette::Midlight, brush16);
        palette23.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette23.setBrush(QPalette::Disabled, QPalette::Mid, brush4);
        palette23.setBrush(QPalette::Disabled, QPalette::Text, brush15);
        palette23.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette23.setBrush(QPalette::Disabled, QPalette::ButtonText, brush15);
        palette23.setBrush(QPalette::Disabled, QPalette::Base, brush13);
        palette23.setBrush(QPalette::Disabled, QPalette::Window, brush17);
        palette23.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette23.setBrush(QPalette::Disabled, QPalette::Highlight, brush7);
        palette23.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush2);
        palette23.setBrush(QPalette::Disabled, QPalette::Link, brush8);
        palette23.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush9);
        palette23.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        QBrush brush81(QColor(0, 0, 0, 255));
        brush81.setStyle(Qt::NoBrush);
        palette23.setBrush(QPalette::Disabled, QPalette::NoRole, brush81);
        palette23.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette23.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        groupBox_4->setPalette(palette23);
        verticalLayout_7 = new QVBoxLayout(groupBox_4);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox_4);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        redColorSlider = new QSlider(groupBox_4);
        redColorSlider->setObjectName(QString::fromUtf8("redColorSlider"));
        redColorSlider->setMaximum(255);
        redColorSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(redColorSlider);

        redValue = new QLabel(groupBox_4);
        redValue->setObjectName(QString::fromUtf8("redValue"));

        horizontalLayout->addWidget(redValue);


        verticalLayout_7->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        greenColorSlider = new QSlider(groupBox_4);
        greenColorSlider->setObjectName(QString::fromUtf8("greenColorSlider"));
        greenColorSlider->setMaximum(255);
        greenColorSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(greenColorSlider);

        greenValue = new QLabel(groupBox_4);
        greenValue->setObjectName(QString::fromUtf8("greenValue"));

        horizontalLayout_2->addWidget(greenValue);


        verticalLayout_7->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        blueColorSlider = new QSlider(groupBox_4);
        blueColorSlider->setObjectName(QString::fromUtf8("blueColorSlider"));
        blueColorSlider->setMaximum(255);
        blueColorSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(blueColorSlider);

        blueValue = new QLabel(groupBox_4);
        blueValue->setObjectName(QString::fromUtf8("blueValue"));

        horizontalLayout_3->addWidget(blueValue);


        verticalLayout_7->addLayout(horizontalLayout_3);

        colorBox = new QWidget(groupBox_4);
        colorBox->setObjectName(QString::fromUtf8("colorBox"));
        colorBox->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);border-style: dotted;border-width: 4px;padding: 8px;"));

        verticalLayout_7->addWidget(colorBox);


        verticalLayout_2->addWidget(groupBox_4);


        horizontalLayout_6->addLayout(verticalLayout_2);

        horizontalLayout_6->setStretch(0, 6);
        horizontalLayout_6->setStretch(1, 1);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        addCubeButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Paint3d Clone", nullptr));
        newSketch->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
        exitSketch->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        clearSpaceButton->setText(QCoreApplication::translate("MainWindow", "Clear Space", nullptr));
        deleteActor->setText(QCoreApplication::translate("MainWindow", "Delete Actor", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Camera Settings", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "y", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "z", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "RotateH", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "RotateV", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "2D Shapes", nullptr));
        addCircleButton->setText(QCoreApplication::translate("MainWindow", "Circle", nullptr));
        addSquareButton->setText(QCoreApplication::translate("MainWindow", "Square", nullptr));
        addRectangleButton->setText(QCoreApplication::translate("MainWindow", "Rectangle", nullptr));
        addTriangleButton->setText(QCoreApplication::translate("MainWindow", "Triangle", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "3D Shapes", nullptr));
        addCubeButton->setText(QCoreApplication::translate("MainWindow", "Cube", nullptr));
        addSphereButton->setText(QCoreApplication::translate("MainWindow", "Sphere", nullptr));
        addConeButton->setText(QCoreApplication::translate("MainWindow", "Cone", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "Color", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        redValue->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        greenValue->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        blueValue->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
