main:	main.o Contacto.o Amigos.o Pareja.o Trabajo.o Clase.o Familiares.o Amantes.o Bloqueados.o
	g++ main.o Contacto.o Amigos.o Pareja.o Trabajo.o Clase.o Familiares.o Amantes.o Bloqueados.o -o main

main.o:	main.cpp Contacto.h Amigos.h Pareja.h Trabajo.h Clase.h Familiares.h Amantes.h Bloqueados.h
	g++ -c main.cpp

Amigos.o: Contacto.h Amigos.h Amigos.cpp
	g++ -c Amigos.cpp

Pareja.o: Contacto.h Pareja.h Pareja.cpp
	g++ -c Pareja.cpp

Trabajo.o: Contacto.h Trabajo.h Trabajo.cpp
	g++ -c Trabajo.cpp

Clase.o: Contacto.h Clase.h Clase.cpp
	g++ -c Clase.cpp

Familiares.o: Contacto.h Familiares.h Familiares.cpp
	g++ -c Familiares.cpp

Amantes.o: Contacto.h Amantes.h Amantes.cpp
	g++ -c Amantes.cpp

Bloqueados.o: Contacto.h Bloqueados.h Bloqueados.cpp
	g++ -c Bloqueados.cpp

 