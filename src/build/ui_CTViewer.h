/********************************************************************************
** Form generated from reading UI file 'CTViewer.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTVIEWER_H
#define UI_CTVIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "QVTKWidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *open_action;
    QAction *save_action;
    QAction *resample_action;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QCheckBox *checkBox;
    QGridLayout *gridLayout;
    QVTKWidget *qvtkWidget;
    QVTKWidget *qvtkWidget_2;
    QVTKWidget *qvtkWidget_4;
    QVTKWidget *qvtkWidget_3;
    QMenuBar *menuBar;
    QMenu *file_menu;
    QMenu *tool_menu;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1044, 777);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1044, 777));
        MainWindow->setBaseSize(QSize(0, 0));
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        open_action = new QAction(MainWindow);
        open_action->setObjectName(QStringLiteral("open_action"));
        open_action->setCheckable(true);
        save_action = new QAction(MainWindow);
        save_action->setObjectName(QStringLiteral("save_action"));
        resample_action = new QAction(MainWindow);
        resample_action->setObjectName(QStringLiteral("resample_action"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setMinimumSize(QSize(260, 0));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        checkBox = new QCheckBox(frame);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(20, 30, 71, 16));

        horizontalLayout->addWidget(frame);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        qvtkWidget = new QVTKWidget(centralwidget);
        qvtkWidget->setObjectName(QStringLiteral("qvtkWidget"));

        gridLayout->addWidget(qvtkWidget, 0, 0, 1, 1);

        qvtkWidget_2 = new QVTKWidget(centralwidget);
        qvtkWidget_2->setObjectName(QStringLiteral("qvtkWidget_2"));

        gridLayout->addWidget(qvtkWidget_2, 0, 1, 1, 1);

        qvtkWidget_4 = new QVTKWidget(centralwidget);
        qvtkWidget_4->setObjectName(QStringLiteral("qvtkWidget_4"));

        gridLayout->addWidget(qvtkWidget_4, 1, 1, 1, 1);

        qvtkWidget_3 = new QVTKWidget(centralwidget);
        qvtkWidget_3->setObjectName(QStringLiteral("qvtkWidget_3"));

        gridLayout->addWidget(qvtkWidget_3, 1, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1044, 23));
        file_menu = new QMenu(menuBar);
        file_menu->setObjectName(QStringLiteral("file_menu"));
        tool_menu = new QMenu(menuBar);
        tool_menu->setObjectName(QStringLiteral("tool_menu"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(file_menu->menuAction());
        menuBar->addAction(tool_menu->menuAction());
        file_menu->addAction(open_action);
        file_menu->addSeparator();
        file_menu->addAction(save_action);
        tool_menu->addAction(resample_action);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "CTViewer", 0));
        open_action->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", 0));
        save_action->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230", 0));
        resample_action->setText(QApplication::translate("MainWindow", "\351\207\215\351\207\207\346\240\267", 0));
        checkBox->setText(QApplication::translate("MainWindow", "CheckBox", 0));
        file_menu->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266", 0));
        tool_menu->setTitle(QApplication::translate("MainWindow", "\345\267\245\345\205\267", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTVIEWER_H
