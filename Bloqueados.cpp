#include <string>
#include <sstream>
#include "Bloqueados.h"

using std::stringstream;

Bloqueados::Bloqueados(){
    
}

void Bloqueados::setNivel(int odio2){
  odio = odio2;
}

int Bloqueados::getNivel(){
  return odio;
}

string Bloqueados::toString(){
	stringstream ss;
	ss<<odio;
	return ss.c_str();
}