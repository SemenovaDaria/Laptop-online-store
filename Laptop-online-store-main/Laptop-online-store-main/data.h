#ifndef DATA_H
#define DATA_H

#include <QString>

    class Data {
private:
    QString laptopId;
    QString company;
    QString product;
    QString typeName;
    QString inches;
    QString screenResolution;
    QString cpu;
    QString ram;
    QString memory;
    QString gpu;
    QString opSys;
    QString weight;
    QString priceEuros;

public:
    Data();
    Data(const QString& laptopId, const QString& company, const QString& product, const QString& typeName, const QString& inches,
         const QString& screenResolution, const QString& cpu, const QString& ram, const QString& memory, const QString& gpu,
         const QString& opSys, const QString& weight, const QString& priceEuros);

    QString getLaptopId() const;
    QString getCompany() const;
    QString getProduct() const;
    QString getTypeName() const;
    QString getInches() const;
    QString getScreenResolution() const;
    QString getCpu() const;
    QString getRam() const;
    QString getMemory() const;
    QString getGpu() const;
    QString getOpSys() const;
    QString getWeight() const;
    QString getPriceEuros() const;

    void setLaptopId(const QString& value);
    void setCompany(const QString& value);
    void setProduct(const QString& value);
    void setTypeName(const QString& value);
    void setInches(const QString& value);
    void setScreenResolution(const QString& value);
    void setCpu(const QString& value);
    void setRam(const QString& value);
    void setMemory(const QString& value);
    void setGpu(const QString& value);
    void setOpSys(const QString& value);
    void setWeight(const QString& value);
    void setPriceEuros(const QString& value);

    Data(const Data& other);
//    bool operator==(const Data& other) const;
//    bool operator>(const Data& other) const;
//    bool operator<(const Data& other) const;
};

#endif // DATA_H

