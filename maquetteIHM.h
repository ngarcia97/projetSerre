/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   maquetteIHM.h
 * Author: snir2g2
 *
 * Created on 21 novembre 2017, 15:37
 */

#ifndef _MAQUETTEIHM_H
#define _MAQUETTEIHM_H

#include "ui_maquetteIHM.h"
#include <QTimer>

class maquetteIHM : public QWidget {
    Q_OBJECT
public:
    maquetteIHM();
    virtual ~maquetteIHM();
public slots:
    void slotPlvCheck();
    void slotOpenOvr();
    void slotCloseOvr();
    void slotAutoPlv();
    void slotInterPlv();
    void slotOvrPos();
private:
    Ui::maquetteIHM widget;
    QTimer *Plvtimer;
    QTimer *Ovrtimer;
    int timePlv = 10;
    int timeOvr = 60;
    bool ovrState;
    bool plvState;
};

#endif /* _MAQUETTEIHM_H */
