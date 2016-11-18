#ifndef AMIGOS_H
#define  AMIGOS_H
#include <string>
#include "Contacto.h"

class Amigos : public Contacto {
    private:
    	int nivel;
    public:
        Amigos();
        void setNivel(int);
		int getNivel();
		string toString();
};