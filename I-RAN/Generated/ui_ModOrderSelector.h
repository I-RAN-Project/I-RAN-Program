/********************************************************************************
** Form generated from reading UI file 'ModOrderSelector.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODORDERSELECTOR_H
#define UI_MODORDERSELECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModOrderSelector
{
public:
    QLabel *label;

    void setupUi(QWidget *ModOrderSelector)
    {
        if (ModOrderSelector->objectName().isEmpty())
            ModOrderSelector->setObjectName(QStringLiteral("ModOrderSelector"));
        ModOrderSelector->resize(400, 300);
        label = new QLabel(ModOrderSelector);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 150, 151, 31));

        retranslateUi(ModOrderSelector);

        QMetaObject::connectSlotsByName(ModOrderSelector);
    } // setupUi

    void retranslateUi(QWidget *ModOrderSelector)
    {
        ModOrderSelector->setWindowTitle(QApplication::translate("ModOrderSelector", "Form", 0));
        label->setText(QApplication::translate("ModOrderSelector", "MOD ORDER SELECOTR - WIP", 0));
    } // retranslateUi

};

namespace Ui {
    class ModOrderSelector: public Ui_ModOrderSelector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODORDERSELECTOR_H
