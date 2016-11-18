#ifndef TRABAJO_H
#define  TRABAJO_H
#include <string>
#include "Contacto.h"

class Trabajo : public Contacto {
    private:
    	string departamento;
    public:
        Trabajo();
        void setDepartamento(string);
		int getDepartamento();
		string toString();
};