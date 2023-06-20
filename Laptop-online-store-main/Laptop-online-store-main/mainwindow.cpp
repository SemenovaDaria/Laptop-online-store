#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QTableWidget"
#include "QTableWidgetItem"
#include "qtableviewmodel.h"
#include <QFileDialog>
#include <QDebug>
#include <QSortFilterProxyModel>
#include <QMessageBox>
#include "dialogadding.h"
#include "logo.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    values = new QList<Data>();

//    values->append(Data("1", "Apple", "MacBook Pro", "Ultrabook", "13.3", "IPS Panel Retina Display 2560x1600 Intel Core i5 2.3GHz", "8GB", "128GB", "SSD", "Intel Iris Plus Graphics 640", "macOS", "1.37kg", "1339.69"));
//    values->append(Data("1", "Apple", "MacBook Pro", "Ultrabook", "13.3", "IPS Panel Retina Display 2560x1600 Intel Core i5 2.3GHz", "8GB", "128GB", "SSD", "Intel Iris Plus Graphics 640", "macOS", "1.37kg", "1339.69"));
    model = new QTableViewModel();

    model->populate(values);
    // Create the proxy model and set the source model to our custom model
    QSortFilterProxyModel *proxyModel = new QSortFilterProxyModel(this);
    proxyModel->setSourceModel(model);
    proxyModel->setSortRole(Qt::DisplayRole);

    // Set the model for the view to be the proxy model
    this->ui->tvData->setModel(proxyModel);
    // Enable sorting on the view
    this->ui->tvData->setSortingEnabled(true);
    this->ui->tvData->setSelectionBehavior(QAbstractItemView::SelectRows);

    // Добавляем названия полей в ComboBox
    ui->cmbFields->addItem("Laptop Id");
    ui->cmbFields->addItem("Company");
    ui->cmbFields->addItem("Product");
    ui->cmbFields->addItem("Type Name");
    ui->cmbFields->addItem("Inches");
    ui->cmbFields->addItem("Screen Resolution");
    ui->cmbFields->addItem("CPU");
    ui->cmbFields->addItem("RAM");
    ui->cmbFields->addItem("Memory");
    ui->cmbFields->addItem("GPU");
    ui->cmbFields->addItem("Operating System");
    ui->cmbFields->addItem("Weight");
    ui->cmbFields->addItem("Price Euros");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleNewData(Data* data)
{
    // Поиск данных с тем же laptopId в списке.
    auto iter = std::find_if(values->begin(), values->end(), [&](const Data& existingData) {
        return existingData.getLaptopId() == data->getLaptopId();
    });

    if (iter != values->end()) {
        // Если нашли такой элемент, заменяем его на новый.
        *iter = *data;
    } else {
        // Если не нашли, добавляем новый элемент в список.
        values->append(*data);
    }

    // Обновляем представление данных.
    delete model;
    model = new QTableViewModel();
    model->populate(values);

    // Create the proxy model and set the source model to our custom model
    QSortFilterProxyModel *proxyModel = new QSortFilterProxyModel(this);
    proxyModel->setSourceModel(model);
    proxyModel->setSortRole(Qt::DisplayRole);

    // Set the model for the view to be the proxy model
    this->ui->tvData->setModel(proxyModel);
    // Enable sorting on the view
    this->ui->tvData->setSortingEnabled(true);
    this->ui->tvData->setSelectionBehavior(QAbstractItemView::SelectRows);
}

void MainWindow::loadData(const QString& filePath) {
    QFile file(filePath);

    QString data;
    QStringList rowOfData;
    QStringList rowData;

    if (file.open(QFile::ReadOnly)) {
        data = file.readAll();
        rowOfData = data.split("\n");
        file.close();
    }

    values->clear();

    for (int x = 0; x < rowOfData.size(); ++x) {
        rowData = rowOfData.at(x).split(";");
        if (rowData.size() == 13)
            values->append(Data(rowData[0], rowData[1], rowData[2], rowData[3], rowData[4], rowData[5], rowData[6], rowData[7], rowData[8], rowData[9], rowData[10], rowData[11], rowData[12]));
    }

    model = new QTableViewModel();
    model->populate(values);

    // Create the proxy model and set the source model to our custom model
    QSortFilterProxyModel *proxyModel = new QSortFilterProxyModel(this);
    proxyModel->setSourceModel(model);
    proxyModel->setSortRole(Qt::DisplayRole);

    // Set the model for the view to be the proxy model
    this->ui->tvData->setModel(proxyModel);
    // Enable sorting on the view
    this->ui->tvData->setSortingEnabled(true);
    this->ui->tvData->setSelectionBehavior(QAbstractItemView::SelectRows);
}

