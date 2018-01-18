/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Superviseur.h
 * Author: eleve
 *
 * Created on 7 décembre 2017, 14:47
 */

#ifndef SUPERVISEUR_H
#define SUPERVISEUR_H
#include "VuePrincipale.h"
#include "ClientMeteo.h"
class VuePrincipale;
class Superviseur {
public:
    Superviseur();
    virtual ~Superviseur();
    void setVuePrincipale(VuePrincipale* uneVuePrincipale);
    ClientMeteo* getLeClientMeteo();
private:
    VuePrincipale* laVue;
    ClientMeteo* leClientMeteo;
};

#endif /* SUPERVISEUR_H */

