#ifndef BLOQUEADOS_H
#define  BLOQUEADOS_H
#include <string>
#include "Contacto.h"

class Bloqueados : public Contacto {
    private:
    	int odio;
    public:
        Bloqueados();
        void setOdio(int);
		int getOdio();
		string toString();
};

#endif