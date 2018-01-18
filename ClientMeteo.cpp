/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ClientMeteo.cpp
 * Author: snir2g2
 * 
 * Created on 7 décembre 2017, 14:48
 */

#include "ClientMeteo.h"
#include "BulletinMeteo.h"

ClientMeteo::ClientMeteo() {
}

ClientMeteo::~ClientMeteo() {
}

/*void ClientMeteo::traiterBulletinMeteo(BulletinMeteo* bulletin){
    
}*/

void ClientMeteo::declencherAlerteVent(){
    dernierBulletinMeteo->setAlarmeVent(true);
}

void ClientMeteo::declencherFinAlerteVent(){
    dernierBulletinMeteo->setAlarmeVent(false);
}

BulletinMeteo* ClientMeteo::getBulletinMeteo(){
    return dernierBulletinMeteo;
}
