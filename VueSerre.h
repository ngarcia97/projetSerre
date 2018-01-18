/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VueSerre.h
 * Author: snirg2
 *
 * Created on 7 décembre 2017, 16:14
 */

#ifndef VUESERRE_H
#define VUESERRE_H
#include "Observateur.h"
#include "InfoClimat.h"
#include "VuePrincipale.h"
#include <QString>

class VueSerre: public Observateur {
public:
    VueSerre(QString nom, InfoClimat* uneInfoClimat);
    virtual ~VueSerre();
    void mettreAjour();
private:
    //VuePrincipale *laVuePrincipale;
    InfoClimat* infoClimat;
    QString nom; 
};

#endif /* VUESERRE_H */

