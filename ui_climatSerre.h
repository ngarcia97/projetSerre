/********************************************************************************
** Form generated from reading UI file 'climatSerre.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIMATSERRE_H
#define UI_CLIMATSERRE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_climatSerre
{
public:
    QLineEdit *lineEdit_2;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QLabel *label;
    QLineEdit *couleur;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QWidget *climatSerre)
    {
        if (climatSerre->objectName().isEmpty())
            climatSerre->setObjectName(QStringLiteral("climatSerre"));
        climatSerre->resize(400, 300);
        lineEdit_2 = new QLineEdit(climatSerre);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(100, 10, 63, 22));
        label_5 = new QLabel(climatSerre);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 70, 75, 22));
        label_4 = new QLabel(climatSerre);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 40, 63, 22));
        label_3 = new QLabel(climatSerre);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 10, 91, 22));
        lineEdit = new QLineEdit(climatSerre);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(100, 40, 63, 22));
        lineEdit_3 = new QLineEdit(climatSerre);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(100, 70, 63, 22));
        label = new QLabel(climatSerre);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 100, 111, 16));
        couleur = new QLineEdit(climatSerre);
        couleur->setObjectName(QStringLiteral("couleur"));
        couleur->setGeometry(QRect(110, 100, 21, 22));
        label_2 = new QLabel(climatSerre);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(170, 10, 21, 16));
        QFont font;
        font.setPointSize(10);
        label_2->setFont(font);
        label_6 = new QLabel(climatSerre);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(170, 40, 21, 16));
        label_6->setFont(font);
        label_7 = new QLabel(climatSerre);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(170, 70, 21, 16));
        label_7->setFont(font);

        retranslateUi(climatSerre);

        QMetaObject::connectSlotsByName(climatSerre);
    } // setupUi

    void retranslateUi(QWidget *climatSerre)
    {
        climatSerre->setWindowTitle(QApplication::translate("climatSerre", "climatSerre", 0));
        label_5->setText(QApplication::translate("climatSerre", "Luminosit\303\251 :", 0));
        label_4->setText(QApplication::translate("climatSerre", "Humidit\303\251 :", 0));
        label_3->setText(QApplication::translate("climatSerre", "Temp\303\251rature :", 0));
        label->setText(QApplication::translate("climatSerre", "Etat de la serre :", 0));
        label_2->setText(QApplication::translate("climatSerre", "\302\260C", 0));
        label_6->setText(QApplication::translate("climatSerre", "%", 0));
        label_7->setText(QApplication::translate("climatSerre", "Lux", 0));
    } // retranslateUi

};

namespace Ui {
    class climatSerre: public Ui_climatSerre {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIMATSERRE_H
