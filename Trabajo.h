#ifndef TRABAJO_H
#define  TRABAJO_H
#include <string>
#include "Contacto.h"

using std::string;

class Trabajo : public Contacto {
    private:
    	string departamento;
    public:
        Trabajo();
        Trabajo(string,string,int,string);
        void setDepartamento(string);
		string getDepartamento();
		string toString();
};

#endif