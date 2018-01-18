/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   infoClimat.h
 * Author: snirg2
 *
 * Created on 7 décembre 2017, 15:42
 */

#ifndef INFOCLIMAT_H
#define INFOCLIMAT_H
#include "Observable.h"

class InfoClimat: public Observable {
public:
    InfoClimat();
    virtual ~InfoClimat();
    int getHygrometrie();
    void setHygrometrie(int hygrometrie);
    int getTemperature();
    void setTemperature(int temperature);
    int getPositionOuvrants();
    void setPositionOuvrants(int positionOuvrants);
    int getLuminosite();
    void setLuminosite(int luminosite);
    int getDate();
    void setDate(int date);
private:
    int hygrometrie;
    int temperature;
    int positionOuvrants;
    int luminosite;
    int date;
};

#endif /* INFOCLIMAT_H */

