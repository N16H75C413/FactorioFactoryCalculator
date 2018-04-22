#ifndef LUAINPUT_H
#define LUAINPUT_H

#include "Recipe.h"
#include "item.h"

#include <QString>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>


Recipe luaExtractRecipe(QString filePath);

#endif // LUAINPUT_H
