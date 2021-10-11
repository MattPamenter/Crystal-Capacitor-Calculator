/*
 * main.cpp
 *
 *  Created on: Oct 11, 2021
 *          by: Matt Pamenter
 */

#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
