#include "myclass2.h"
#include <QDebug>

MyClass2::MyClass2(QObject *parent) : QObject(parent)
{

}

void MyClass2::Myslot(void)
{
    qDebug() << "Got Signal!";
}
