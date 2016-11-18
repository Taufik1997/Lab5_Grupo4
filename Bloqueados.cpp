#include <string>
#include <sstream>
#include "Bloqueados.h"

using std::stringstream;
using std::string;

Bloqueados::Bloqueados() : Contacto(){
    
}

Bloqueados::Bloqueados(string nombre,string email, int numero, int odio) : Contacto(nombre,email,numero),odio(odio){
    
}

void Bloqueados::setOdio(int odio2){
  odio = odio2;
}

int Bloqueados::getOdio(){
  return odio;
}

string Bloqueados::toString(){
	stringstream ss;
	ss<<odio;
	return ss.str();
}