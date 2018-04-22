#ifndef RECIPE_H
#define RECIPE_H

#include "structs.h"
#include <algorithm>
#include <vector>

class Recipe
{
private:
    QString result;
    QString machine;
    std::vector<Ingredient> ingreds;
public:
    Recipe();
    Recipe(QString res);
    Recipe(QString res, QString mach);
    Recipe(QString res, QString mach, Ingredient ingredient);
    Recipe(QString res, QString mach, Ingredient ingredient1, Ingredient ingredient2);
    Recipe(QString res, QString mach, std::vector<Ingredient> ingredient);

    QString getResult();
    void addIngredient(Ingredient ingredient);
    void removeIngredient(Ingredient ingredient);
    void removeLast();
};

#endif // RECIPE_H
