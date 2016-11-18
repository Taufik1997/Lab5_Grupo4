#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	int opcion=0;
	do{
		cout<<"     Contactos\n1)Agrergar\n2)Listar\n3)ELiminar\n4)Salir\n";
		cin>>opcion;
		switch(opcion){
			case 1:{
				int opcion2;
				cout<<"1)Amigos\n2)Pareja\n3)Compañero de Trabajo\n4)Compañero de clase\n5)Familiares\n6)Amantes\n7)Bloqueados\n";
				cin>>opcion2;
				if(opcion2==1){

				}
				if(opcion2==2){

				}
				if(opcion2==3){

				}
				if(opcion2==4){

				}
				if(opcion2==5){

				}
				if(opcion2==6){

				}
				if(opcion2==7){

				}
				break;				
			}
			case 2:{

				break;
			}
			case 3:{

				break;
			}
		}//Fin Switch 
	}while(opcion>=0 && opcion <=3);//Fin do while
	return 0;
}