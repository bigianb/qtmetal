#include "mainwindow.h"
#include "metalwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    MetalWindow* metalWindow = new MetalWindow;
    QWidget* container = QWidget::createWindowContainer(metalWindow);
    metalWindow->create();
    ui->stackedWidget->addWidget(container);
    ui->stackedWidget->setCurrentWidget(container);
}

MainWindow::~MainWindow()
{
    delete ui;
}

