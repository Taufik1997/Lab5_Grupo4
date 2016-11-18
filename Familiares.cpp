#include <string>
#include <sstream>
#include "Familiares.h"

using std::stringstream;
using std::string;

Familiares::Familiares() : Contacto(){
    
}
Familiares::Familiares(string nombre,string email, int numero, string relacion) : Contacto(nombre,email,numero),relacion(relacion){
    
}



void Familiares::setRelacion(int relacion2){
  relacion = relacion2;
}

string Familiares::getRelacion(){
  return relacion;
}

string Familiares::toString(){
	stringstream ss;
	ss<<relacion;
	return ss.str();
}