#ifndef AMANTES_H
#define  AMANTES_H
#include <string>
#include "Contacto.h"

class Amantes : public Contacto {
    private:
    	string hora;
    public:
        Amantes();
        void setHora(string);
		int getHora();
		string toString();
};