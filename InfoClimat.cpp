/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   infoClimat.cpp
 * Author: snirg2
 * 
 * Created on 7 décembre 2017, 15:42
 */

#include "InfoClimat.h"

InfoClimat::InfoClimat() {
}

InfoClimat::~InfoClimat() {
}

int InfoClimat::getHygrometrie(){
   return hygrometrie; 
}

int InfoClimat::getTemperature(){
    return temperature;
}

int InfoClimat::getPositionOuvrants(){
    return positionOuvrants;
}

int InfoClimat::getLuminosite(){
    return luminosite;
}

int InfoClimat::getDate(){
    return date;
}

void InfoClimat::setHygrometrie(int hygrometrie){
    this->hygrometrie = hygrometrie;
}

void InfoClimat::setTemperature(int temperature){
    this->temperature = temperature;
}

void InfoClimat::setPositionOuvrants(int positionOuvrants){
    this->positionOuvrants = positionOuvrants;
}

void InfoClimat::setLuminosite(int luminosite){
    this->luminosite = luminosite;
}

void InfoClimat::setDate(int date){
    this->date = date;
}
