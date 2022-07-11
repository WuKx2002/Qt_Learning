#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPushButton>
#include <QColorDialog>
#include <QFileDialog>
#include <QFontDialog>
#include <QInputDialog>
#include <QMessageBox>
#include <QProgressDialog>
#include <QErrorMessage>
#include <QWizard>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    errordlg = new QErrorMessage(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QColor color_dialog = QColorDialog::getColor(Qt::red, this);
}

void MainWindow::on_pushButton_2_clicked()
{
    QString file_dialog = QFileDialog::getOpenFileName(this, "打开文件", "C:\\", "图片文件(*.jpg, *.png)");
}

void MainWindow::on_pushButton_3_clicked()
{
    bool ok;
    QFont font_dialog = QFontDialog::getFont(&ok, this);
    if (ok)
        ui->textEdit->setFont(font_dialog);
}

void MainWindow::on_pushButton_4_clicked()
{
    bool ok;
    QString input_dialog = QInputDialog::getText(this, "属性", "作者姓名", QLineEdit::Normal, "姓名", &ok);
}

void MainWindow::on_pushButton_5_clicked()
{
    int res = QMessageBox::question(this, "问题", "Yes or no", QMessageBox::Yes, QMessageBox::No);
    if (res == QMessageBox::Yes)
    {
           QMessageBox::information(this, "提示", "你选择了Yes", "好的");
    }
    else
    {
        QMessageBox::critical(this, "错误", "发生错误", "好的");
        QMessageBox::warning(this, "警告", "你选择了No", "好的");
    }

}

void MainWindow::on_pushButton_6_clicked()
{
    QProgressDialog prodlg("执行程序", "取消", 0, 50000, this);
    prodlg.setWindowTitle("执行程序");
    prodlg.setWindowModality(Qt::WindowModal);
    prodlg.show();

    for (int i = 0; i < 50000; i++)
    {
         prodlg.setValue(i);
         QCoreApplication::processEvents();
         if (prodlg.wasCanceled())
             break;
    }
     prodlg.setValue(50000);
}

void MainWindow::on_pushButton_7_clicked()
{
    //QErrorMessage *errordlg = new QErrorMessage(this);
    errordlg->setWindowTitle("错误");
    errordlg->showMessage("危险");
}

QWizardPage *createPage1(void)
{
    QWizardPage *page = new QWizardPage;
    page->setTitle("第一步");
    return page;
}

QWizardPage *createPage2(void)
{
    QWizardPage *page = new QWizardPage;
    page->setTitle("第二步");
    return page;
}

void MainWindow::on_pushButton_8_clicked()
{
    QWizard wizard(this);
    wizard.setWindowTitle("向导对话框");
    wizard.addPage(createPage1());
    wizard.addPage(createPage2());
    wizard.exec();
}
