/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   pageGlobale.cpp
 * Author: snir2g2
 *
 * Created on 30 novembre 2017, 18:23
 */

#include "pageGlobale.h"
#include <QObject>


pageGlobale::pageGlobale() {
    widget.setupUi(this);
    premiereSerre = new climatSerre();
    secondeSerre = new climatSerre();
    troisiemeSerre = new climatSerre();
    widget.serreX->addWidget(premiereSerre);
    widget.serreX->addWidget(secondeSerre);
    widget.serreX->addWidget(troisiemeSerre);
    timer_ = new QTimer();
    timer_->start(1000);
    connect(timer_, SIGNAL(timeout()),this,SLOT(slotTimeOut()));
    //connect(widget.lineEditTemp, SIGNAL(afficher()),this,SLOT(affichage()));
    connect(timer_, SIGNAL(timeout()),this,SLOT(affichage()));    
}

pageGlobale::~pageGlobale() {
}

void pageGlobale::affichage(){
    //QObject *obj = premiereSerre->findChild(QLineEdit).lineEdit_2;
    /*widget.lineEditHumid->setText(QString::number(random()));
    widget.lineEditLum->setText(QString::number(random()));
    
    widget.lineEditTemp_2->setText(QString::number(random()));
    widget.lineEditHumid_2->setText(QString::number(random()));
    widget.lineEditLum_2->setText(QString::number(random()));
    
    widget.lineEditTemp_3->setText(QString::number(random()));
    widget.lineEditHumid_3->setText(QString::number(random()));
    widget.lineEditLum_3->setText(QString::number(random()));
    
    widget.lineEdit->setStyleSheet("background: red");
    widget.lineEdit_2->setStyleSheet("background: green");
    widget.lineEdit_3->setStyleSheet("background: green");*/
    
}
void pageGlobale::slotTimeOut(){
    interrupteur = interrupteur + 1;
    emit afficher(interrupteur);
}

void pageGlobale::slotStart(){
    timer_->start(1000);
}

void pageGlobale::slotStop(){
    timer_->stop();
}