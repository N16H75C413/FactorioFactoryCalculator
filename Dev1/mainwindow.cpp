#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "luainput.h"
#include "structs.h"

#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_OpenBasegame_clicked()
{
    if(ui->lineEdit_DirectoryBasegame->text().isEmpty()){
        filename_Basegame=QFileDialog::getOpenFileName(
                    this, tr("Open File"), "B:", "All files (*) ;;Lua files (*.lua)"
                    );
        ui->lineEdit_DirectoryBasegame->setText(filename_Basegame);
    }
    else
        filename_Basegame = ui->lineEdit_DirectoryBasegame->text();
    /*
    QFile file(filename_Basegame);
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0, "Info", file.errorString());

    QTextStream in (&file);

    ui->textBrowser->setText(in.readAll());
    */
}

void MainWindow::on_pushButton_OpenMods_clicked()
{
    if(ui->lineEdit_DirectoryMods->text().isEmpty()){
        filename_Mods=QFileDialog::getOpenFileName(
                    this, tr("Open File"), "B:", "All files (*) ;;Lua files (*.lua)"
                    );
        ui->lineEdit_DirectoryMods->setText(filename_Mods);
    }
    else
        filename_Mods = ui->lineEdit_DirectoryMods->text();
    /*
    QFile file(filename_Mods);
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0, "Info", file.errorString());

    QTextStream in (&file);

    ui->textBrowser->setText(in.readAll());
    */
}

void MainWindow::on_pushButton_Random_clicked()
{
    ui->textBrowser->append("nothing done");
}
