/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VuePrincipale.h
 * Author: snir2g2
 *
 * Created on 7 décembre 2017, 14:21
 */

#ifndef VUEPRINCIPALE_H
#define VUEPRINCIPALE_H
#include "VueMeteo.h"
#include "Superviseur.h"
#include "VueSerre.h"
class VueMeteo;
class Superviseur;
class VueSerre;
class VuePrincipale {
public:
    VuePrincipale(Superviseur* unSuperviseur);
    virtual ~VuePrincipale();
    VueMeteo* getLaVueMeteo();
    virtual void mettreAJour();
private:
    Superviseur* leSuperviseur;
    VueMeteo* laVueMeteo;
    VueSerre* vuesSerre[3];
};

#endif /* VUEPRINCIPALE_H */

