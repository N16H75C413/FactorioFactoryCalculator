#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <vector>
#include <QString>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QString filename_Basegame;
    QString filename_Mods;
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_pushButton_OpenBasegame_clicked();

    void on_pushButton_OpenMods_clicked();

    void on_pushButton_Random_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
