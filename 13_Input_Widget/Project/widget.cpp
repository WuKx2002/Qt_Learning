#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->comboBox->addItem("学士");
    ui->comboBox->addItem("硕士");
    ui->comboBox->addItem("博士");

    connect(ui->pushButton, QPushButton::clicked, this, [&](){ui->label->setFont(ui->fontComboBox->currentFont());});
}

Widget::~Widget()
{
    delete ui;
}
