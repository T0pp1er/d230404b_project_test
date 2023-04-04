
#include "testvalue.h"

#include <QDebug>

TestValue::TestValue(QObject *parent)
    : QObject{parent}
{
    qDebug() << Q_FUNC_INFO;
}
TestValue::~TestValue()
{
    qDebug() << Q_FUNC_INFO;
}
