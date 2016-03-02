/********************************************************************************
** Form generated from reading UI file 'Logging.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGGING_H
#define UI_LOGGING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Logging
{
public:
    QLabel *label;

    void setupUi(QWidget *Logging)
    {
        if (Logging->objectName().isEmpty())
            Logging->setObjectName(QStringLiteral("Logging"));
        Logging->resize(400, 300);
        label = new QLabel(Logging);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 60, 321, 31));

        retranslateUi(Logging);

        QMetaObject::connectSlotsByName(Logging);
    } // setupUi

    void retranslateUi(QWidget *Logging)
    {
        Logging->setWindowTitle(QApplication::translate("Logging", "Form", 0));
        label->setText(QApplication::translate("Logging", "OH ERROR MESAGES, OH ERROR MESSAGES. I LOVE YOU ALOT", 0));
    } // retranslateUi

};

namespace Ui {
    class Logging: public Ui_Logging {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGGING_H
