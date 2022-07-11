#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    mc1 = new MyClass1(this);
    mc2 = new MyClass2(this);
    connect(ui->pushButton, &QPushButton::clicked, this, &Widget::close);
    connect(mc1, &MyClass1::Mysignal, mc2, &MyClass2::Myslot);
    connect(ui->pushButton_3, &QPushButton::clicked, mc1, &MyClass1::Mysignal);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_2_clicked()
{
    qDebug() << "Clicked!";
    emit mc1->Mysignal();
}
