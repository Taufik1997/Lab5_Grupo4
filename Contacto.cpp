#include "Contacto.h"
#include <string>
#include <sstream>
using std::stringstream;
using std::string;

Contacto::Contacto(){

}

Contacto::~Contacto() {

}

Contacto::Contacto(string nombre, string email, int numero){
	this->nombre = nombre;
	this->email = email;
	this->numero = numero;
}

void Contacto::setNombre(string nombre2){
  nombre = nombre2;
}

string Contacto::getNombre(){
  return nombre;
}

void Contacto::setEmail(string email2){
  email = email2;
}

string Contacto::getEmail(){
  return email;
}

void Contacto::setNumero(int num){
  numero = num;
}

int Contacto::getNumero(){
  return numero;
}

string Contacto::toString(){
	stringstream ss;
	ss<<"Nombre: "<<nombre<<" Numero: "<<numero<<" Correo: "<<email;
	return ss.str();
}