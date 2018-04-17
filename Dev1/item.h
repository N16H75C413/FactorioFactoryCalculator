#ifndef ITEM_H
#define ITEM_H

#include "structs.h"

class Item
{
public:
    QString item_name;
    QString source;

    Item(QString name, QString src);
};

#endif // ITEM_H
