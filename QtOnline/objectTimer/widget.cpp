#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    picID = 2;

    QPixmap pix("D:\\Documents\\QtProject\\QtOnline\\objectTimer\\1.png");
    ui->label->setPixmap(pix);      //显示图片
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_startButton_clicked()
{
    //开启定时器，返回定时器编号
   myTimerId =  this->startTimer(TIMEOUT);
}

void Widget::timerEvent(QTimerEvent *event)
{
    if(event->timerId() != myTimerId)
        return;

    QString path("D:\\Documents\\QtProject\\QtOnline\\objectTimer\\");
    path += QString::number(picID);
    path += ".png";

    QPixmap pix(path);
    ui->label->setPixmap(pix);

    picID++;
    if(3 == picID)
        picID = 1;
}

void Widget::on_stopButton_clicked()
{
    this->killTimer(myTimerId);
}
