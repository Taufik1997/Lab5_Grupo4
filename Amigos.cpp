#include <string>
#include <sstream>
#include "Amigos.h"

using std::stringstream;

Amigos::Amigos(){
    
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
	return ss.c_str();
}