#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    //设置窗口大小（手写或UI改）
    this->setMaximumSize(200,280);
    this->setMinimumSize(200,280);

    this->setWindowTitle("计算器");

    QFont f("仿宋",14);       //字体对象
    ui->mainLineEdit->setFont(f);

    //按钮上放图片
    QIcon con("D:\\Documents\\QtProject\\QtOnline\\calculator\\img\\delete.jpg");
    ui->delButton->setIcon(con);

    //改变按钮背景
    ui->equButton->setStyleSheet("background:skyblue");
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_oneButton_clicked()
{
    expression += "1";
    ui->mainLineEdit->setText(expression);
}

void Widget::on_twoButton_clicked()
{
    expression += "2";
    ui->mainLineEdit->setText(expression);
}

void Widget::on_threeButton_clicked()
{
    expression += "3";
    ui->mainLineEdit->setText(expression);
}

void Widget::on_fourButton_clicked()
{
    expression += "4";
    ui->mainLineEdit->setText(expression);
}

void Widget::on_fiveButton_clicked()
{
    expression += "5";
    ui->mainLineEdit->setText(expression);
}

void Widget::on_sixButton_clicked()
{
    expression += "6";
    ui->mainLineEdit->setText(expression);
}

void Widget::on_sevenButton_clicked()
{
    expression += "7";
    ui->mainLineEdit->setText(expression);
}

void Widget::on_eightButton_clicked()
{
    expression += "8";
    ui->mainLineEdit->setText(expression);
}

void Widget::on_nineButton_clicked()
{
    expression += "9";
    ui->mainLineEdit->setText(expression);
}

void Widget::on_leftButton_clicked()
{
    expression += "(";
    ui->mainLineEdit->setText(expression);
}

void Widget::on_zeroButton_clicked()
{
    expression += "0";
    ui->mainLineEdit->setText(expression);
}

void Widget::on_rightButton_clicked()
{
    expression += ")";
    ui->mainLineEdit->setText(expression);
}

void Widget::on_mulButton_clicked()
{
    expression += "*";
    ui->mainLineEdit->setText(expression);
}

void Widget::on_divButton_clicked()
{
    expression += "/";
    ui->mainLineEdit->setText(expression);
}

void Widget::on_addButton_clicked()
{
    expression += "+";
    ui->mainLineEdit->setText(expression);
}

void Widget::on_subButton_clicked()
{
    expression += "-";
    ui->mainLineEdit->setText(expression);
}

void Widget::on_clearButton_clicked()
{
    expression.clear();
    ui->mainLineEdit->clear();
}

void Widget::on_delButton_clicked()
{
    expression.chop(1);
    ui->mainLineEdit->setText(expression);
}

void Widget::on_equButton_clicked()
{
    //声明并初始化了两个栈：s_num 用于存储数字，s_opt 用于存储操作符。
    QStack<int> s_num, s_opt;

    char opt[128] = {0};
    int i=0, tmp=0, num1, num2;

    //把QString转换成char *
    QByteArray ba;                  //将字符串 expression 追加到 QByteArray 对象 ba
    ba.append(expression);      //把QString转换成QByteArray
    strcpy(opt, ba.data());        //data可以把QByteArray转换成const char *

    //遍历字符数组 opt，直到遇到字符串结束符 '\0' 或者 s_opt 栈为空。
    while(opt[i]!='\0' || s_opt.empty()!=true)
    {
        //如果当前字符是数字，则将其转换成整数，并将其推入 s_num 栈中。
        if(opt[i] >='0' && opt[i]<='9')
        {
            tmp = tmp*10+opt[i]-'0';
            i++;
            //如果下一个字符不是数字，则说明当前数字已经结束，
            //将其压入 s_num 栈后，将临时变量 tmp 重置为 0
            if(opt[i]<'0' || opt[i]>'9')
            {
                s_num.push(tmp);
                tmp=0;
            }
        }
        else           //操作符
        {
            //如果 s_opt 栈为空，或者当前操作符的优先级高于栈顶操作符的优先级，
            //或者栈顶操作符为左括号 '('，而当前操作符不是右括号 ')'，
            //则将当前操作符压入 s_opt 栈中，并继续下一个字符的处理。
            if (s_opt.empty() == true || Priority(opt[i]) > Priority(s_opt.top()) ||
                    (s_opt.top() == '(' && opt[i] != ')'))
            {
                s_opt.push(opt[i]);
                i++;
                continue;
            }

            //如果栈顶操作符为左括号 '('，且当前操作符为右括号 ')'，
            //则将栈顶操作符弹出，并继续下一个字符的处理。
            if (s_opt.top() == '(' && opt[i] == ')')
            {
                s_opt.pop();
                i++;
                continue;
                }

            //如果当前操作符的优先级小于等于栈顶操作符的优先级，或者当前操作符为右括号 ')'，
            //而栈顶操作符不是左括号 '('，或者当前字符已经是字符串结束符 '\0'，
            //而栈不为空，则执行计算逻辑。
            if (Priority(opt[i]) <= Priority(s_opt.top()) || (opt[i] == ')' && s_opt.top() != '(') ||
                            (opt[i] == '\0' && s_opt.empty() != true))
            {
                char ch = s_opt.top();
                s_opt.pop();
                /*减法和除法，先出栈的作为第二个参数   后缀表达式*/
                switch(ch)
                {
                    case '+':
                        num1 = s_num.top();
                        s_num.pop();
                        num2 = s_num.top();
                        s_num.pop();
                        s_num.push(num1 + num2);
                        break;
                    case '-':
                        num1 = s_num.top();
                        s_num.pop();
                        num2 = s_num.top();
                        s_num.pop();
                        s_num.push(num2 - num1);
                        break;
                    case '*':
                        num1 = s_num.top();
                        s_num.pop();
                        num2 = s_num.top();
                        s_num.pop();
                        s_num.push(num1 * num2);
                        break;
                    case '/':
                        num1 = s_num.top();
                        s_num.pop();
                        num2 = s_num.top();
                        s_num.pop();
                        s_num.push(num2 / num1);
                        break;
                }
            }
        }
    }
    //将计算结果（栈顶元素）转换为字符串，并将其设置为 mainLineEdit 的文本。
    ui->mainLineEdit->setText(QString::number(s_num.top()));
    expression.clear();
}

//优先级值越高的操作符优先级越高。
int Widget::Priority(char ch)
{
    switch(ch)
    {
        case '(':
            return 3;
        case '*':
        case '/':
            return 2;
        case '+':
        case '-':
            return 1;
        default:
            return 0;
    }
}
