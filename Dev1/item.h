#ifndef ITEM_H
#define ITEM_H

#include <vector>

#include "structs.h"
#include "Recipe.h"

class Item
{
private:
    QString specificName;
    QString source;
    std::vector<Recipe> recipe;

public:
    Item();
    Item(QString name);
    Item(QString name, QString src);
    Item(QString name, QString src, Recipe rec);

    void addRecipe(Recipe rec);
    void removeRecipe(Recipe rec);
    void removeLast();
};

#endif // ITEM_H
