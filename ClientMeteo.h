/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ClientMeteo.h
 * Author: snir2g2
 *
 * Created on 7 décembre 2017, 14:48
 */

#ifndef CLIENTMETEO_H
#define CLIENTMETEO_H
#include "BulletinMeteo.h"

class ClientMeteo {
public:
    ClientMeteo();
    virtual ~ClientMeteo();
    //void traiterBulletinMeteo(BulletinMeteo* bulletin);
    void declencherAlerteVent();
    void declencherFinAlerteVent();
    BulletinMeteo* getBulletinMeteo();
private:
    BulletinMeteo* dernierBulletinMeteo;
};

#endif /* CLIENTMETEO_H */

