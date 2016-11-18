#ifndef FAMILIARES_H
#define  FAMILIARES_H
#include <string>
#include "Contacto.h"

using std::string;

class Familiares : public Contacto {
    private:
    	string relacion;
    public:
        Familiares();
        Familiares(string,string,int,string);
        void setRelacion(int);
		string getRelacion();
		string toString();
};

#endif