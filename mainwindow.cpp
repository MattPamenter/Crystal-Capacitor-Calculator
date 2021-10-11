/*
 * mainwindow.cpp
 *
 *  Created on: Oct 11, 2021
 *          by: Matt Pamenter
 */

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Crystal Capacitor Calculator");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonCalculate_clicked()
{
    double loadCapacitance =  ui->lineEditLoadCapacitance->text().toDouble();
    double strayCapacitance;
    if(ui->lineEditStrayCapacitance->text().isEmpty())
    {
        strayCapacitance = 5.0;
    }
    else
    {
        strayCapacitance = ui->lineEditStrayCapacitance->text().toDouble();
    }
    double capacitor = 2 * loadCapacitance - 2 * strayCapacitance;
    ui->lineEditCapacitor->setText(QString::number(capacitor));
}

void MainWindow::on_pushButtonClear_clicked()
{
    ui->lineEditLoadCapacitance->clear();
    ui->lineEditStrayCapacitance->clear();
    ui->lineEditCapacitor->clear();
}

