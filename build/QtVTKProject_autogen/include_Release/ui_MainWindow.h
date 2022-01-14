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
#include <QtWidgets/QApplication>
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
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_6;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_5;
    QVTKOpenGLWidget *openGLWidget_2;
    QVBoxLayout *verticalLayout_2;
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
        MainWindow->resize(1190, 729);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(240, 240, 240, 255));
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
        palette.setBrush(QPalette::Active, QPalette::Window, brush2);
        QBrush brush5(QColor(105, 105, 105, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush5);
        QBrush brush6(QColor(0, 120, 215, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush2);
        QBrush brush7(QColor(0, 0, 255, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Link, brush7);
        QBrush brush8(QColor(255, 0, 255, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::LinkVisited, brush8);
        QBrush brush9(QColor(245, 245, 245, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush9);
        palette.setBrush(QPalette::Active, QPalette::NoRole, brush);
        QBrush brush10(QColor(255, 255, 220, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush11(QColor(0, 0, 0, 128));
        brush11.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush11);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Link, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush9);
        QBrush brush12(QColor(0, 0, 0, 255));
        brush12.setStyle(Qt::NoBrush);
        palette.setBrush(QPalette::Inactive, QPalette::NoRole, brush12);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush11);
#endif
        QBrush brush13(QColor(120, 120, 120, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush13);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        QBrush brush14(QColor(247, 247, 247, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush14);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush13);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush13);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Link, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        QBrush brush15(QColor(0, 0, 0, 255));
        brush15.setStyle(Qt::NoBrush);
        palette.setBrush(QPalette::Disabled, QPalette::NoRole, brush15);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
        MainWindow->setPalette(palette);
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
        openGLWidget_2->setAutoFillBackground(true);

        horizontalLayout_5->addWidget(openGLWidget_2);


        horizontalLayout_6->addWidget(frame);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy3);
        horizontalLayout_4 = new QHBoxLayout(groupBox);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        addCircleButton = new QPushButton(groupBox);
        addCircleButton->setObjectName(QString::fromUtf8("addCircleButton"));

        verticalLayout->addWidget(addCircleButton);

        addSquareButton = new QPushButton(groupBox);
        addSquareButton->setObjectName(QString::fromUtf8("addSquareButton"));

        verticalLayout->addWidget(addSquareButton);

        addRectangleButton = new QPushButton(groupBox);
        addRectangleButton->setObjectName(QString::fromUtf8("addRectangleButton"));

        verticalLayout->addWidget(addRectangleButton);

        addTriangleButton = new QPushButton(groupBox);
        addTriangleButton->setObjectName(QString::fromUtf8("addTriangleButton"));

        verticalLayout->addWidget(addTriangleButton);


        horizontalLayout_4->addLayout(verticalLayout);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        sizePolicy3.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy3);
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        addCubeButton = new QPushButton(groupBox_2);
        addCubeButton->setObjectName(QString::fromUtf8("addCubeButton"));

        verticalLayout_4->addWidget(addCubeButton);

        addSphereButton = new QPushButton(groupBox_2);
        addSphereButton->setObjectName(QString::fromUtf8("addSphereButton"));

        verticalLayout_4->addWidget(addSphereButton);

        addConeButton = new QPushButton(groupBox_2);
        addConeButton->setObjectName(QString::fromUtf8("addConeButton"));

        verticalLayout_4->addWidget(addConeButton);


        verticalLayout_3->addLayout(verticalLayout_4);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        sizePolicy3.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy3);
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

        verticalLayout_7->addWidget(colorBox);


        verticalLayout_2->addWidget(groupBox_4);


        horizontalLayout_6->addLayout(verticalLayout_2);

        horizontalLayout_6->setStretch(0, 6);
        horizontalLayout_6->setStretch(1, 1);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Paint3d Clone", nullptr));
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
