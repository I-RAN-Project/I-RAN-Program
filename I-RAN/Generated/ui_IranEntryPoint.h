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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IranEntryPointClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QWidget *tab_2;
    QWidget *tab_3;
    QWidget *tab_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *IranEntryPointClass)
    {
        if (IranEntryPointClass->objectName().isEmpty())
            IranEntryPointClass->setObjectName(QStringLiteral("IranEntryPointClass"));
        IranEntryPointClass->resize(600, 618);
        centralWidget = new QWidget(IranEntryPointClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tabWidget = new QTabWidget(widget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setLayoutDirection(Qt::LeftToRight);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tabWidget->addTab(tab_4, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(widget);

        IranEntryPointClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(IranEntryPointClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        IranEntryPointClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(IranEntryPointClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        IranEntryPointClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(IranEntryPointClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        IranEntryPointClass->setStatusBar(statusBar);

        retranslateUi(IranEntryPointClass);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(IranEntryPointClass);
    } // setupUi

    void retranslateUi(QMainWindow *IranEntryPointClass)
    {
        IranEntryPointClass->setWindowTitle(QApplication::translate("IranEntryPointClass", "IranEntryPoint", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("IranEntryPointClass", "Tab 1", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("IranEntryPointClass", "Tab 2", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("IranEntryPointClass", "tab_3", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("IranEntryPointClass", "tab_4", 0));
    } // retranslateUi

};

namespace Ui {
    class IranEntryPointClass: public Ui_IranEntryPointClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IRANENTRYPOINT_H
