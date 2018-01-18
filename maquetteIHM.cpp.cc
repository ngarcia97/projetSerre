/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   maquetteIHM.cpp
 * Author: snir2g2
 *
 * Created on 21 novembre 2017, 15:37
 */

#include "maquetteIHM.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

maquetteIHM::maquetteIHM() {
    widget.setupUi(this);
    Plvtimer = new QTimer();
    Ovrtimer = new QTimer();
    connect(Plvtimer, SIGNAL(timeout()),this,SLOT(slotPlvCheck()));
    connect(Ovrtimer, SIGNAL(timeout()),this,SLOT(slotOvrPos()));
    connect(widget.ovrOpenButton, SIGNAL(clicked()),this,SLOT(slotOpenOvr()));
    connect(widget.ovrCloseButton, SIGNAL(clicked()),this,SLOT(slotCloseOvr()));
    connect(widget.plvAutoButton, SIGNAL(clicked()),this,SLOT(slotAutoPlv()));
    connect(widget.plvInterButton, SIGNAL(clicked()),this,SLOT(slotInterPlv()));
    widget.plvCheckButton->setStyleSheet("background:green");
    widget.ovrOpenButton->setEnabled(false);
    widget.ovrCloseButton->setEnabled(true);
    widget.textPosOvr->setText(QString::number(timeOvr));
    widget.plvAutoButton->setEnabled(false);
    widget.plvInterButton->setEnabled(true);
    Plvtimer->start(1000);
    widget.lineEditTemp->setText(QString::number(rand()%100));
    widget.lineEditHumid->setText(QString::number(rand()%100));
    widget.lineEditLum->setText(QString::number(rand()%100));
}

maquetteIHM::~maquetteIHM() {
}

void maquetteIHM::slotPlvCheck() {
    timePlv--;
    if (timePlv > 0){
        widget.plvCheckButton->setText("EN COURS");
        widget.plvCheckButton->setStyleSheet("background:green");
        widget.textPlvTimer->setText(QString::number(timePlv));
    }else {;
        widget.plvCheckButton->setText("ARRET");
        widget.plvCheckButton->setStyleSheet("background:red");
        widget.textPlvTimer->setText(QString::number(timePlv));
        timePlv = 10;
    }
}

void maquetteIHM::slotOpenOvr(){
    if(widget.ovrOpenButton->isEnabled() && widget.ovrCloseButton->isEnabled() == false){
        ovrState = true;
        widget.ovrOpenButton->setEnabled(false);
        widget.ovrCloseButton->setEnabled(true);
        Ovrtimer->start(250);
    }
}

void maquetteIHM::slotCloseOvr(){
    if(widget.ovrCloseButton->isEnabled() && widget.ovrOpenButton->isEnabled() == false){
        ovrState = false;
        widget.ovrCloseButton->setEnabled(false);
        widget.ovrOpenButton->setEnabled(true);
        Ovrtimer->start(250);
    }
}

void maquetteIHM::slotAutoPlv(){
    if(widget.plvAutoButton->isEnabled() && widget.plvInterButton->isEnabled() == false){
        plvState = true;
        widget.plvAutoButton->setEnabled(false);
        widget.plvInterButton->setEnabled(true);
    }
}

void maquetteIHM::slotInterPlv(){
    if(widget.plvInterButton->isEnabled() && widget.plvAutoButton->isEnabled() == false){
        plvState = false;
        widget.plvAutoButton->setEnabled(true);
        widget.plvInterButton->setEnabled(false);
    }
}

void maquetteIHM::slotOvrPos(){
    if (ovrState == true){
        timeOvr++;
        widget.textPosOvr->setText(QString::number(timeOvr));
    }else {
        timeOvr--;
        widget.textPosOvr->setText(QString::number(timeOvr));
    }
    if(timeOvr == 60) Ovrtimer->stop();
    if(timeOvr <= 0) {
        timeOvr = 0;
        Ovrtimer->stop();
    }
}