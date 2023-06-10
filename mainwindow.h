#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "data.h"
#include <qtableviewmodel.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_add_Button_clicked();

    void on_del_Button_clicked();

    void on_edit_Button_clicked();

    void on_addto_Button_clicked();

    void on_pushButton_clicked();

    void on_checkBox_stateChanged(int arg1);

    void on_checkBox_2_stateChanged(int arg2);

    void on_checkBox_3_stateChanged(int arg3);

    void on_checkBox_12_stateChanged(int arg4);

    void on_checkBox_11_stateChanged(int arg5);

    void on_checkBox_10_stateChanged(int arg6);

    void on_newRow(QList<QString>);

    void on_actionLogo_triggered();

private:
    Ui::MainWindow *ui;
    QList<Data> *values;
    QTableViewModel *model;
};
#endif // MAINWINDOW_H
