/********************************************************************************
** Form generated from reading UI file 'dialogadding.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGADDING_H
#define UI_DIALOGADDING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogAdding
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lblScreenResolution;
    QLineEdit *txbSCreenResolution;
    QHBoxLayout *horizontalLayout_14;
    QLabel *lblPriceEuros;
    QLineEdit *txbPriceEuros;
    QHBoxLayout *horizontalLayout_10;
    QLabel *lblMemory;
    QLineEdit *txbMemory;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lblTypeName;
    QLineEdit *txbTypeName;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lblProduct;
    QLineEdit *txbProduct;
    QHBoxLayout *horizontalLayout_13;
    QLabel *lblWieght;
    QLineEdit *txbWeight;
    QHBoxLayout *horizontalLayout_8;
    QLabel *lblCPU;
    QLineEdit *txbCPU;
    QHBoxLayout *horizontalLayout_11;
    QLabel *lblOpSys;
    QLineEdit *txbOpSys;
    QHBoxLayout *horizontalLayout;
    QLabel *lblLaptopId;
    QLineEdit *txbLaptopId;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblCompany;
    QLineEdit *txbCompany;
    QHBoxLayout *horizontalLayout_12;
    QLabel *lblGPU;
    QLineEdit *txbPGU;
    QHBoxLayout *horizontalLayout_9;
    QLabel *lblRAM;
    QLineEdit *txbRAM;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lblInches;
    QLineEdit *txbInches;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btnAdd;
    QPushButton *btnCancel;

    void setupUi(QDialog *DialogAdding)
    {
        if (DialogAdding->objectName().isEmpty())
            DialogAdding->setObjectName("DialogAdding");
        DialogAdding->resize(586, 587);
        verticalLayoutWidget = new QWidget(DialogAdding);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 30, 571, 551));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        lblScreenResolution = new QLabel(verticalLayoutWidget);
        lblScreenResolution->setObjectName("lblScreenResolution");
        lblScreenResolution->setMinimumSize(QSize(120, 0));

        horizontalLayout_7->addWidget(lblScreenResolution);

        txbSCreenResolution = new QLineEdit(verticalLayoutWidget);
        txbSCreenResolution->setObjectName("txbSCreenResolution");

        horizontalLayout_7->addWidget(txbSCreenResolution);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        lblPriceEuros = new QLabel(verticalLayoutWidget);
        lblPriceEuros->setObjectName("lblPriceEuros");
        lblPriceEuros->setMinimumSize(QSize(120, 0));

        horizontalLayout_14->addWidget(lblPriceEuros);

        txbPriceEuros = new QLineEdit(verticalLayoutWidget);
        txbPriceEuros->setObjectName("txbPriceEuros");

        horizontalLayout_14->addWidget(txbPriceEuros);


        verticalLayout->addLayout(horizontalLayout_14);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        lblMemory = new QLabel(verticalLayoutWidget);
        lblMemory->setObjectName("lblMemory");
        lblMemory->setMinimumSize(QSize(120, 0));

        horizontalLayout_10->addWidget(lblMemory);

        txbMemory = new QLineEdit(verticalLayoutWidget);
        txbMemory->setObjectName("txbMemory");

        horizontalLayout_10->addWidget(txbMemory);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        lblTypeName = new QLabel(verticalLayoutWidget);
        lblTypeName->setObjectName("lblTypeName");
        lblTypeName->setMinimumSize(QSize(120, 0));

        horizontalLayout_5->addWidget(lblTypeName);

        txbTypeName = new QLineEdit(verticalLayoutWidget);
        txbTypeName->setObjectName("txbTypeName");

        horizontalLayout_5->addWidget(txbTypeName);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        lblProduct = new QLabel(verticalLayoutWidget);
        lblProduct->setObjectName("lblProduct");
        lblProduct->setMinimumSize(QSize(120, 0));

        horizontalLayout_3->addWidget(lblProduct);

        txbProduct = new QLineEdit(verticalLayoutWidget);
        txbProduct->setObjectName("txbProduct");

        horizontalLayout_3->addWidget(txbProduct);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        lblWieght = new QLabel(verticalLayoutWidget);
        lblWieght->setObjectName("lblWieght");
        lblWieght->setMinimumSize(QSize(120, 0));

        horizontalLayout_13->addWidget(lblWieght);

        txbWeight = new QLineEdit(verticalLayoutWidget);
        txbWeight->setObjectName("txbWeight");

        horizontalLayout_13->addWidget(txbWeight);


        verticalLayout->addLayout(horizontalLayout_13);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        lblCPU = new QLabel(verticalLayoutWidget);
        lblCPU->setObjectName("lblCPU");
        lblCPU->setMinimumSize(QSize(120, 0));

        horizontalLayout_8->addWidget(lblCPU);

        txbCPU = new QLineEdit(verticalLayoutWidget);
        txbCPU->setObjectName("txbCPU");

        horizontalLayout_8->addWidget(txbCPU);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        lblOpSys = new QLabel(verticalLayoutWidget);
        lblOpSys->setObjectName("lblOpSys");
        lblOpSys->setMinimumSize(QSize(120, 0));

        horizontalLayout_11->addWidget(lblOpSys);

        txbOpSys = new QLineEdit(verticalLayoutWidget);
        txbOpSys->setObjectName("txbOpSys");

        horizontalLayout_11->addWidget(txbOpSys);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lblLaptopId = new QLabel(verticalLayoutWidget);
        lblLaptopId->setObjectName("lblLaptopId");
        lblLaptopId->setMinimumSize(QSize(120, 0));

        horizontalLayout->addWidget(lblLaptopId);

        txbLaptopId = new QLineEdit(verticalLayoutWidget);
        txbLaptopId->setObjectName("txbLaptopId");

        horizontalLayout->addWidget(txbLaptopId);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lblCompany = new QLabel(verticalLayoutWidget);
        lblCompany->setObjectName("lblCompany");
        lblCompany->setMinimumSize(QSize(120, 0));

        horizontalLayout_2->addWidget(lblCompany);

        txbCompany = new QLineEdit(verticalLayoutWidget);
        txbCompany->setObjectName("txbCompany");

        horizontalLayout_2->addWidget(txbCompany);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        lblGPU = new QLabel(verticalLayoutWidget);
        lblGPU->setObjectName("lblGPU");
        lblGPU->setMinimumSize(QSize(120, 0));

        horizontalLayout_12->addWidget(lblGPU);

        txbPGU = new QLineEdit(verticalLayoutWidget);
        txbPGU->setObjectName("txbPGU");

        horizontalLayout_12->addWidget(txbPGU);


        verticalLayout->addLayout(horizontalLayout_12);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        lblRAM = new QLabel(verticalLayoutWidget);
        lblRAM->setObjectName("lblRAM");
        lblRAM->setMinimumSize(QSize(120, 0));

        horizontalLayout_9->addWidget(lblRAM);

        txbRAM = new QLineEdit(verticalLayoutWidget);
        txbRAM->setObjectName("txbRAM");

        horizontalLayout_9->addWidget(txbRAM);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        lblInches = new QLabel(verticalLayoutWidget);
        lblInches->setObjectName("lblInches");
        lblInches->setMinimumSize(QSize(120, 0));

        horizontalLayout_6->addWidget(lblInches);

        txbInches = new QLineEdit(verticalLayoutWidget);
        txbInches->setObjectName("txbInches");

        horizontalLayout_6->addWidget(txbInches);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        btnAdd = new QPushButton(verticalLayoutWidget);
        btnAdd->setObjectName("btnAdd");

        horizontalLayout_4->addWidget(btnAdd);

        btnCancel = new QPushButton(verticalLayoutWidget);
        btnCancel->setObjectName("btnCancel");

        horizontalLayout_4->addWidget(btnCancel);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(DialogAdding);

        QMetaObject::connectSlotsByName(DialogAdding);
    } // setupUi

    void retranslateUi(QDialog *DialogAdding)
    {
        DialogAdding->setWindowTitle(QCoreApplication::translate("DialogAdding", "Dialog", nullptr));
        lblScreenResolution->setText(QCoreApplication::translate("DialogAdding", "Screen resolution", nullptr));
        lblPriceEuros->setText(QCoreApplication::translate("DialogAdding", "Price", nullptr));
        lblMemory->setText(QCoreApplication::translate("DialogAdding", "Memory", nullptr));
        lblTypeName->setText(QCoreApplication::translate("DialogAdding", "Type Name", nullptr));
        lblProduct->setText(QCoreApplication::translate("DialogAdding", "Product", nullptr));
        lblWieght->setText(QCoreApplication::translate("DialogAdding", "Weight", nullptr));
        lblCPU->setText(QCoreApplication::translate("DialogAdding", "CPU", nullptr));
        lblOpSys->setText(QCoreApplication::translate("DialogAdding", "OS", nullptr));
        lblLaptopId->setText(QCoreApplication::translate("DialogAdding", "Labptop ID", nullptr));
        lblCompany->setText(QCoreApplication::translate("DialogAdding", "Company", nullptr));
        lblGPU->setText(QCoreApplication::translate("DialogAdding", "GPU", nullptr));
        lblRAM->setText(QCoreApplication::translate("DialogAdding", "RAM", nullptr));
        lblInches->setText(QCoreApplication::translate("DialogAdding", "Inches", nullptr));
        btnAdd->setText(QCoreApplication::translate("DialogAdding", "Add", nullptr));
        btnCancel->setText(QCoreApplication::translate("DialogAdding", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogAdding: public Ui_DialogAdding {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGADDING_H
