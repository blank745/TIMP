#include "functions.h"

#include <QString>
#include <QDebug>
#include <QCoreApplication>


QByteArray parsing (QString data_from_client) { //обработка информации с клиента, в зависимости от "имени функции" меняются вызываемые функции обработки с выводом в консоль
    QStringList data_from_client_list = data_from_client.split(QLatin1Char('&'));
    QString nameOfFunc = data_from_client_list.front();
    data_from_client_list.pop_front();
    return "test";
    /*if (nameOfFunc == "test")
        return "test";


    else
        return "error1\r\n";
    */
}
