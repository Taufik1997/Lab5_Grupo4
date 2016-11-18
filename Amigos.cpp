#include <string>
#include <sstream>
#include "Amigos.h"
#include "Contacto.h"
using std::stringstream;
using std::string;

Amigos::Amigos() : Contacto(){
    
}

Amigos::Amigos(string nombre,string email, int numero, int nivel) : Contacto(nombre,email,numero),nivel(nivel){
}

void Amigos::setNivel(int nivel2){
  nivel = nivel2;
}

int Amigos::getNivel(){
  return nivel;
}

string Amigos::toString(){
	stringstream ss;
	ss<<nivel;
	return ss.str();
}