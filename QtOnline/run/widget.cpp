#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    //连接信号与槽 谁发出信号 发出什么信号 谁处理信号 怎么处理(4种方法)
    //1
    connect(ui->cmdLineEdit,SIGNAL(returnPressed()),this,SLOT(on_commitButton_clicked()));
    //2
    connect(ui->cancelButton,&QPushButton::clicked, this, &Widget::on_cancelButton_clicked);
    //3
    connect(ui->browseButton, &QPushButton::clicked, [this]()
    {
        QMessageBox::information(this,"信息","点击浏览");
    });
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_commitButton_clicked()
{
    //获取lineEdit数据
    QString program = ui->cmdLineEdit->text();

    //创建process对象
    QProcess *myProcess = new QProcess(this);
    myProcess->start(program);
}

void Widget::on_cancelButton_clicked()
{
    this->close();
}

void Widget::on_oneButton_clicked()
{
    expression += "1";\
    ui->mainLineEdit->setText(expression);
}
