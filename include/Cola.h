/*
Nombre: Daniel Manzano Saturnino
Descripcion: Este programa es una
cola,y se comporta como tal 
tiene metodos para encolar
desencolar y vaciar la cola
Atributos: NODO H Y NODO T
*/
#include "Nodo.h"

class Cola
{
public:
	Nodo* H;
	Nodo* T;	
	Cola();
	Cola(int Dato);
	bool ColaVacia();
	void Encolar(int Dato);
	int Desencolar();
	void VaciarCola();
	void Show();
};