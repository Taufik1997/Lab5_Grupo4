#include <string>
#include <sstream>
#include "Trabajo.h"

using std::stringstream;

Trabajo::Trabajo(){
    
}

void Trabajo::setDepartamento(string dep){
  departamento = dep;
}

int Trabajo::getDepartamento(){
  return departamento;
}

string departamento::toString(){
	stringstream ss;
	ss<<departamento;
	return ss.c_str();
}