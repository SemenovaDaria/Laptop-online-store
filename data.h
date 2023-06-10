#ifndef DATA_H
#define DATA_H

#include <QString>

class Data {
    private:
        QString laptop_ID;
        QString Company;
        QString Product;
        QString TypeName;
        QString Inches;
        QString ScreenResolution;
        QString Cpu;
        QString Ram;
        QString Memory;
        QString Gpu;
        QString OpSys;
        QString Weight;
        QString Price_euros;



    public:
        Data();
        Data(QString laptop_ID, QString Company, QString Product, QString TypeName, QString Inches, QString ScreenResolution, QString Cpu,
             QString Ram, QString Memory, QString Gpu, QString OpSys, QString Weight, QString Price_euros);
        QString getlaptop_ID() const;
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
        QString getPrice_euros() const;
        void setlaptop_ID(QString value);
        void setCompany(QString value);
        void setProduct(QString value);
        void setTypeName(QString value);
        void setInches(QString value);
        void setScreenResolution(QString value);
        void setCpu(QString value);
        void setRam(QString value);
        void setMemory(QString value);
        void setGpu(QString value);
        void setOpSys(QString value);
        void setWeight(QString value);
        void setPrice_euros(QString value);




};

#endif // DATA_H
