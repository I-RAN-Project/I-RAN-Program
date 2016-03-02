/********************************************************************************
** Form generated from reading UI file 'DependenciesTree.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPENDENCIESTREE_H
#define UI_DEPENDENCIESTREE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DependenciesTree
{
public:
    QLabel *label;

    void setupUi(QWidget *DependenciesTree)
    {
        if (DependenciesTree->objectName().isEmpty())
            DependenciesTree->setObjectName(QStringLiteral("DependenciesTree"));
        DependenciesTree->resize(400, 300);
        label = new QLabel(DependenciesTree);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 90, 341, 151));

        retranslateUi(DependenciesTree);

        QMetaObject::connectSlotsByName(DependenciesTree);
    } // setupUi

    void retranslateUi(QWidget *DependenciesTree)
    {
        DependenciesTree->setWindowTitle(QApplication::translate("DependenciesTree", "Form", 0));
        label->setText(QApplication::translate("DependenciesTree", "So much work... :( I JUST WANT TO MAKE GODDAM CONSOLE APP", 0));
    } // retranslateUi

};

namespace Ui {
    class DependenciesTree: public Ui_DependenciesTree {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPENDENCIESTREE_H
