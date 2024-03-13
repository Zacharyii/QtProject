/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *mainLineEdit;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *clearButton;
    QPushButton *mulButton;
    QPushButton *divButton;
    QPushButton *delButton;
    QPushButton *sevenButton;
    QPushButton *eightButton;
    QPushButton *nineButton;
    QPushButton *addButton;
    QPushButton *fourButton;
    QPushButton *fiveButton;
    QPushButton *sixButton;
    QPushButton *subButton;
    QPushButton *oneButton;
    QPushButton *twoButton;
    QPushButton *threeButton;
    QPushButton *equButton;
    QPushButton *leftButton;
    QPushButton *zeroButton;
    QPushButton *rightButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(197, 283);
        mainLineEdit = new QLineEdit(Widget);
        mainLineEdit->setObjectName(QStringLiteral("mainLineEdit"));
        mainLineEdit->setGeometry(QRect(10, 10, 181, 31));
        widget = new QWidget(Widget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 50, 180, 226));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        clearButton = new QPushButton(widget);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        clearButton->setMinimumSize(QSize(40, 40));
        clearButton->setMaximumSize(QSize(40, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(11);
        clearButton->setFont(font);

        gridLayout->addWidget(clearButton, 0, 0, 1, 1);

        mulButton = new QPushButton(widget);
        mulButton->setObjectName(QStringLiteral("mulButton"));
        mulButton->setMinimumSize(QSize(40, 40));
        mulButton->setMaximumSize(QSize(40, 40));
        mulButton->setFont(font);

        gridLayout->addWidget(mulButton, 0, 1, 1, 1);

        divButton = new QPushButton(widget);
        divButton->setObjectName(QStringLiteral("divButton"));
        divButton->setMinimumSize(QSize(40, 40));
        divButton->setMaximumSize(QSize(40, 40));
        divButton->setFont(font);

        gridLayout->addWidget(divButton, 0, 2, 1, 1);

        delButton = new QPushButton(widget);
        delButton->setObjectName(QStringLiteral("delButton"));
        delButton->setMinimumSize(QSize(40, 40));
        delButton->setMaximumSize(QSize(40, 40));
        delButton->setFont(font);
        delButton->setIconSize(QSize(30, 30));

        gridLayout->addWidget(delButton, 0, 3, 1, 1);

        sevenButton = new QPushButton(widget);
        sevenButton->setObjectName(QStringLiteral("sevenButton"));
        sevenButton->setMinimumSize(QSize(40, 40));
        sevenButton->setMaximumSize(QSize(40, 40));
        sevenButton->setFont(font);

        gridLayout->addWidget(sevenButton, 1, 0, 1, 1);

        eightButton = new QPushButton(widget);
        eightButton->setObjectName(QStringLiteral("eightButton"));
        eightButton->setMinimumSize(QSize(40, 40));
        eightButton->setMaximumSize(QSize(40, 40));
        eightButton->setFont(font);

        gridLayout->addWidget(eightButton, 1, 1, 1, 1);

        nineButton = new QPushButton(widget);
        nineButton->setObjectName(QStringLiteral("nineButton"));
        nineButton->setMinimumSize(QSize(40, 40));
        nineButton->setMaximumSize(QSize(40, 40));
        nineButton->setFont(font);

        gridLayout->addWidget(nineButton, 1, 2, 1, 1);

        addButton = new QPushButton(widget);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setMinimumSize(QSize(40, 40));
        addButton->setMaximumSize(QSize(40, 40));
        addButton->setFont(font);

        gridLayout->addWidget(addButton, 1, 3, 1, 1);

        fourButton = new QPushButton(widget);
        fourButton->setObjectName(QStringLiteral("fourButton"));
        fourButton->setMinimumSize(QSize(40, 40));
        fourButton->setMaximumSize(QSize(40, 40));
        fourButton->setFont(font);

        gridLayout->addWidget(fourButton, 2, 0, 1, 1);

        fiveButton = new QPushButton(widget);
        fiveButton->setObjectName(QStringLiteral("fiveButton"));
        fiveButton->setMinimumSize(QSize(40, 40));
        fiveButton->setMaximumSize(QSize(40, 40));
        fiveButton->setFont(font);

        gridLayout->addWidget(fiveButton, 2, 1, 1, 1);

        sixButton = new QPushButton(widget);
        sixButton->setObjectName(QStringLiteral("sixButton"));
        sixButton->setMinimumSize(QSize(40, 40));
        sixButton->setMaximumSize(QSize(40, 40));
        sixButton->setFont(font);

        gridLayout->addWidget(sixButton, 2, 2, 1, 1);

        subButton = new QPushButton(widget);
        subButton->setObjectName(QStringLiteral("subButton"));
        subButton->setMinimumSize(QSize(40, 40));
        subButton->setMaximumSize(QSize(40, 40));
        subButton->setFont(font);

        gridLayout->addWidget(subButton, 2, 3, 1, 1);

        oneButton = new QPushButton(widget);
        oneButton->setObjectName(QStringLiteral("oneButton"));
        oneButton->setMinimumSize(QSize(40, 40));
        oneButton->setMaximumSize(QSize(40, 40));
        oneButton->setFont(font);

        gridLayout->addWidget(oneButton, 3, 0, 1, 1);

        twoButton = new QPushButton(widget);
        twoButton->setObjectName(QStringLiteral("twoButton"));
        twoButton->setMinimumSize(QSize(40, 40));
        twoButton->setMaximumSize(QSize(40, 40));
        twoButton->setFont(font);

        gridLayout->addWidget(twoButton, 3, 1, 1, 1);

        threeButton = new QPushButton(widget);
        threeButton->setObjectName(QStringLiteral("threeButton"));
        threeButton->setMinimumSize(QSize(40, 40));
        threeButton->setMaximumSize(QSize(40, 40));
        threeButton->setFont(font);

        gridLayout->addWidget(threeButton, 3, 2, 1, 1);

        equButton = new QPushButton(widget);
        equButton->setObjectName(QStringLiteral("equButton"));
        equButton->setMinimumSize(QSize(40, 40));
        equButton->setMaximumSize(QSize(40, 90));
        equButton->setFont(font);

        gridLayout->addWidget(equButton, 3, 3, 2, 1);

        leftButton = new QPushButton(widget);
        leftButton->setObjectName(QStringLiteral("leftButton"));
        leftButton->setMinimumSize(QSize(40, 40));
        leftButton->setMaximumSize(QSize(40, 40));
        leftButton->setFont(font);

        gridLayout->addWidget(leftButton, 4, 0, 1, 1);

        zeroButton = new QPushButton(widget);
        zeroButton->setObjectName(QStringLiteral("zeroButton"));
        zeroButton->setMinimumSize(QSize(40, 40));
        zeroButton->setMaximumSize(QSize(40, 40));
        zeroButton->setFont(font);

        gridLayout->addWidget(zeroButton, 4, 1, 1, 1);

        rightButton = new QPushButton(widget);
        rightButton->setObjectName(QStringLiteral("rightButton"));
        rightButton->setMinimumSize(QSize(40, 40));
        rightButton->setMaximumSize(QSize(40, 40));
        rightButton->setFont(font);

        gridLayout->addWidget(rightButton, 4, 2, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        clearButton->setText(QApplication::translate("Widget", "C", Q_NULLPTR));
        mulButton->setText(QApplication::translate("Widget", "*", Q_NULLPTR));
        divButton->setText(QApplication::translate("Widget", "/", Q_NULLPTR));
        delButton->setText(QString());
        sevenButton->setText(QApplication::translate("Widget", "7", Q_NULLPTR));
        eightButton->setText(QApplication::translate("Widget", "8", Q_NULLPTR));
        nineButton->setText(QApplication::translate("Widget", "9", Q_NULLPTR));
        addButton->setText(QApplication::translate("Widget", "+", Q_NULLPTR));
        fourButton->setText(QApplication::translate("Widget", "4", Q_NULLPTR));
        fiveButton->setText(QApplication::translate("Widget", "5", Q_NULLPTR));
        sixButton->setText(QApplication::translate("Widget", "6", Q_NULLPTR));
        subButton->setText(QApplication::translate("Widget", "-", Q_NULLPTR));
        oneButton->setText(QApplication::translate("Widget", "1", Q_NULLPTR));
        twoButton->setText(QApplication::translate("Widget", "2", Q_NULLPTR));
        threeButton->setText(QApplication::translate("Widget", "3", Q_NULLPTR));
        equButton->setText(QApplication::translate("Widget", "=", Q_NULLPTR));
        leftButton->setText(QApplication::translate("Widget", "(", Q_NULLPTR));
        zeroButton->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        rightButton->setText(QApplication::translate("Widget", ")", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
