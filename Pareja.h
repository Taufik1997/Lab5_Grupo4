#ifndef PAREJA_H
#define  PAREJA_H
#include <string>
#include "Contacto.h"

using std::string;

class Pareja : public Contacto {
    private:
    	string fecha;
    public:
        Pareja();
        Pareja(string,string,int,string);
        void setFecha(string);
		string getFecha();
		string toString();
};

#endif