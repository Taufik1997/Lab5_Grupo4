#ifndef BLOQUEADOS_H
#define  BLOQUEADOS_H
#include <string>
#include "Contacto.h"

using std::string;

class Bloqueados : public Contacto {
    private:
    	int odio;
    public:
        Bloqueados();
        Bloqueados(string,string,int,int);
        void setOdio(int);
		int getOdio();
		string toString();
};

#endif