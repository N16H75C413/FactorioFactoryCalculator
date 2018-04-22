#include "item.h"

Item::Item()
{

}

Item::Item(QString name)
{
    specificName = name;
}

Item::Item(QString name, QString src)
{
    specificName = name;
    source = src;
}

Item::Item(QString name, QString src, Recipe rec)
{
    specificName = name;
    source = src;
    recipe.push_back(rec);
}

void Item::addRecipe(Recipe rec)
{
    recipe.push_back(rec);
}

void Item::removeRecipe(Recipe rec)
{
    int i = 0;
    while ((recipe.begin() + i) != recipe.end()) {
        if (recipe.at(i).getResult() == rec.getResult()){
            recipe.erase(recipe.begin() + i);
            break;
        }
        i++;
    }
}

void Item::removeLast()
{
    recipe.pop_back();
}
