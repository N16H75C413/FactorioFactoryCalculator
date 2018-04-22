#include "luainput.h"

Recipe luaExtractRecipe(QString filePath)
{
    QFile file(filename_Basegame);
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0, "Info", file.errorString());

    QTextStream in (&file);
    Recipe recipe;

    in.readLine();

    return recipe;
}
