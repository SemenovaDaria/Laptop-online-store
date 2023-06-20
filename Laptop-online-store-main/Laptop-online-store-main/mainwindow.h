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

    void loadData(const QString &filePath);
    void saveData(const QString &filePath);
public slots:
    void handleNewData(Data* data);
private slots:

    void on_actionLogo_triggered();

    void on_btnDelete_clicked();

    void on_btnEdit_clicked();

    void on_btnAdd_clicked();

    void on_btnSave_clicked();

    void on_btnLoad_clicked();

    void on_btnFind_clicked();

private:
    Ui::MainWindow *ui;
    QList<Data> *values;
    QTableViewModel *model;
};
#endif // MAINWINDOW_H
