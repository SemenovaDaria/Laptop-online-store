#include "data.h"

Data::Data() {}

Data::Data(QString laptop_ID, QString Company, QString Product, QString TypeName, QString Inches, QString ScreenResolution, QString Cpu,
           QString Ram, QString Memory, QString Gpu, QString OpSys, QString Weight, QString Price_euros) {
    this->laptop_ID = laptop_ID;
    this->Company = Company;
    this->Product = Product;
    this->TypeName = TypeName;
    this->Inches = Inches;
    this->ScreenResolution = ScreenResolution;
    this->Cpu = Cpu;
    this->Ram = Ram;
    this->Memory = Memory;
    this->Gpu = Gpu;
    this->OpSys = OpSys;
    this->Weight = Weight;
    this->Price_euros = Price_euros;
}


//Qt::ItemFlags Data::flags(const QModelIndex &index) const
//{
//    if (!index.isValid())
//        return Qt::NoItemFlags;

//    return QAbstractItemModel::flags(index) | Qt::ItemIsEditable;
//}

QString Data::getlaptop_ID() const {
    return laptop_ID;
}
QString Data::getCompany() const {
    return Company;
}
QString Data::getProduct() const {
    return Product;
}
QString Data::getTypeName() const {
    return TypeName;
}
QString Data::getInches() const {
    return Inches;
}
QString Data::getScreenResolution() const {
    return ScreenResolution;
}
QString Data::getCpu() const {
    return Cpu;
}
QString Data::getRam() const {
    return Ram;
}
QString Data::getMemory() const {
    return Memory;
}
QString Data::getGpu() const {
    return Gpu;
}
QString Data::getOpSys() const {
    return OpSys;
}
QString Data::getWeight() const {
    return Weight;
}
QString Data::getPrice_euros() const {
    return Price_euros;
}
void Data::setlaptop_ID(QString value) {
    this->laptop_ID = value;
}
void Data::setCompany(QString value) {
    this->Company = value;
}
void Data::setProduct(QString value) {
    this->Product = value;
}
void Data::setTypeName(QString value) {
    this->TypeName = value;
}
void Data::setInches(QString value) {
    this->Inches = value;
}
void Data::setScreenResolution(QString value) {
    this->ScreenResolution = value;
}
void Data::setCpu(QString value) {
    this->Cpu = value;
}
void Data::setRam(QString value) {
    this->Ram = value;
}
void Data::setMemory(QString value) {
    this->Memory = value;
}
void Data::setGpu(QString value) {
    this->Gpu = value;
}
void Data::setOpSys(QString value) {
    this->OpSys = value;
}
void Data::setWeight(QString value) {
    this->Weight = value;
}
void Data::setPrice_euros(QString value){
    this->Price_euros = value;
}


