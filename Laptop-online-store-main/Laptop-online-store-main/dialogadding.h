#ifndef DIALOGADDING_H
#define DIALOGADDING_H

#include <QDialog>
#include "data.h"
namespace Ui {
class DialogAdding;
}

class DialogAdding : public QDialog
{
    Q_OBJECT
public slots:
    void setData(Data* data);
signals:
    void addLine(QList<QString> row);
    void dataAdded(Data* data);

public:
    explicit DialogAdding(QWidget *parent = nullptr);
    ~DialogAdding();

private slots:

    void on_btnAdd_clicked();

    void on_btnCancel_clicked();

private:
    Ui::DialogAdding *ui;
    Data *m_data;

};

#endif // DIALOGADDING_H
