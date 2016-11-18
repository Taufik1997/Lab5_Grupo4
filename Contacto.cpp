#include "Contacto.h"
#include <string>

Contacto::Contacto(){

}

void Contacto::setNombre(String nombre2){
  nombre = nombre2;
}

int Contacto::getNombre(){
  return nombre;
}

void Contacto::setEmail(string email2){
  email = email2;
}

int Contacto::getEmail(){
  return email;
}

void Contacto::setNumero(int num){
  numero = num;
}

int Contacto::getNumero(){
  return numero;
}