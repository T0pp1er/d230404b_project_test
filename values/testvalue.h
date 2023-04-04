#ifndef TESTVALUE_H
#define TESTVALUE_H

#include <QObject>
#include <QtQml/qqmlregistration.h>


class TestValue : public QObject
{
    Q_OBJECT
    QML_ELEMENT

    Q_PROPERTY(int value READ getValue CONSTANT)

public:
    explicit TestValue(QObject *parent = nullptr);
    ~TestValue();

    int getValue() const { return 54321; }

    static const QString getString() { return "HuHuu!"; }

signals:

};

#endif // TESTVALUE_H
