#ifndef QMYCLASS_H
#define QMYCLASS_H

#include <QWidget>

class QMyclass : public QWidget
{
    Q_OBJECT
public:
    explicit QMyclass(QWidget *parent = nullptr);
    ~QMyclass();

signals:

public slots:
};

#endif // QMYCLASS_H
