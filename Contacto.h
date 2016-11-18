#ifndef CONTACTO_H
#define CONTACTO_H 
#include <string>

using std::string;

class Contacto{
private:
	string nombre;
	string email;
	int numero;
public:
	Contacto(string,string,int);
	Contacto();
	void setNombre(string);
	string getNombre();
	void setEmail(string);
	string getEmail();
	void setNumero(int);
	int getNumero();
};

#endif