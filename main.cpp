#include <iostream>
#include <vector>
#include "Contacto.h"
#include "Amigos.h"
#include "Pareja.h"
#include "Trabajo.h"
#include "Clase.h"
#include "Familiares.h"
#include "Amantes.h"
#include "Bloqueados.h"
#include <fstream>

using namespace std;

int main(){
	vector<Contacto*>contactos;
	int opcion = 0;
	do{
		cout<<"     Contactos\n1)Agrergar\n2)Eliminar\n3)Listar con Categoria\n4)Salir\n";
		cin>>opcion;
		switch(opcion){
			case 1:{
				string nombre, correo;
				int numero;
				cout<<"Escriba el nombre completo: ";
				cin.ignore();
				getline(cin, nombre);
				bool existe= true;
				do{
					cout<<"Escriba el número de su contacto";
					cin>>numero;
					for (int i = 0; i < contactos.size(); ++i)
					{
						if(numero == contactos.at(i)->getNumero()){
							existe = false;
						}
					}
				}while(!existe);
				cout<<"Correo electrónico";
				cin>>correo;
				int opcion2;
				cout<<endl<<"Categoria:"<<endl<<"1)Amigos\n2)Pareja\n3)Compañero de Trabajo\n4)Compañero de clase\n5)Familiares\n6)Amantes\n7)Bloqueados\n";
				cin>>opcion2;
				if(opcion2==1){
					int nivel;
					do{
						cout<<"Ingrese su nivel de amigo: ";
						cin>>nivel;
					}while(nivel>100 && nivel<1);
					contactos.push_back(new Amigos(nombre, correo, numero, nivel));
				}
				if(opcion2==2){
					string fecha;
					cout<<"Ingrese la fecha que comenzaron a salir: ";
					cin>>fecha;
					contactos.push_back(new Pareja(nombre, correo, numero, fecha));
				}
				if(opcion2==3){
					string departamento;
					cout << "Ingrese el departamento en el que trabajan: ";
					cin>>departamento;
					contactos.push_back(new Trabajo(nombre, correo, numero, departamento));

				}
				if(opcion2==4){
					string classs;
					cout<<"Ingrese la clase en que se conocieron: ";
					cin>>classs;
					contactos.push_back(new Clase(nombre, correo, numero, classs));

				}
				if(opcion2==5){
					string familia;
					cout<<"Ingrese la relacion familiar:";
					contactos.push_back(new Familiares(nombre, correo, numero, familia));
				}
				if(opcion2==6){
					string horario;
					cout<<"Ingrese el horario de su amante: ";
					cin>>horario;
					contactos.push_back(new Amantes(nombre, correo, numero, horario));
				}
				if(opcion2==7){
					int odio;
					do{
						cout<<"Ingrese el nivel de odio: ";
					}while(odio<0 && odio>100);
					contactos.push_back(new Bloqueados(nombre, correo, numero, odio));
				}
				cout<<endl;
				break;				
			}
			case 2:{
				for (int i = 0; i < contactos.size(); ++i)
				{
					cout<< i <<"-"<<contactos.at(i)->toString()<<endl;
				}
				int numeropedido;
				cout<<"Ingrese el contacto que quiere borrar";
				cin>>numeropedido;
				contactos.erase(contactos.begin()+numeropedido);
				break;
			}
			case 3:{
				cout<<"Amigos:"<<endl;
				for (int i = 0; i < contactos.size(); ++i)
				{
					if(dynamic_cast <Amigos*>(contactos.at(i))!=NULL){
						cout<< i<<"-"<<contactos.at(i)->toString()<<endl;
					}
				}
				cout<<"Pareja:"<<endl;
				for (int i = 0; i < contactos.size(); ++i)
				{
					if(dynamic_cast <Pareja*>(contactos.at(i))!=NULL){
						cout<< i<<"-"<<contactos.at(i)->toString()<<endl;
					}
				}
				cout<<"Trabajo:"<<endl;
				for (int i = 0; i < contactos.size(); ++i)
				{
					if(dynamic_cast <Trabajo*>(contactos.at(i))!=NULL){
						cout<< i<<"-"<<contactos.at(i)->toString()<<endl;
					}
				}
				cout<<"Clase:"<<endl;
				for (int i = 0; i < contactos.size(); ++i)
				{
					if(dynamic_cast <Clase*>(contactos.at(i))!=NULL){
						cout<< i<<"-"<<contactos.at(i)->toString()<<endl;
					}
				}
				cout<<"Familiares:"<<endl;
				for (int i = 0; i < contactos.size(); ++i)
				{
					if(dynamic_cast <Familiares*>(contactos.at(i))!=NULL){
						cout<< i<<"-"<<contactos.at(i)->toString()<<endl;
					}
				}
				cout<<"Amantes:"<<endl;
				for (int i = 0; i < contactos.size(); ++i)
				{
					if(dynamic_cast <Amantes*>(contactos.at(i))!=NULL){
						cout<< i<<"-"<<contactos.at(i)->toString()<<endl;
					}
				}
				cout<<"Bloqueados:"<<endl;
				for (int i = 0; i < contactos.size(); ++i)
				{
					if(dynamic_cast <Bloqueados*>(contactos.at(i))!=NULL){
						cout<< i<<"-"<<contactos.at(i)->toString()<<endl;
					}
				}
				cout<<endl;

				break;
			}
		}//Fin Switch 
	}while(opcion>=0 && opcion <=3);//Fin do while
	ofstream file;
	file.open("Contactos.txt");
	file<<"Amigos:"<<endl;
	for (int i = 0; i < contactos.size(); ++i)
	{
		if(dynamic_cast <Amigos*>(contactos.at(i))!=NULL){
			file<< i<<"-"<<contactos.at(i)->toString()<<endl;
		}
	}
	file<<"Pareja:"<<endl;
	for (int i = 0; i < contactos.size(); ++i)
	{
		if(dynamic_cast <Pareja*>(contactos.at(i))!=NULL){
			file<< i<<"-"<<contactos.at(i)->toString()<<endl;
		}
	}
	file<<"Trabajo:"<<endl;
	for (int i = 0; i < contactos.size(); ++i)
	{
		if(dynamic_cast <Trabajo*>(contactos.at(i))!=NULL){
			file<< i<<"-"<<contactos.at(i)->toString()<<endl;
		}
	}
	file<<"Clase:"<<endl;
	for (int i = 0; i < contactos.size(); ++i)
	{
		if(dynamic_cast <Clase*>(contactos.at(i))!=NULL){
			file<< i<<"-"<<contactos.at(i)->toString()<<endl;
		}
	}
	file<<"Familiares:"<<endl;
	for (int i = 0; i < contactos.size(); ++i)
	{
		if(dynamic_cast <Familiares*>(contactos.at(i))!=NULL){
			file<< i<<"-"<<contactos.at(i)->toString()<<endl;
		}
	}
	file<<"Amantes:"<<endl;
	for (int i = 0; i < contactos.size(); ++i)
	{
		if(dynamic_cast <Amantes*>(contactos.at(i))!=NULL){
			file<< i<<"-"<<contactos.at(i)->toString()<<endl;
		}
	}
	file<<"Bloqueados:"<<endl;
	for (int i = 0; i < contactos.size(); ++i)
	{
		if(dynamic_cast <Bloqueados*>(contactos.at(i))!=NULL){
			file<< i<<"-"<<contactos.at(i)->toString()<<endl;
		}
	}
	file<<endl;
	file.close();
	return 0;
}