#include <string>
#include <sstream>
#include "Clase.h"

using std::stringstream;
using std::string;

Clase::Clase() : Contacto(){
    
}

Clase::Clase(string nombre,string email, int numero, string clase) : Contacto(nombre,email,numero),clase(clase){
    
}

void Clase::setClase(string clase2){
  clase = clase2;
}

string Clase::getClase(){
  return clase;
}

string Clase::toString(){
	stringstream ss;
	ss<<clase;
	return ss.str();
}