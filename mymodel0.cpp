#include "mymodel0.h"

mymodel0::mymodel0(QObject *parent)
    :QAbstractTableModel (parent)
{

}

int mymodel0::rowCount(const QModelIndex &/*parent*/) const //Display le nombre minimal de ligne
{
    return 2;
}

int mymodel0::columnCount(const QModelIndex &/*parent*/) const //Display le nombre minimal de ligne
{
    return 3;
}

QVariant mymodel0::data(const QModelIndex &index, int role) const
{
    if(role == Qt::DisplayRole)
    {
        return QString("Row%1 ,Column%1")
                        .arg(index.row() +1)
                        .arg(index.column() +1);
    }
    return QVariant();
}
