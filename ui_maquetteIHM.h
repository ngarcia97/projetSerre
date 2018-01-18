/********************************************************************************
** Form generated from reading UI file 'maquetteIHM.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAQUETTEIHM_H
#define UI_MAQUETTEIHM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_maquetteIHM
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEditTemp;
    QLineEdit *lineEditHumid;
    QLineEdit *lineEditLum;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QFrame *line;
    QComboBox *choixSerre;
    QPushButton *boutonRetour;
    QPushButton *plvCheckButton;
    QLabel *label_8;
    QLineEdit *textPlvTimer;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *ovrOpenButton;
    QFrame *line_2;
    QLabel *label_11;
    QPushButton *plvAutoButton;
    QPushButton *plvInterButton;
    QLabel *label_12;
    QPushButton *ovrCloseButton;
    QLabel *label_13;
    QLineEdit *textPosOvr;
    QLabel *label_14;

    void setupUi(QWidget *maquetteIHM)
    {
        if (maquetteIHM->objectName().isEmpty())
            maquetteIHM->setObjectName(QStringLiteral("maquetteIHM"));
        maquetteIHM->setEnabled(true);
        maquetteIHM->resize(720, 480);
        label = new QLabel(maquetteIHM);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(240, 60, 221, 16));
        QFont font;
        font.setFamily(QStringLiteral("DejaVu Sans"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(maquetteIHM);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 180, 91, 16));
        QFont font1;
        font1.setFamily(QStringLiteral("DejaVu Sans"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        label_2->setFont(font1);
        label_3 = new QLabel(maquetteIHM);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 220, 71, 16));
        label_3->setFont(font1);
        label_4 = new QLabel(maquetteIHM);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(70, 260, 81, 16));
        label_4->setFont(font1);
        lineEditTemp = new QLineEdit(maquetteIHM);
        lineEditTemp->setObjectName(QStringLiteral("lineEditTemp"));
        lineEditTemp->setGeometry(QRect(160, 180, 31, 22));
        lineEditHumid = new QLineEdit(maquetteIHM);
        lineEditHumid->setObjectName(QStringLiteral("lineEditHumid"));
        lineEditHumid->setGeometry(QRect(160, 220, 31, 22));
        lineEditLum = new QLineEdit(maquetteIHM);
        lineEditLum->setObjectName(QStringLiteral("lineEditLum"));
        lineEditLum->setGeometry(QRect(160, 260, 31, 22));
        label_5 = new QLabel(maquetteIHM);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(200, 180, 21, 16));
        QFont font2;
        font2.setPointSize(10);
        label_5->setFont(font2);
        label_6 = new QLabel(maquetteIHM);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(200, 220, 21, 16));
        label_6->setFont(font2);
        label_7 = new QLabel(maquetteIHM);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(200, 260, 21, 16));
        label_7->setFont(font2);
        line = new QFrame(maquetteIHM);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(240, 130, 20, 251));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        choixSerre = new QComboBox(maquetteIHM);
        choixSerre->setObjectName(QStringLiteral("choixSerre"));
        choixSerre->setGeometry(QRect(510, 440, 181, 22));
        boutonRetour = new QPushButton(maquetteIHM);
        boutonRetour->setObjectName(QStringLiteral("boutonRetour"));
        boutonRetour->setGeometry(QRect(30, 440, 181, 22));
        plvCheckButton = new QPushButton(maquetteIHM);
        plvCheckButton->setObjectName(QStringLiteral("plvCheckButton"));
        plvCheckButton->setEnabled(false);
        plvCheckButton->setGeometry(QRect(375, 137, 81, 22));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 170, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(0, 255, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(0, 212, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(0, 85, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(0, 113, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(127, 212, 127, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        plvCheckButton->setPalette(palette);
        label_8 = new QLabel(maquetteIHM);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(280, 180, 101, 16));
        textPlvTimer = new QLineEdit(maquetteIHM);
        textPlvTimer->setObjectName(QStringLiteral("textPlvTimer"));
        textPlvTimer->setGeometry(QRect(400, 180, 51, 22));
        label_9 = new QLabel(maquetteIHM);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(461, 180, 61, 16));
        label_10 = new QLabel(maquetteIHM);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(280, 260, 151, 16));
        ovrOpenButton = new QPushButton(maquetteIHM);
        ovrOpenButton->setObjectName(QStringLiteral("ovrOpenButton"));
        ovrOpenButton->setEnabled(true);
        ovrOpenButton->setGeometry(QRect(430, 257, 81, 20));
        line_2 = new QFrame(maquetteIHM);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(260, 215, 421, 31));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_11 = new QLabel(maquetteIHM);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(280, 340, 231, 16));
        plvAutoButton = new QPushButton(maquetteIHM);
        plvAutoButton->setObjectName(QStringLiteral("plvAutoButton"));
        plvAutoButton->setGeometry(QRect(500, 337, 81, 22));
        plvInterButton = new QPushButton(maquetteIHM);
        plvInterButton->setObjectName(QStringLiteral("plvInterButton"));
        plvInterButton->setGeometry(QRect(600, 337, 81, 22));
        label_12 = new QLabel(maquetteIHM);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(280, 140, 101, 16));
        ovrCloseButton = new QPushButton(maquetteIHM);
        ovrCloseButton->setObjectName(QStringLiteral("ovrCloseButton"));
        ovrCloseButton->setEnabled(true);
        ovrCloseButton->setGeometry(QRect(530, 257, 81, 20));
        label_13 = new QLabel(maquetteIHM);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(280, 300, 151, 16));
        textPosOvr = new QLineEdit(maquetteIHM);
        textPosOvr->setObjectName(QStringLiteral("textPosOvr"));
        textPosOvr->setGeometry(QRect(440, 297, 51, 22));
        label_14 = new QLabel(maquetteIHM);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(500, 300, 16, 16));
        lineEditTemp->raise();
        lineEditHumid->raise();
        lineEditLum->raise();
        line->raise();
        choixSerre->raise();
        boutonRetour->raise();
        plvCheckButton->raise();
        textPlvTimer->raise();
        ovrOpenButton->raise();
        line_2->raise();
        plvAutoButton->raise();
        plvInterButton->raise();
        label->raise();
        label_5->raise();
        label_3->raise();
        label_7->raise();
        label_8->raise();
        label_2->raise();
        label_10->raise();
        label_6->raise();
        label_11->raise();
        label_4->raise();
        label_9->raise();
        label_12->raise();
        ovrCloseButton->raise();
        label_13->raise();
        textPosOvr->raise();
        label_14->raise();

        retranslateUi(maquetteIHM);

        QMetaObject::connectSlotsByName(maquetteIHM);
    } // setupUi

    void retranslateUi(QWidget *maquetteIHM)
    {
        maquetteIHM->setWindowTitle(QApplication::translate("maquetteIHM", "Form", 0));
        label->setText(QApplication::translate("maquetteIHM", "Donn\303\251es int\303\251rieures", 0));
        label_2->setText(QApplication::translate("maquetteIHM", "Temp\303\251rature :", 0));
        label_3->setText(QApplication::translate("maquetteIHM", "Humidit\303\251 :", 0));
        label_4->setText(QApplication::translate("maquetteIHM", "Luminosit\303\251 :", 0));
        label_5->setText(QApplication::translate("maquetteIHM", "\302\260C", 0));
        label_6->setText(QApplication::translate("maquetteIHM", "%", 0));
        label_7->setText(QApplication::translate("maquetteIHM", "Lux", 0));
        choixSerre->clear();
        choixSerre->insertItems(0, QStringList()
         << QApplication::translate("maquetteIHM", "Choix de la serre", 0)
         << QApplication::translate("maquetteIHM", "Serre 1", 0)
         << QApplication::translate("maquetteIHM", "Serre 2", 0)
         << QApplication::translate("maquetteIHM", "Serre 3", 0)
        );
        boutonRetour->setText(QApplication::translate("maquetteIHM", "Revenir \303\240 l'\303\251cran d'accueil", 0));
        plvCheckButton->setText(QApplication::translate("maquetteIHM", "EN COURS", 0));
        label_8->setText(QApplication::translate("maquetteIHM", "Temps Restant :", 0));
        label_9->setText(QApplication::translate("maquetteIHM", "secondes", 0));
        label_10->setText(QApplication::translate("maquetteIHM", "Etat des ouvrants :", 0));
        ovrOpenButton->setText(QApplication::translate("maquetteIHM", "OUVRIR", 0));
        label_11->setText(QApplication::translate("maquetteIHM", "Autorisation de la pulv\303\251risation :", 0));
        plvAutoButton->setText(QApplication::translate("maquetteIHM", "AUTORISER", 0));
        plvInterButton->setText(QApplication::translate("maquetteIHM", "INTERDIRE", 0));
        label_12->setText(QApplication::translate("maquetteIHM", "Pulv\303\251risation :", 0));
        ovrCloseButton->setText(QApplication::translate("maquetteIHM", "FERMER", 0));
        label_13->setText(QApplication::translate("maquetteIHM", "Position des ouvrants :", 0));
        label_14->setText(QApplication::translate("maquetteIHM", "\302\260", 0));
    } // retranslateUi

};

namespace Ui {
    class maquetteIHM: public Ui_maquetteIHM {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAQUETTEIHM_H
