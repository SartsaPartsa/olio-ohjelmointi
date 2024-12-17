#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;  // Käyttöliittymän luokka
}

// MainWindow-luokka perii QMainWindow-luokan toiminnot
class MainWindow : public QMainWindow
{
    Q_OBJECT  // Qt:n signaalit ja slotit

public:
    explicit MainWindow(QWidget *parent = nullptr);  // Konstruktori
    ~MainWindow();  // Destruktori

private slots:
    void countButtonClicked();  // Laskupainikkeen toiminto
    void resetButtonClicked();  // Nollauspainikkeen toiminto

private:
    Ui::MainWindow *ui;  // Käyttöliittymän elementit
    int counter = 0;  // Laskuri
};

#endif // MAINWINDOW_H






