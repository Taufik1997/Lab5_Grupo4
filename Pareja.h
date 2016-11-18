#ifndef PAREJA_H
#define  PAREJA_H
#include <string>
#include "Contacto.h"

class Pareja : public Contacto {
    private:
    	string fecha;
    public:
        Pareja();
        void setFecha(string);
		int getFecha();
		string toString();
};