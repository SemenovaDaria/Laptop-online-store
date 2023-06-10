#include "logo.h"
#include "ui_logo.h"
#include "QPointer"
#include "QWidget"
#include "QPainter"
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsTextItem>
#include <QFont>


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
    painter.setRenderHint(QPainter::Antialiasing, true); // enable antialiasing for smoother edges

    // set the pen and brush to draw a blue heart
    QPen pen(Qt::NoPen);
    QBrush brush(Qt::red);

    // draw the heart shape using QPainterPath
    QPainterPath path;
    path.moveTo(width()/2, height()/4);
    path.cubicTo(width()*3/4, height()/8, width()*5/6, height()/2, width()/2, height()*3/4);
    path.cubicTo(width()/6, height()/2, width()/4, height()/8, width()/2, height()/4);
    painter.setPen(pen);
    painter.setBrush(brush);
    painter.drawPath(path);
}
