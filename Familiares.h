#ifndef FAMILIARES_H
#define  FAMILIARES_H
#include <string>
#include "Contacto.h"

class Familiares : public Contacto {
    private:
    	string relacion;
    public:
        Amigos();
        void setRelacion(int);
		int getRelacion();
		string toString();
};

#endif