#include "qtableviewmodel.h"

#include <QModelIndex>
#include <QDebug>
#include <QPixmap>

QTableViewModel::QTableViewModel(QObject *parent)
    :QAbstractListModel(parent)
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

QVariant QTableViewModel::data( const QModelIndex &index, int role ) const
{

    QVariant value;

    switch ( role )
    {
    case Qt::DisplayRole: //string
    {
        switch (index.column()) {
        case 0: {
            value = this->values->at(index.row()).getlaptop_ID();
            break;
        }
        case 1: {
            value = this->values->at(index.row()).getCompany();
            break;
        }
        case 2: {
            value = this->values->at(index.row()).getProduct();
            break;
        }
        case 4: {
            value = this->values->at(index.row()).getTypeName();
            break;
        }
        case 5: {
            value = this->values->at(index.row()).getInches();
            break;
        }
        case 6: {
            value = this->values->at(index.row()).getScreenResolution();
            break;
        }
        case 7: {
            value = this->values->at(index.row()).getCpu();
            break;
        }
        case 8: {
            value = this->values->at(index.row()).getRam();
            break;
        }
        case 9: {
            value = this->values->at(index.row()).getMemory();
            break;
        }
        case 10: {
            value = this->values->at(index.row()).getGpu();
            break;
        }
        case 11: {
            value = this->values->at(index.row()).getOpSys();
            break;
        }
        case 12: {
            value = this->values->at(index.row()).getWeight();
            break;
        }
        case 13: {
            value = this->values->at(index.row()).getPrice_euros();
            break;
        }
        }
    }
    break;

    case Qt::UserRole: //data
    {
        //value = this->values->at(index.row()).getId();
    }
    break;

    default:
        break;
    }

    return value;
}

void QTableViewModel::populate(QList<Data> *newValues)
{
    int idx = this->values->count();
    this->beginInsertRows(QModelIndex(), 1, idx);
    this->values = newValues;
    endInsertRows();
}

void QTableViewModel::append(Data value) {
    int idx = this->values->count() + 1;
    this->beginInsertRows(QModelIndex(), idx, idx);
    values->append(value);
    endInsertRows();
}

void QTableViewModel::update(int idx, Data value) {
    (*this->values)[idx] = value;
    QModelIndex item_idx_s = this->index(idx, 0);
    QModelIndex item_idx_e = this->index(idx, this->columnCount(QModelIndex()));
    emit this->dataChanged(item_idx_e, item_idx_s);
}

void QTableViewModel::deleteRow(int idx) {
    this->beginRemoveRows(QModelIndex(), idx, idx);
    (*this->values).removeAt(idx);
    this->endRemoveRows();
}

void QTableViewModel::insertAt(int idx, Data value) {
    this->beginInsertRows(QModelIndex(), 1, idx);
    values->insert(idx, value);
    endInsertRows();
}


QVariant QTableViewModel::headerData(int section, Qt::Orientation orientation, int role) const {
    if (role == Qt::DisplayRole && orientation == Qt::Horizontal) {
        switch (section) {
        case 0: {
            return QString("ID");
        }
        case 1:{
            return QString("Name");
        }
        case 2:{
            return QString("Additional");
        }
    }
    }

    return QVariant();
}
