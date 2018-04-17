#ifndef RECIPE_H
#define RECIPE_H

#include <QMainWindow>
#include "structs.h"

class Recipe : public QMainWindow
{
    Q_OBJECT
public:
    explicit Recipe(QWidget *parent = nullptr);
    QString itemOutput;
    std::vector<Ingredients> ingreds;

signals:

public slots:
};

#endif // RECIPE_H
