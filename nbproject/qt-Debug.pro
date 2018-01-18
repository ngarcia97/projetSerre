# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Debug/GNU-Linux
TARGET = pageGlobale
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += debug 
PKGCONFIG +=
QT = core gui widgets
SOURCES += BulletinMeteo.cpp ClientMeteo.cpp InfoClimat.cpp Observable.cpp Observateur.cpp Serre.cpp Superviseur.cpp VueMeteo.cpp VuePrincipale.cpp VueSerre.cpp climatSerre.cpp.cc main.cpp maquetteIHM.cpp.cc pageGlobale.cpp.cc
HEADERS += BulletinMeteo.h ClientMeteo.h InfoClimat.h Observable.h Observateur.h Serre.h Superviseur.h VueMeteo.h VuePrincipale.h VueSerre.h climatSerre.h maquetteIHM.h pageGlobale.h
FORMS += climatSerre.ui maquetteIHM.ui pageGlobale.ui
RESOURCES +=
TRANSLATIONS +=
OBJECTS_DIR = build/Debug/GNU-Linux
MOC_DIR = 
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc
QMAKE_CXX = g++
DEFINES += 
INCLUDEPATH += 
LIBS += 
