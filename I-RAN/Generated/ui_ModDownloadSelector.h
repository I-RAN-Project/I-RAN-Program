/********************************************************************************
** Form generated from reading UI file 'ModDownloadSelector.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODDOWNLOADSELECTOR_H
#define UI_MODDOWNLOADSELECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModDownloadSelector
{
public:
    QLabel *label;

    void setupUi(QWidget *ModDownloadSelector)
    {
        if (ModDownloadSelector->objectName().isEmpty())
            ModDownloadSelector->setObjectName(QStringLiteral("ModDownloadSelector"));
        ModDownloadSelector->resize(400, 300);
        label = new QLabel(ModDownloadSelector);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 100, 181, 41));

        retranslateUi(ModDownloadSelector);

        QMetaObject::connectSlotsByName(ModDownloadSelector);
    } // setupUi

    void retranslateUi(QWidget *ModDownloadSelector)
    {
        ModDownloadSelector->setWindowTitle(QApplication::translate("ModDownloadSelector", "Form", 0));
        label->setText(QApplication::translate("ModDownloadSelector", "MOD DOWNLOAD SELECTOR - WIP", 0));
    } // retranslateUi

};

namespace Ui {
    class ModDownloadSelector: public Ui_ModDownloadSelector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODDOWNLOADSELECTOR_H
