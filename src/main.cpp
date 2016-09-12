/**
Daniel Manzano Saturnino
*/
#include "Cola.h"
int main()
{
	Cola C=Cola();
	C.Encolar(3);
	C.Encolar(2);
	C.Encolar(4);
	C.Show();
	std::cout<<"atendiendo"<<std::endl;
	C.Desencolar();
	C.Show();
	C.VaciarCola();

}