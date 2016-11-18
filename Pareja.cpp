#include <string>
#include <sstream>
#include "Pareja.h"

using std::stringstream;
using std::string;

Pareja::Pareja() : Contacto(){
    
}

Pareja::Pareja(string nombre,string email, int numero, string fecha) : Contacto(nombre,email,numero),fecha(fecha){
    
}


void Pareja::setFecha(string fecha2){
  fecha = fecha2;
}

string Pareja::getFecha(){
  return fecha;
}

string Pareja::toString(){
	stringstream ss;
	ss<<fecha;
	return ss.str();
}