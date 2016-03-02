/********************************************************************************
** Form generated from reading UI file 'IranEntryPoint.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IRANENTRYPOINT_H
#define UI_IRANENTRYPOINT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IranEntryPointClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *IranEntryPointClass)
    {
        if (IranEntryPointClass->objectName().isEmpty())
            IranEntryPointClass->setObjectName(QStringLiteral("IranEntryPointClass"));
        IranEntryPointClass->resize(720, 789);
        IranEntryPointClass->setAcceptDrops(false);
        centralWidget = new QWidget(IranEntryPointClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tabWidget = new QTabWidget(widget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        verticalLayout->addWidget(widget);

        IranEntryPointClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(IranEntryPointClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 720, 21));
        IranEntryPointClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(IranEntryPointClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        IranEntryPointClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(IranEntryPointClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        IranEntryPointClass->setStatusBar(statusBar);

        retranslateUi(IranEntryPointClass);

        QMetaObject::connectSlotsByName(IranEntryPointClass);
    } // setupUi

    void retranslateUi(QMainWindow *IranEntryPointClass)
    {
        IranEntryPointClass->setWindowTitle(QApplication::translate("IranEntryPointClass", "IranEntryPoint", 0));
    } // retranslateUi

};

namespace Ui {
    class IranEntryPointClass: public Ui_IranEntryPointClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IRANENTRYPOINT_H
