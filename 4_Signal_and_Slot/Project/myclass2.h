#ifndef MYCLASS2_H
#define MYCLASS2_H

#include <QObject>

class MyClass2 : public QObject
{
    Q_OBJECT
public:
    explicit MyClass2(QObject *parent = nullptr);

signals:

public slots:
    void Myslot(void);
};

#endif // MYCLASS2_H
