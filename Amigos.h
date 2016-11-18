#ifndef AMIGOS_H
#define  AMIGOS_H
#include <string>
#include "Contacto.h"

using std::string;

class Amigos : public Contacto {
    private:
    	int nivel;
    public:
        Amigos();
        Amigos(string,string,int,int);
        void setNivel(int);
		int getNivel();
		string toString();
};

#endif