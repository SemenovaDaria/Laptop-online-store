#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QTableWidget"
#include "QTableWidgetItem"
#include "QTableViewModel.h"
#include <QFileDialog>
#include <QDebug>
#include <QSortFilterProxyModel>
#include "dialogadding.h"
#include "logo.h""
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    values = new QList<Data>();


    values->append(Data("1", "Apple", "MacBook Pro", "Ultrabook", "13.3", "IPS Panel Retina Display 2560x1600 Intel Core i5 2.3GHz", "8GB", "128GB", "SSD", "Intel Iris Plus Graphics 640", "macOS", "1.37kg", "1339.69"));
    values->append(Data("1", "Apple", "MacBook Pro", "Ultrabook", "13.3", "IPS Panel Retina Display 2560x1600 Intel Core i5 2.3GHz", "8GB", "128GB", "SSD", "Intel Iris Plus Graphics 640", "macOS", "1.37kg", "1339.69"));
    model = new QTableViewModel();

    model->populate(values);
    this->ui->tableView->setModel(model);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_add_Button_clicked()
{
    model->append(Data("1", "Apple", "MacBook Pro", "Ultrabook", "13.3", "IPS Panel Retina Display 2560x1600 Intel Core i5 2.3GHz", "8GB", "128GB", "SSD", "Intel Iris Plus Graphics 640", "macOS", "1.37kg", "1339.69"));
    DialogAdding dialog(this);
    connect(&dialog, &DialogAdding::addLine, this, &MainWindow::on_newRow);
    dialog.exec();
}

void MainWindow::on_newRow(QList<QString> line)
{
    values->append(Data(line[0], line[1], line[2], line[3], line[4], line[5], line[6], line[7], line[8], line[9], line[10], line[11], line[12]));
    model->populate(values);
    this->ui->tableView->setModel(model);
}

void MainWindow::on_del_Button_clicked()
{
    model->deleteRow(ui->tableView->currentIndex().row());
}


void MainWindow::on_edit_Button_clicked()
{
    model->update(ui->tableView->currentIndex().row(), Data("1", "Apple", "MacBook Pro", "Ultrabook", "13.3", "IPS Panel Retina Display 2560x1600 Intel Core i5 2.3GHz", "8GB", "128GB", "SSD", "Intel Iris Plus Graphics 640", "macOS", "1.37kg", "1339.69"));
}

//bool DataModel::setData(const QModelIndex &index, const QVariant &value, int role)
//{
//    if (role != Qt::EditRole) {
//        return false;
//    }
//    if (data(index, role) != value)
//    {
//        //_dataTable.at(index.row()).at(index.column()) = value.toString();
//        _dataTable[index.row()][index.column()] = value.toString();
//        emit dataChanged(index, index, {Qt::DisplayRole});
//        return true;
//    }
//    return false;
//}




void MainWindow::on_addto_Button_clicked()
{
    model->insertAt(0, Data("1", "Apple", "MacBook Pro", "Ultrabook", "13.3", "IPS Panel Retina Display 2560x1600 Intel Core i5 2.3GHz", "8GB", "128GB", "SSD", "Intel Iris Plus Graphics 640", "macOS", "1.37kg", "1339.69"));
}

void MainWindow::on_pushButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, ("Open File"), "/home", ("csv File(*.csv)"));
    QFile file(fileName);

    QString data;
    QStringList rowOfData;
    QStringList rowData;
    data.clear();
    rowOfData.clear();
    rowData.clear();

    if (file.open(QFile::ReadOnly))
    {
        data = file.readAll();
        rowOfData = data.split("\n");  //Value on each row
        file.close();
    }

    values = new QList<Data>();

    for (int x = 0; x < rowOfData.size(); ++x)   //rowOfData.size() gives the number of row
    {
        rowData = rowOfData.at(x).split(",");
        if (rowData.size() == 13)
            values->append(Data(rowData[1], rowData[2], rowData[3], rowData[4], rowData[5], rowData[6], rowData[7], rowData[8], rowData[9], rowData[10], rowData[11], rowData[12], rowData[12]));
    }
    model = new QTableViewModel();
    model->populate(values);
    this->ui->tableView->setModel(model);
}


//void MainWindow::on_checkBox_3_stateChanged(int arg1)
//{
//    if (arg1)
//    {
//        qDebug() << "sort";
//    }
//}


void MainWindow::on_checkBox_stateChanged(int arg1)
{
    if (arg1)
    {
    QSortFilterProxyModel *proxyModel = new QSortFilterProxyModel(this);
    proxyModel->setSourceModel(ui->tableView->model());
    ui->tableView->setModel(proxyModel);
    proxyModel->sort(12, Qt::DescendingOrder);
    }
}


void MainWindow::on_checkBox_2_stateChanged(int arg2)
{
    if (arg2)
    {
    QSortFilterProxyModel *proxyModel = new QSortFilterProxyModel(this);
    proxyModel->setSourceModel(ui->tableView->model());
    ui->tableView->setModel(proxyModel);
    proxyModel->sort(8, Qt::DescendingOrder);
    }

}


void MainWindow::on_checkBox_3_stateChanged(int arg3)
{
    if (arg3)
    {
    QSortFilterProxyModel *proxyModel = new QSortFilterProxyModel(this);
    proxyModel->setSourceModel(ui->tableView->model());
    ui->tableView->setModel(proxyModel);
    proxyModel->sort(4, Qt::DescendingOrder);
    }
}




void MainWindow::on_checkBox_12_stateChanged(int arg4)
{
    if (arg4)
    {
    QSortFilterProxyModel *proxyModel = new QSortFilterProxyModel(this);
    proxyModel->setSourceModel(ui->tableView->model());
    ui->tableView->setModel(proxyModel);
    proxyModel->sort(4, Qt::AscendingOrder);
    }
}


void MainWindow::on_checkBox_11_stateChanged(int arg5)
{
    if (arg5)
    {
    QSortFilterProxyModel *proxyModel = new QSortFilterProxyModel(this);
    proxyModel->setSourceModel(ui->tableView->model());
    ui->tableView->setModel(proxyModel);
    proxyModel->sort(4, Qt::AscendingOrder);
    }
}


void MainWindow::on_checkBox_10_stateChanged(int arg6)
{
    if (arg6)
    {
    QSortFilterProxyModel *proxyModel = new QSortFilterProxyModel(this);
    proxyModel->setSourceModel(ui->tableView->model());
    ui->tableView->setModel(proxyModel);
    proxyModel->sort(4, Qt::AscendingOrder);
    }
}


void MainWindow::on_actionLogo_triggered()
{
    Logo dialog(this);
    dialog.exec();
}

