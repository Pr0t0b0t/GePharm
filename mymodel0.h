#ifndef MYMODEL0_H
#define MYMODEL0_H

#include <QAbstractTableModel>

class mymodel0 : public QAbstractTableModel
{
    Q_OBJECT
public:
    mymodel0(QObject *parent);
    int rowCount(const QModelIndex &parent = QModelIndex()) const;
    int columnCount(const QModelIndex &parent = QModelIndex()) const;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
};

#endif // MYMODEL0_H