void MainWindow::saveData(const QString& filePath) {
    QFile file(filePath);

    if (file.open(QFile::WriteOnly)) {
        QTextStream stream(&file);

        for (const Data& data : *values) {
            QStringList row;
            row << data.getLaptopId() << data.getCompany() << data.getProduct() << data.getTypeName() << data.getInches()
                << data.getScreenResolution() << data.getCpu() << data.getRam() << data.getMemory() << data.getGpu()
                << data.getOpSys() << data.getWeight() << data.getPriceEuros();
            stream << row.join(";") << "\n";
        }

        file.close();
    }
}

void MainWindow::on_actionLogo_triggered()
{
    Logo dialog(this);
    dialog.exec();
}

void MainWindow::on_btnDelete_clicked()
{
    QItemSelectionModel *select = ui->tvData->selectionModel();
    if(select->hasSelection())
    {
        QModelIndexList selectedRows = select->selectedRows();
        for (int i = selectedRows.count() - 1; i >= 0; --i)
        {
            QModelIndex index = selectedRows.at(i);
            QModelIndex sourceIndex = ((QSortFilterProxyModel*)ui->tvData->model())->mapToSource(index);
            int id = sourceIndex.row();
            values->removeAt(id);
        }

        // Обновляем представление данных.
        delete model;
        model = new QTableViewModel();
        model->populate(values);

        // Создаем прокси-модель и устанавливаем исходную модель в нашу пользовательскую модель
        QSortFilterProxyModel *proxyModel = new QSortFilterProxyModel(this);
        proxyModel->setSourceModel(model);
        proxyModel->setSortRole(Qt::DisplayRole);

        // Устанавливаем модель для представления на прокси-модель
        this->ui->tvData->setModel(proxyModel);
        // Включаем сортировку на представлении
        this->ui->tvData->setSortingEnabled(true);
        this->ui->tvData->setSelectionBehavior(QAbstractItemView::SelectRows);
    }
    else
    {
        QMessageBox::information(this, tr("No Selection"), tr("No row is selected. Please select a row to delete."), QMessageBox::Ok);
    }
}


void MainWindow::on_btnEdit_clicked()
{
    // Создаем новый экземпляр диалога
    DialogAdding *dialogAdding = new DialogAdding(this);

    // Получаем текущую выделенную строку
    QItemSelectionModel *select = ui->tvData->selectionModel();

    if (select->hasSelection()) { // Если в таблице выбрана строка
        QModelIndexList rows = select->selectedRows();
        QModelIndex proxyIndex = rows.at(0); // Берем первую выделенную строку
        QModelIndex sourceIndex = static_cast<QSortFilterProxyModel*>(ui->tvData->model())->mapToSource(proxyIndex);
        int row = sourceIndex.row();
        Data* dataToEdit = &(*values)[row]; // Получаем ссылку на данные в списке по индексу строки
        dialogAdding->setData(dataToEdit); // Передаем данные в диалоговое окно
    } else {
        // Если ничего не выбрано, выводим сообщение об ошибке и выходим
        QMessageBox::information(this, tr("No Selection"), tr("Please select a row to edit."));
        delete dialogAdding;
        return;
    }

    connect(dialogAdding, &DialogAdding::dataAdded, this, &MainWindow::handleNewData);

    if (dialogAdding->exec() == QDialog::Accepted) {
        // Здесь можно выполнить дополнительные действия, если диалоговое окно было принято (нажата кнопка "Add")
    }

    delete dialogAdding;
}

void MainWindow::on_btnAdd_clicked()
{
    DialogAdding *dialogAdding = new DialogAdding(this); // Создаем экземпляр

    connect(dialogAdding, &DialogAdding::dataAdded, this, &MainWindow::handleNewData); // Подключаем сигнал к слоту

    if (dialogAdding->exec() == QDialog::Accepted) { // Запускаем диалоговое окно и проверяем его результат
        // Здесь можно выполнить дополнительные действия, если диалоговое окно было принято (нажата кнопка "Add")
    }

    delete dialogAdding; // Не забываем удалить экземпляр после использования
}

void MainWindow::on_btnSave_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"), "/home", tr("CSV Files (*.csv)"));
    if (!fileName.isEmpty()) {
        saveData(fileName);
    }
}

void MainWindow::on_btnLoad_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), "/home", tr("CSV Files (*.csv)"));
    if (!fileName.isEmpty()) {
        loadData(fileName);
    }
}

void MainWindow::on_btnFind_clicked()
{
    // Создаем фильтрующую модель
    QSortFilterProxyModel *filterModel = new QSortFilterProxyModel(this);
    filterModel->setSourceModel(model);

    // Получаем индекс выбранного поля
    int fieldIndex = ui->cmbFields->currentIndex();

    // Устанавливаем фильтрующее поле
    filterModel->setFilterKeyColumn(fieldIndex);

    // Получаем текст для фильтрации
    QString filterText = ui->txbFieldValue->text();

    // Устанавливаем текст фильтра
    filterModel->setFilterFixedString(filterText);
    //Если вы хотите использовать режим "содержит"
    //filterModel->setFilterWildcard("*" + filterText + "*");

    // Устанавливаем модель для TableView
    ui->tvData->setModel(filterModel);
}

