/********************************************************************************
** Form generated from reading UI file 'search_pass.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_PASS_H
#define UI_SEARCH_PASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_search_pass
{
public:
    QPushButton *okButton;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *name;
    QLineEdit *getname;
    QLabel *ID;
    QLineEdit *getID;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *search_pass)
    {
        if (search_pass->objectName().isEmpty())
            search_pass->setObjectName(QString::fromUtf8("search_pass"));
        search_pass->resize(545, 425);
        okButton = new QPushButton(search_pass);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setGeometry(QRect(230, 320, 56, 18));
        widget = new QWidget(search_pass);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(90, 90, 341, 161));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        name = new QLabel(widget);
        name->setObjectName(QString::fromUtf8("name"));

        formLayout->setWidget(0, QFormLayout::LabelRole, name);

        getname = new QLineEdit(widget);
        getname->setObjectName(QString::fromUtf8("getname"));

        formLayout->setWidget(0, QFormLayout::FieldRole, getname);

        ID = new QLabel(widget);
        ID->setObjectName(QString::fromUtf8("ID"));

        formLayout->setWidget(2, QFormLayout::LabelRole, ID);

        getID = new QLineEdit(widget);
        getID->setObjectName(QString::fromUtf8("getID"));

        formLayout->setWidget(2, QFormLayout::FieldRole, getID);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout->setItem(1, QFormLayout::LabelRole, verticalSpacer);


        retranslateUi(search_pass);

        QMetaObject::connectSlotsByName(search_pass);
    } // setupUi

    void retranslateUi(QDialog *search_pass)
    {
        search_pass->setWindowTitle(QCoreApplication::translate("search_pass", "Dialog", nullptr));
        okButton->setText(QCoreApplication::translate("search_pass", "\347\241\256\350\256\244", nullptr));
        name->setText(QCoreApplication::translate("search_pass", "\345\247\223\345\220\215", nullptr));
        ID->setText(QCoreApplication::translate("search_pass", "\350\257\201\344\273\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class search_pass: public Ui_search_pass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_PASS_H
