#include "mainwindow.h"
#include "ui_mainwindow.h"

// MainWindow-luokan konstruktori
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),  // Kutsutaan QMainWindow:n konstruktoria
    ui(new Ui::MainWindow)  // Luodaan ui-olio (käyttöliittymä)
{
    ui->setupUi(this);  // Asetetaan käyttöliittymä (luodaan elementit)

    // Kytketään painikkeet slotteihin (toimintoihin)
    connect(ui->btnCount, &QPushButton::clicked, this, &MainWindow::countButtonClicked);
    connect(ui->btnReset, &QPushButton::clicked, this, &MainWindow::resetButtonClicked);
}

// MainWindow-luokan destruktori
MainWindow::~MainWindow()
{
    delete ui;  // Vapautetaan käyttöliittymämuisti
}

// countButtonClicked()-funktio (laskupainikkeen toiminto)
void MainWindow::countButtonClicked()
{
    counter++;  // Lisätään laskuria
    QString s = QString::number(counter);  // Muutetaan laskuri merkkijonoksi
    ui->txtResult->setText(s);  // Päivitetään tuloskenttä
    ui->labelInfo->setText("Painiketta painettu " + s + " kertaa");  // Päivitetään tiedon etiketti
}

// resetButtonClicked()-funktio (nollauspainikkeen toiminto)
void MainWindow::resetButtonClicked()
{
    counter = 0;  // Nollataan laskuri
    QString s = QString::number(counter);  // Muutetaan laskuri merkkijonoksi
    ui->txtResult->setText(s);  // Päivitetään tuloskenttä
    ui->labelInfo->setText("Painiketta painettu 0 kertaa");  // Päivitetään tiedon etiketti
}




