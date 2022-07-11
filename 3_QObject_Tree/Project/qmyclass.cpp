#include "qmyclass.h"
#include <QDebug>

QMyclass::QMyclass(QWidget *parent) : QWidget(parent)
{

}

QMyclass::~QMyclass()
{
    qDebug() << "delete myclass";
}
