#ifndef CLASE_H
#define  CLASE_H
#include <string>
#include "Contacto.h"

using std::string;

class Clase : public Contacto {
    private:
    	string clase;
    public:
        Clase();
        Clase(string,string,int,string);
        void setClase(string);
		string getClase();
		string toString();
};

#endif