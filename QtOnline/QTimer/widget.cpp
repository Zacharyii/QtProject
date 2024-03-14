#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    timer = new QTimer;
    picID = 2;

    QImage img;
    img.load("D:\\Documents\\QtProject\\QtOnline\\objectTimer\\1.png");
    ui->label->setPixmap(QPixmap::fromImage(img));

    //定时器时间到，发出timeout信号
    connect(timer, &QTimer::timeout, this, &Widget::timeoutSlot);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_startButton_clicked()
{
    timer->start(TIMEOUT);
}

void Widget::timeoutSlot()
 {
     QString path("D:\\Documents\\QtProject\\QtOnline\\objectTimer\\");
     path += QString::number(picID);
     path += ".png";

     QImage img;
     img.load(path);
     ui->label->setPixmap(QPixmap::fromImage(img));

     picID++;
     if(3 == picID)
         picID = 1;
 }

void Widget::on_stopButton_clicked()
{
    timer->stop();
}

void Widget::on_singleButton_clicked()
{
    QTimer::singleShot(1000, this, SLOT(timeoutSlot()));
}
