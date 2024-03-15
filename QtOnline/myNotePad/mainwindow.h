#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void newActionSlot();   //槽函数
    void openActionSlot();
    void saveActionSlot();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
