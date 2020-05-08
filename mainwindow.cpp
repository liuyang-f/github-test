#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPushButton>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    auto pushButton = new QPushButton("deepin");
    this->setCentralWidget(pushButton);
}

MainWindow::~MainWindow()
{
    delete ui;
}
