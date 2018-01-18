/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VueMeteo.cpp
 * Author: snir2g2
 * 
 * Created on 7 décembre 2017, 14:30
 */

#include "VueMeteo.h"

VueMeteo::VueMeteo(BulletinMeteo* unBulletinMeteo) {
    this->dernierBulletinMeteo = unBulletinMeteo;
    this->dernierBulletinMeteo->addObservateur(this);
    //widget.setupUi(this);
}

VueMeteo::~VueMeteo() {
}

void VueMeteo::mettreAJour(){
    
}
