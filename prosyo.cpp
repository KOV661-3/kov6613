#include "prosyo.h"

prosyo::prosyo(QObject *parent)
    : QAbstractTableModel(parent)
{
}

QVariant prosyo::headerData(int section, Qt::Orientation orientation, int role) const
{
    // FIXME: Implement me!
}

int prosyo::rowCount(const QModelIndex &parent) const
{
    if (parent.isValid())
        return 0;

    // FIXME: Implement me!
}

int prosyo::columnCount(const QModelIndex &parent) const
{
    if (parent.isValid())
        return 0;

    // FIXME: Implement me!
}

QVariant prosyo::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    // FIXME: Implement me!
    return QVariant();
}
