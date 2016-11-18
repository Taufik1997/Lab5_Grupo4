#include <string>
#include <sstream>
#include "Pareja.h"

using std::stringstream;

Pareja::Pareja(){
    
}

void Pareja::setFecha(string fecha2){
  fecha = fecha2;
}

int Pareja::getFecha(){
  return fecha;
}

string Pareja::toString(){
	stringstream ss;
	ss<<fecha;
	return ss.c_str();
}