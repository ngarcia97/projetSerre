/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   climatSerre.h
 * Author: snir2g2
 *
 * Created on 30 novembre 2017, 18:43
 */

#ifndef _CLIMATSERRE_H
#define _CLIMATSERRE_H

#include "ui_climatSerre.h"

class climatSerre : public QWidget {
    Q_OBJECT
public:
    climatSerre();
    virtual ~climatSerre();
private:
    Ui::climatSerre widget;
};

#endif /* _CLIMATSERRE_H */
