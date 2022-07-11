#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QDialog *dialog = new QDialog(this);
    dialog->resize(200, 100);
    //dialog->show();
    //dialog->exec();
    dialog->setModal(true);
    dialog->show();
    dialog->setAttribute(Qt::WA_DeleteOnClose);
}

MainWindow::~MainWindow()
{
    delete ui;
}
