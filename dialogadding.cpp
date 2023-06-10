#include "dialogadding.h"
#include "ui_dialogadding.h"

DialogAdding::DialogAdding(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAdding)
{
    ui->setupUi(this);
}

DialogAdding::~DialogAdding()
{
    delete ui;
}

void DialogAdding::on_pushButton_clicked()
{
    QString ID = ui->laptop_ID->text();
    QString Company = ui->Company->text();
    QString Product = ui->Product->text();
    QString TypeName = ui->TypeName->text();
    QString Inches = ui->Inches->text();
    QString ScreenResolution = ui->ScreenResolution->text();
    QString Cpu = ui->Cpu->text();
    QString Ram = ui->Ram->text();
    QString Memory = ui->Memory->text();
    QString Gpu = ui->Gpu->text();
    QString OpSys = ui->OpSys->text();
    QString Weight = ui->Weight->text();
    QString Price_euros = ui->Price_euros->text();
    QList<QString> line;
    line.append(ID);
    line.append(Company);
    line.append(Product);
    line.append(TypeName);
    line.append(Inches);
    line.append(ScreenResolution);
    line.append(Cpu);
    line.append(Ram);
    line.append(Memory);
    line.append(Gpu);
    line.append(OpSys);
    line.append(Weight);
    line.append(Price_euros);


    emit addLine(line);
    QDialog::accept();


}

