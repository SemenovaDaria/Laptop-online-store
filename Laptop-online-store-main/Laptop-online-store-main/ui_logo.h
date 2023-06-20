/********************************************************************************
** Form generated from reading UI file 'logo.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGO_H
#define UI_LOGO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Logo
{
public:

    void setupUi(QDialog *Logo)
    {
        if (Logo->objectName().isEmpty())
            Logo->setObjectName("Logo");
        Logo->resize(400, 300);

        retranslateUi(Logo);

        QMetaObject::connectSlotsByName(Logo);
    } // setupUi

    void retranslateUi(QDialog *Logo)
    {
        Logo->setWindowTitle(QCoreApplication::translate("Logo", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Logo: public Ui_Logo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGO_H
