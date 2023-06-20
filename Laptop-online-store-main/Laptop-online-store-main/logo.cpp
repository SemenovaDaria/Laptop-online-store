#include "logo.h"
#include "ui_logo.h"
#include <QPainter>
#include <QLinearGradient>
#include <QConicalGradient>

Logo::Logo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Logo)
{
    ui->setupUi(this);
}

Logo::~Logo()
{
    delete ui;
}

void Logo::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing, true);

    // Background gradient
    QLinearGradient bgGradient(rect().topLeft(), rect().bottomRight());
    bgGradient.setColorAt(0, QColor("#FFB6C1")); // Pink
    bgGradient.setColorAt(1, QColor("#FFC0CB")); // Light pink
    painter.fillRect(rect(), bgGradient);

    // Laptop outline
    int laptopWidth = 200;
    int laptopHeight = 150;
    int laptopX = (width() - laptopWidth) / 2;
    int laptopY = (height() - laptopHeight) / 2;
    painter.setPen(QPen(Qt::white, 4));
    painter.setBrush(Qt::transparent);
    painter.drawRoundedRect(laptopX, laptopY, laptopWidth, laptopHeight, 15, 15);

    // Display screen
    painter.setPen(Qt::NoPen);
    painter.setBrush(Qt::white); // White color for the screen
    painter.drawRect(laptopX + 10, laptopY + 10, laptopWidth - 20, laptopHeight - 40);

    // Keyboard
    painter.setPen(QPen(Qt::white, 2));
    painter.setBrush(Qt::transparent);
    painter.drawRect(laptopX + 10, laptopY + 120, laptopWidth - 20, 20);

    // Shop name
    QFont font("Arial", 20, QFont::Bold);
    painter.setFont(font);
    painter.setPen(Qt::white);
    painter.drawText(rect().adjusted(0, 200, 0, 0), Qt::AlignCenter, "Laptop Shop");
}
