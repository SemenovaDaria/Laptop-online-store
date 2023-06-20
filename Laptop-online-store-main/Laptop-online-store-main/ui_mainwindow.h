/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLogo;
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *txbFieldValue;
    QComboBox *cmbFields;
    QPushButton *btnFind;
    QVBoxLayout *verticalLayout_2;
    QTableView *tvData;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnLoad;
    QPushButton *btnSave;
    QPushButton *btnAdd;
    QPushButton *btnEdit;
    QPushButton *btnDelete;
    QMenuBar *menubar;
    QMenu *menuAbout;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(830, 567);
        actionLogo = new QAction(MainWindow);
        actionLogo->setObjectName("actionLogo");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(9, 9, 811, 511));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        txbFieldValue = new QLineEdit(widget);
        txbFieldValue->setObjectName("txbFieldValue");

        horizontalLayout_3->addWidget(txbFieldValue);

        cmbFields = new QComboBox(widget);
        cmbFields->setObjectName("cmbFields");

        horizontalLayout_3->addWidget(cmbFields);

        btnFind = new QPushButton(widget);
        btnFind->setObjectName("btnFind");

        horizontalLayout_3->addWidget(btnFind);


        verticalLayout_3->addLayout(horizontalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        tvData = new QTableView(widget);
        tvData->setObjectName("tvData");
        tvData->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        tvData->setDragEnabled(true);

        verticalLayout_2->addWidget(tvData);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        btnLoad = new QPushButton(widget);
        btnLoad->setObjectName("btnLoad");

        horizontalLayout_2->addWidget(btnLoad);

        btnSave = new QPushButton(widget);
        btnSave->setObjectName("btnSave");

        horizontalLayout_2->addWidget(btnSave);

        btnAdd = new QPushButton(widget);
        btnAdd->setObjectName("btnAdd");

        horizontalLayout_2->addWidget(btnAdd);

        btnEdit = new QPushButton(widget);
        btnEdit->setObjectName("btnEdit");

        horizontalLayout_2->addWidget(btnEdit);

        btnDelete = new QPushButton(widget);
        btnDelete->setObjectName("btnDelete");

        horizontalLayout_2->addWidget(btnDelete);


        verticalLayout_3->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 830, 21));
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName("menuAbout");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuAbout->menuAction());
        menuAbout->addAction(actionLogo);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionLogo->setText(QCoreApplication::translate("MainWindow", "Logo", nullptr));
        btnFind->setText(QCoreApplication::translate("MainWindow", "Filter", nullptr));
        btnLoad->setText(QCoreApplication::translate("MainWindow", "Load", nullptr));
        btnSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        btnAdd->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        btnEdit->setText(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        btnDelete->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
