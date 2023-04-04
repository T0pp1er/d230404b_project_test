#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include <QDebug>
#include "values/testvalue.h"

int main(int argc, char *argv[])
{
    qDebug() << Q_FUNC_INFO;
    qDebug() << TestValue::getString();

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    const QUrl url(u"qrc:/d230404b_project_test/Main.qml"_qs);
    QObject::connect(
                        &engine,
                        &QQmlApplicationEngine::objectCreationFailed,
                        &app,
                        []() { QCoreApplication::exit(-1); },
                        Qt::QueuedConnection
                    );
    engine.load(url);

    return app.exec();
}
