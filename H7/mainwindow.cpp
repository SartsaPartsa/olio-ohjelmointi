#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Kytke painikkeet slotteihin
    connect(ui->btnCount, &QPushButton::clicked, this, &MainWindow::countButtonClicked);
    connect(ui->btnReset, &QPushButton::clicked, this, &MainWindow::resetButtonClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::countButtonClicked()
{
    counter++;
    QString s = QString::number(counter);
    ui->txtResult->setText(s);
    ui->labelInfo->setText("Painiketta painettu " + s + " kertaa");
}

void MainWindow::resetButtonClicked()
{
    counter = 0;
    QString s = QString::number(counter);
    ui->txtResult->setText(s);
    ui->labelInfo->setText("Painiketta painettu 0 kertaa");
}



