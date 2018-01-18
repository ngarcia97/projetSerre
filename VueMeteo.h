/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VueMeteo.h
 * Author: snir2g2
 *
 * Created on 7 décembre 2017, 14:30
 */

#ifndef VUEMETEO_H
#define VUEMETEO_H
#include "ui_pageGlobale.h"
#include "Observateur.h"
#include "BulletinMeteo.h"
#include "VuePrincipale.h"
class VueMeteo : public Observateur {
public:
    VueMeteo(BulletinMeteo* unBulletinMeteo);
    virtual ~VueMeteo();
    virtual void mettreAJour();
private:
    Ui::VueMeteo widget;
    //VuePrincipale* laVuePrincipale;
    BulletinMeteo* dernierBulletinMeteo;
};

#endif /* VUEMETEO_H */

