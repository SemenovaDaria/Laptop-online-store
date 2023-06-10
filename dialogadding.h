#ifndef DIALOGADDING_H
#define DIALOGADDING_H

#include <QDialog>

namespace Ui {
class DialogAdding;
}

class DialogAdding : public QDialog
{
    Q_OBJECT

signals:
    void addLine(QList<QString> row);

public:
    explicit DialogAdding(QWidget *parent = nullptr);
    ~DialogAdding();

private slots:
    void on_pushButton_clicked();


private:
    Ui::DialogAdding *ui;
};

#endif // DIALOGADDING_H
