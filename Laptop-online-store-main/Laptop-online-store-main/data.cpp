#include "data.h"

Data::Data() {
}

Data::Data(const QString& laptopId, const QString& company, const QString& product, const QString& typeName,
           const QString& inches, const QString& screenResolution, const QString& cpu, const QString& ram,
           const QString& memory, const QString& gpu, const QString& opSys, const QString& weight,
           const QString& priceEuros)
    : laptopId(laptopId), company(company), product(product), typeName(typeName), inches(inches),
    screenResolution(screenResolution), cpu(cpu), ram(ram), memory(memory), gpu(gpu), opSys(opSys),
    weight(weight), priceEuros(priceEuros) {
}

QString Data::getLaptopId() const {
    return laptopId;
}

QString Data::getCompany() const {
    return company;
}

QString Data::getProduct() const {
    return product;
}

QString Data::getTypeName() const {
    return typeName;
}

QString Data::getInches() const {
    return inches;
}

QString Data::getScreenResolution() const {
    return screenResolution;
}

QString Data::getCpu() const {
    return cpu;
}

QString Data::getRam() const {
    return ram;
}

QString Data::getMemory() const {
    return memory;
}

QString Data::getGpu() const {
    return gpu;
}

QString Data::getOpSys() const {
    return opSys;
}

QString Data::getWeight() const {
    return weight;
}

QString Data::getPriceEuros() const {
    return priceEuros;
}

void Data::setLaptopId(const QString& value) {
    laptopId = value;
}

void Data::setCompany(const QString& value) {
    company = value;
}

void Data::setProduct(const QString& value) {
    product = value;
}

void Data::setTypeName(const QString& value) {
    typeName = value;
}

void Data::setInches(const QString& value) {
    inches = value;
}

void Data::setScreenResolution(const QString& value) {
    screenResolution = value;
}

void Data::setCpu(const QString& value) {
    cpu = value;
}

void Data::setRam(const QString& value) {
    ram = value;
}

void Data::setMemory(const QString& value) {
    memory = value;
}

void Data::setGpu(const QString& value) {
    gpu = value;
}

void Data::setOpSys(const QString& value) {
    opSys = value;
}

void Data::setWeight(const QString& value) {
    weight = value;
}

void Data::setPriceEuros(const QString& value) {
    priceEuros = value;
}

Data::Data(const Data& other)
    : laptopId(other.laptopId), company(other.company), product(other.product), typeName(other.typeName),
    inches(other.inches), screenResolution(other.screenResolution), cpu(other.cpu), ram(other.ram),
    memory(other.memory), gpu(other.gpu), opSys(other.opSys), weight(other.weight), priceEuros(other.priceEuros) {
}

//bool Data::operator==(const Data& other) const {
//    return laptopId == other.laptopId && company == other.company && product == other.product &&
//           typeName == other.typeName && inches == other.inches && screenResolution == other.screenResolution &&
//           cpu == other.cpu && ram == other.ram && memory == other.memory && gpu == other.gpu &&
//           opSys == other.opSys && weight == other.weight && priceEuros == other.priceEuros;
//}

//bool Data::operator>(const Data& other) const {
//    // Implement comparison logic based on your requirements
//    // Return true if this instance is greater than 'other', otherwise return false
//    return true;
//}

//bool Data::operator<(const Data& other) const {
//    // Implement comparison logic based on your requirements
//    // Return true if this instance is less than 'other', otherwise return false
//    return true;
//}
