#ifndef AMANTES_H
#define  AMANTES_H
#include <string>
#include "Contacto.h"

using std::string;

class Amantes : public Contacto {
    private:
    	string hora;
    public:
        Amantes();
        Amantes(string,string,int,string);
        void setHora(string);
		string getHora();
		string toString();
};

#endif