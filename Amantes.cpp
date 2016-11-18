#include <string>
#include <sstream>
#include "Amantes.h"

using std::stringstream;

Amantes::Amantes(){
    
}

void Amantes::setHora(string horario){
  hora = horario;
}

int Amantes::getHora(){
  return hora;
}

string Amantes::toString(){
	stringstream ss;
	ss<<hora;
	return ss.c_str();
}