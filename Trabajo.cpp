#include <string>
#include <sstream>
#include "Trabajo.h"

using std::stringstream;
using std::string;

Trabajo::Trabajo() : Contacto(){
    
}

Trabajo::Trabajo(string nombre,string email, int numero, string departamento) : Contacto(nombre,email,numero),departamento(departamento){
    
}

void Trabajo::setDepartamento(string dep){
  departamento = dep;
}

string Trabajo::getDepartamento(){
  return departamento;
}

string Trabajo::toString(){
	stringstream ss;
	ss<<departamento;
	return ss.str();
}