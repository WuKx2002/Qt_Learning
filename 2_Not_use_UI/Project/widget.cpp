#include "widget.h"
#include <QLabel>
#include <QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QLabel *label = new QLabel(this);
    label->setText("This is QT.");
    /*
     * or:
     * QLabel *label = new QLabel;
     * label->setText("This is QT.");
     * label->setParent(this);
    */
    label->move(100, 100);

    setFixedSize(300, 300);     //this->setFixedSize(400, 300);
    setWindowTitle("QT APP");

    QPushButton *button = new QPushButton(this);
    button->setText("Close");
    button->move(100, 200);
}

Widget::~Widget()
{

}
