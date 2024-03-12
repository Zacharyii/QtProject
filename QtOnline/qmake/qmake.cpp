#include <QApplication>
#include <QLabel>   //标签
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>  //水平布局
#include <QVBoxLayout>  //垂直布局
#include <QWidget>          //窗口

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);

        QLabel *infoLabel = new QLabel;
        QLabel *openLabel = new QLabel;
        QLineEdit *cmdLineEdit = new QLineEdit;
        QPushButton *commitButton = new QPushButton;
        QPushButton *cancelButton = new QPushButton;
        QPushButton *browseButton = new QPushButton;

        infoLabel->setText("input cmd:");
        openLabel->setText("open");
        commitButton->setText("commit");
        cancelButton->setText("cancel");
        browseButton->setText("browse");

        QHBoxLayout *cmdLayout = new QHBoxLayout;   //水平布局对象
        cmdLayout->addWidget(openLabel);     //添加控件
        cmdLayout->addWidget(cmdLineEdit);

        QHBoxLayout *buttonLayout = new QHBoxLayout;
        buttonLayout->addWidget(commitButton);
        buttonLayout->addWidget(cancelButton);
        buttonLayout->addWidget(browseButton);

        QVBoxLayout *mainLayout = new QVBoxLayout;
        mainLayout->addWidget(infoLabel);
        mainLayout->addLayout(cmdLayout);       //布局里布局
        mainLayout->addLayout(buttonLayout);

        QWidget w;
        w.setLayout(mainLayout);
        w.show();   //显示
		w.setWindowTitle("running");	//窗口名称

        return app.exec();  //循环执行
}
