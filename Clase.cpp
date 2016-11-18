#include <string>
#include <sstream>
#include "Clase.h"

using std::stringstream;

Clase::Clase(){
    
}

void Clase::setNivel(int clasel2){
  clase = clase2;
}

int Clase::getNivel(){
  return clase;
}

string Clase::toString(){
	stringstream ss;
	ss<<clase;
	return ss.c_str();
}