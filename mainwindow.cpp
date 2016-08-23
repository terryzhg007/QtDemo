#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    printf("Hello Git");
    printf("Hello World");
}

MainWindow::~MainWindow()
{
    delete ui;
}
