/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButton;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QCommandLinkButton *commandLinkButton;
    QCalendarWidget *calendarWidget;
    QWidget *widget2;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QGroupBox *groupBox_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QGroupBox *groupBox_3;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(730, 866);
        widget = new QWidget(Widget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(11, 1, 701, 51));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        toolButton = new QToolButton(widget);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/image/tools.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(30, 30));
        toolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton->setAutoRaise(true);

        horizontalLayout->addWidget(toolButton);

        widget1 = new QWidget(Widget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 70, 701, 241));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        commandLinkButton = new QCommandLinkButton(widget1);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));

        horizontalLayout_2->addWidget(commandLinkButton);

        calendarWidget = new QCalendarWidget(widget1);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));

        horizontalLayout_2->addWidget(calendarWidget);

        widget2 = new QWidget(Widget);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(10, 330, 701, 521));
        verticalLayout = new QVBoxLayout(widget2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(widget2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(10, 30, 112, 21));
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(170, 30, 112, 21));
        radioButton->raise();
        radioButton_2->raise();
        commandLinkButton->raise();

        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(widget2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        radioButton_3 = new QRadioButton(groupBox_2);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(10, 30, 112, 21));
        radioButton_4 = new QRadioButton(groupBox_2);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(170, 30, 131, 21));

        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(widget2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        checkBox = new QCheckBox(groupBox_3);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(10, 30, 89, 21));
        checkBox_2 = new QCheckBox(groupBox_3);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(70, 30, 89, 21));
        checkBox_3 = new QCheckBox(groupBox_3);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(170, 30, 89, 21));
        checkBox_4 = new QCheckBox(groupBox_3);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));
        checkBox_4->setGeometry(QRect(10, 80, 89, 21));
        checkBox_5 = new QCheckBox(groupBox_3);
        checkBox_5->setObjectName(QStringLiteral("checkBox_5"));
        checkBox_5->setGeometry(QRect(120, 80, 89, 21));

        verticalLayout->addWidget(groupBox_3);

        buttonBox = new QDialogButtonBox(widget2);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::No|QDialogButtonBox::Yes);
        buttonBox->setCenterButtons(true);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        toolButton->setText(QApplication::translate("Widget", "\345\267\245\345\205\267", Q_NULLPTR));
        commandLinkButton->setText(QApplication::translate("Widget", "CommandLinkButton", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Widget", "\346\200\247\345\210\253", Q_NULLPTR));
        radioButton->setText(QApplication::translate("Widget", "\347\224\267", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("Widget", "\345\245\263", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Widget", "\345\271\264\351\276\204", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("Widget", "18\345\262\201\344\273\245\344\270\213", Q_NULLPTR));
        radioButton_4->setText(QApplication::translate("Widget", "18\345\262\201\357\274\210\345\220\253\357\274\211\344\273\245\344\270\212", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("Widget", "\347\247\221\347\233\256", Q_NULLPTR));
        checkBox->setText(QApplication::translate("Widget", "C", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("Widget", "C++", Q_NULLPTR));
        checkBox_3->setText(QApplication::translate("Widget", "Java", Q_NULLPTR));
        checkBox_4->setText(QApplication::translate("Widget", "Python", Q_NULLPTR));
        checkBox_5->setText(QApplication::translate("Widget", "Go", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
