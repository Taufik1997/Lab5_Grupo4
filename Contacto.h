#ifndef CONTACTO_H
#define CONTACTO_H 
#include <string>

class Contacto{
private:
	string nombre;
	string email;
	int numero;
public:
	Operacion();
	void setNombre(string);
	int getNombre();
	void setEmail(string);
	int getEmail();
	void setNumero(int);
	int getEmail();
};

#endif