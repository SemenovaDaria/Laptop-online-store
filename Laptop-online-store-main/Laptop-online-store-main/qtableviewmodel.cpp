#include "qtableviewmodel.h"

#include <QModelIndex>
#include <QDebug>
#include <QPixmap>
#include <algorithm>

QTableViewModel::QTableViewModel(QObject *parent)
    : QAbstractListModel(parent)
{
    values = new QList<Data>();
}

int QTableViewModel::rowCount(const QModelIndex &) const
{
    return values->count();
}

int QTableViewModel::columnCount(const QModelIndex &) const
{
    return 13;
}

QVariant QTableViewModel::data(const QModelIndex &index, int role) const
{
    QVariant value;

    if (role == Qt::DisplayRole) {
        const Data &data = values->at(index.row());
        switch (index.column()) {
        case 0:
            value = data.getLaptopId();
            break;
        case 1:
            value = data.getCompany();
            break;
        case 2:
            value = data.getProduct();
            break;
        case 3:
            value = data.getTypeName();
            break;
        case 4:
            value = data.getInches();
            break;
        case 5:
            value = data.getScreenResolution();
            break;
        case 6:
            value = data.getCpu();
            break;
        case 7:
            value = data.getRam();
            break;
        case 8:
            value = data.getMemory();
            break;
        case 9:
            value = data.getGpu();
            break;
        case 10:
            value = data.getOpSys();
            break;
        case 11:
            value = data.getWeight();
            break;
        case 12:
            value = data.getPriceEuros();
            break;
        }
    }

    return value;
}

QVariant QTableViewModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (role == Qt::DisplayRole && orientation == Qt::Horizontal) {
        switch (section) {
        case 0:
            return tr("ID");
        case 1:
            return tr("Company");
        case 2:
            return tr("Product");
        case 3:
            return tr("Type");
        case 4:
            return tr("Inches");
        case 5:
            return tr("Screen Resolution");
        case 6:
            return tr("Processor");
        case 7:
            return tr("RAM");
        case 8:
            return tr("Internal Memory");
        case 9:
            return tr("Graphics Processor");
        case 10:
            return tr("Operating System");
        case 11:
            return tr("Weight");
        case 12:
            return tr("Price (euros)");
        }
    }

    return QVariant();
}


void QTableViewModel::populate(QList<Data> *newValues)
{
    beginResetModel();
    values = newValues;
    endResetModel();
}

void QTableViewModel::append(Data value)
{
    beginInsertRows(QModelIndex(), values->count(), values->count());
    values->append(value);
    endInsertRows();
}

void QTableViewModel::update(int idx, Data value)
{
    (*values)[idx] = value;
    emit dataChanged(index(idx, 0), index(idx, columnCount(QModelIndex()) - 1));
}

void QTableViewModel::deleteRow(int idx)
{
    beginRemoveRows(QModelIndex(), idx, idx);
    values->removeAt(idx);
    endRemoveRows();
}

void QTableViewModel::insertAt(int idx, Data value)
{
    beginInsertRows(QModelIndex(), idx, idx);
    values->insert(idx, value);
    endInsertRows();
}

void QTableViewModel::sort(int column, Qt::SortOrder order)
{
    beginResetModel();

    std::sort(values->begin(), values->end(), [column, order](const Data& a, const Data& b) {
        bool less;

        switch (column) {
        case 0:
            less = a.getLaptopId() < b.getLaptopId();
            break;
        case 1:
            less = a.getCompany() < b.getCompany();
            break;
        case 2:
            less = a.getProduct() < b.getProduct();
            break;
        case 3:
            less = a.getTypeName() < b.getTypeName();
            break;
        case 4:
            less = a.getInches() < b.getInches();
            break;
        case 5:
            less = a.getScreenResolution() < b.getScreenResolution();
            break;
        case 6:
            less = a.getCpu() < b.getCpu();
            break;
        case 7:
            less = a.getRam() < b.getRam();
            break;
        case 8:
            less = a.getMemory() < b.getMemory();
            break;
        case 9:
            less = a.getGpu() < b.getGpu();
            break;
        case 10:
            less = a.getOpSys() < b.getOpSys();
            break;
        case 11:
            less = a.getWeight() < b.getWeight();
            break;
        case 12:
            less = a.getPriceEuros() < b.getPriceEuros();
            break;
        default:
            less = false; // To prevent warnings
            break;
        }

        return order == Qt::AscendingOrder ? less : !less;
    });

    endResetModel();
}




