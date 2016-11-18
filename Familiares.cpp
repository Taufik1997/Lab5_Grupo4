#include <string>
#include <sstream>
#include "Familiares.h"

using std::stringstream;

Familiares::Familiares(){
    
}

void Familiares::setRelacion(int relacion2){
  relacion = relacion2;
}

int Familiares::getRelacion(){
  return relacion;
}

string Familiares::toString(){
	stringstream ss;
	ss<<relacion;
	return ss.c_str();
}