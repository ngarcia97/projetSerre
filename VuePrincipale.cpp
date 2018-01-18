/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VuePrincipale.cpp
 * Author: snir2g2
 * 
 * Created on 7 décembre 2017, 14:21
 */

#include "VuePrincipale.h"

VuePrincipale::VuePrincipale(Superviseur* unSuperviseur) : leSuperviseur(unSuperviseur) {
    laVueMeteo = new VueMeteo(leSuperviseur->getLeClientMeteo()->getBulletinMeteo());
    vuesSerre[0] = new VueSerre();
    vuesSerre[1] = new VueSerre();
    vuesSerre[2] = new VueSerre();
}

VuePrincipale::~VuePrincipale() {
}

VueMeteo* VuePrincipale::getLaVueMeteo(){
    return laVueMeteo;
}
void VuePrincipale::mettreAJour(){
    
}