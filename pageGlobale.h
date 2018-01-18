/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   pageGlobale.h
 * Author: snir2g2
 *
 * Created on 30 novembre 2017, 18:23
 */

#ifndef _PAGEGLOBALE_H
#define _PAGEGLOBALE_H

#include "ui_pageGlobale.h"
#include "ui_climatSerre.h"
#include "climatSerre.h"
#include <QTimer>
#include <QString>

class pageGlobale : public QWidget {
    Q_OBJECT
public:
    pageGlobale();
    virtual ~pageGlobale();
    int interrupteur;
private:
    Ui::pageGlobale widget;
    climatSerre *premiereSerre;
    climatSerre *secondeSerre;
    climatSerre *troisiemeSerre;
    QTimer *timer_;
public slots:
    void slotStart();
    void slotStop();
    void slotTimeOut();
    void affichage();
signals:
    void afficher(double);
};

#endif /* _PAGEGLOBALE_H */
