#include "recipe.h"

Recipe::Recipe()
{

}

Recipe::Recipe(QString res)
{
    result = res;
}

Recipe::Recipe(QString res, QString mach)
{
    result = res;
    machine = mach;
}

Recipe::Recipe(QString res, QString mach, Ingredient ingredient)
{
    result = res;
    machine = mach;
    ingreds.push_back(ingredient);
}

Recipe::Recipe(QString res, QString mach, Ingredient ingredient1, Ingredient ingredient2)
{
    result = res;
    machine = mach;
    ingreds.push_back(ingredient1);
    ingreds.push_back(ingredient2);
}

Recipe::Recipe(QString res, QString mach, std::vector<Ingredient> ingredient)
{
    result = res;
    machine = mach;
    ingreds = ingredient;
}

QString Recipe::getResult()
{
    return result;
}

void Recipe::removeIngredient(Ingredient ingredient)
{
    int i = 0;
    while ((ingreds.begin() + i) != ingreds.end()) {
        if (ingreds.at(i).item == ingredient.item){
            ingreds.erase(ingreds.begin() + i);
            break;
        }
        i++;
    }
}

void Recipe::removeLast()
{
    ingreds.pop_back();
}
