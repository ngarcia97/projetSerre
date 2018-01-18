/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BulletinMeteo.h
 * Author: snir2g2
 *
 * Created on 7 décembre 2017, 14:33
 */

#ifndef BULLETINMETEO_H
#define BULLETINMETEO_H
#include "Observable.h"
class BulletinMeteo : public Observable {
public:
    BulletinMeteo();
    virtual ~BulletinMeteo();
    int getTemperature();
    int getVitesseVent();
    bool getAlarmeVent();
    void setVitesseVent(int vitesse);
    void setTemperature(int temperature);
    void setAlarmeVent(bool alerte);
private:
    int temperature;
    int vitesseVent;
    bool alerteVent;
};

#endif /* BULLETINMETEO_H */

