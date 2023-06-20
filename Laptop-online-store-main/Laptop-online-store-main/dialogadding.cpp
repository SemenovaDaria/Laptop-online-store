#include "dialogadding.h"
#include "ui_dialogadding.h"

DialogAdding::DialogAdding(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAdding)
{
    ui->setupUi(this);
    this->m_data = nullptr;
}

DialogAdding::~DialogAdding()
{
    delete ui;
}

// метод для установки элемента на редактирование
void DialogAdding::setData(Data* data)
{
    m_data = data;
    if(m_data) {
        this->ui->btnAdd->setText("Update");
        ui->txbLaptopId->setText(m_data->getLaptopId());
        ui->txbCompany->setText(m_data->getCompany());
        ui->txbProduct->setText(m_data->getProduct());
        ui->txbTypeName->setText(m_data->getTypeName());
        ui->txbInches->setText(m_data->getInches());
        ui->txbSCreenResolution->setText(m_data->getScreenResolution());
        ui->txbCPU->setText(m_data->getCpu());
        ui->txbRAM->setText(m_data->getRam());
        ui->txbMemory->setText(m_data->getMemory());
        ui->txbPGU->setText(m_data->getGpu());
        ui->txbOpSys->setText(m_data->getOpSys());
        ui->txbWeight->setText(m_data->getWeight());
        ui->txbPriceEuros->setText(m_data->getPriceEuros());
    }
}




void DialogAdding::on_btnAdd_clicked()
{
    if(m_data) {
        m_data->setLaptopId(ui->txbLaptopId->text());
        m_data->setCompany(ui->txbCompany->text());
        m_data->setProduct(ui->txbProduct->text());
        m_data->setTypeName(ui->txbTypeName->text());
        m_data->setInches(ui->txbInches->text());
        m_data->setScreenResolution(ui->txbSCreenResolution->text());
        m_data->setCpu(ui->txbCPU->text());
        m_data->setRam(ui->txbRAM->text());
        m_data->setMemory(ui->txbMemory->text());
        m_data->setGpu(ui->txbPGU->text());
        m_data->setOpSys(ui->txbOpSys->text());
        m_data->setWeight(ui->txbWeight->text());
        m_data->setPriceEuros(ui->txbPriceEuros->text());
    } else {
        m_data = new Data();
        m_data->setLaptopId(ui->txbLaptopId->text());
        m_data->setCompany(ui->txbCompany->text());
        m_data->setProduct(ui->txbProduct->text());
        m_data->setTypeName(ui->txbTypeName->text());
        m_data->setInches(ui->txbInches->text());
        m_data->setScreenResolution(ui->txbSCreenResolution->text());
        m_data->setCpu(ui->txbCPU->text());
        m_data->setRam(ui->txbRAM->text());
        m_data->setMemory(ui->txbMemory->text());
        m_data->setGpu(ui->txbPGU->text());
        m_data->setOpSys(ui->txbOpSys->text());
        m_data->setWeight(ui->txbWeight->text());
        m_data->setPriceEuros(ui->txbPriceEuros->text());


        //m_data = nullptr;
    }
    emit dataAdded(m_data);
    this->close();
}


void DialogAdding::on_btnCancel_clicked()
{
    this->close(); // просто закрываем диалоговое окно
}

