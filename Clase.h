#ifndef CLASE_H
#define  CLASE_H
#include <string>
#include "Contacto.h"

class Clase : public Contacto {
    private:
    	string clase;
    public:
        Amigos();
        void setClase(int);
		int getClase();
		string toString();
};