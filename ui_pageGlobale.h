/********************************************************************************
** Form generated from reading UI file 'pageGlobale.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEGLOBALE_H
#define UI_PAGEGLOBALE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VueMeteo
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *serreX;
    QFrame *line;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QLabel *label_4;

    void setupUi(QWidget *VueMeteo)
    {
        if (VueMeteo->objectName().isEmpty())
            VueMeteo->setObjectName(QStringLiteral("VueMeteo"));
        VueMeteo->resize(720, 480);
        horizontalLayoutWidget = new QWidget(VueMeteo);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 170, 661, 161));
        serreX = new QHBoxLayout(horizontalLayoutWidget);
        serreX->setObjectName(QStringLiteral("serreX"));
        serreX->setContentsMargins(0, 0, 0, 0);
        line = new QFrame(VueMeteo);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(30, 130, 661, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label = new QLabel(VueMeteo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 100, 59, 14));
        label_2 = new QLabel(VueMeteo);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(320, 100, 59, 14));
        label_3 = new QLabel(VueMeteo);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(540, 100, 59, 14));
        pushButton = new QPushButton(VueMeteo);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 400, 181, 22));
        label_4 = new QLabel(VueMeteo);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(250, 30, 201, 31));
        QFont font;
        font.setFamily(QStringLiteral("DejaVu Sans"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_4->setFont(font);

        retranslateUi(VueMeteo);

        QMetaObject::connectSlotsByName(VueMeteo);
    } // setupUi

    void retranslateUi(QWidget *VueMeteo)
    {
        VueMeteo->setWindowTitle(QApplication::translate("VueMeteo", "Form", 0));
        label->setText(QApplication::translate("VueMeteo", "Serre 1", 0));
        label_2->setText(QApplication::translate("VueMeteo", "Serre 2", 0));
        label_3->setText(QApplication::translate("VueMeteo", "Serre 3", 0));
        pushButton->setText(QApplication::translate("VueMeteo", "Revenir \303\240 l'\303\251cran d'accueil", 0));
        label_4->setText(QApplication::translate("VueMeteo", "Donn\303\251es globales", 0));
    } // retranslateUi

};

namespace Ui {
    class VueMeteo: public Ui_VueMeteo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEGLOBALE_H
