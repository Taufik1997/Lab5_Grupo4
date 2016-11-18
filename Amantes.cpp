#include <string>
#include <sstream>
#include "Amantes.h"

using std::stringstream;
using std::string;

Amantes::Amantes(): Contacto(){
    
}


Amantes::Amantes(string nombre,string email, int numero, string hora) : Contacto(nombre,email,numero),hora(hora){
    
}

void Amantes::setHora(string horario){
  hora = horario;
}

string Amantes::getHora(){
  return hora;
}

string Amantes::toString(){
	stringstream ss;
	ss<<hora;
	return ss.str();
}