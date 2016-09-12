/**
Daniel Manzano Saturnino
*/
#include "Cola.h"
/**
Constructor cola
este constructor si no recibe ningun parametro 
T y H apuntan NULL
*/
Cola::Cola()
{
	this->T=NULL;
	this->H=NULL;
}
/**
Constructor 
@parametros: int Dato, un dato de tipo entero
@result: void 
Este constructor crea un nodo con un 
dato recibido y le asigna a H Y  T el auxiliar
*/
Cola::Cola(int Dato)
	{
		Nodo * aux= new Nodo(Dato);
		this->H=aux;
		this->T=aux;
	}
/**
ColaVacia
@parametros: void
@result: bool 
pregunta si H y T apuntan a NULL 
si esto se cumple regresa un True si no un False
*/
bool Cola::ColaVacia()
{
	if (this->H == NULL && this->T == NULL)
			return true;
		return false;	
}
/**
Encolar 
@parametros: int Dato un dato de tipo entero
@result: void 
este metodo lo que hace es crear un nodo con la referecia
despues pregunta si la cola esta vacia y llama al metodo cola vacia
posterior mente si esto se cumple  tanto H como T apuntan al auxiliar
que hemos creado  si no,T apunta a al nodo creado y  posteriormente a T 
se le asigna el nodo creado para que se sea el final de la cola 
*/
void Cola::Encolar(int Dato)
{
	Nodo*aux=new Nodo(Dato);
	if(ColaVacia()){
		this->H= aux;
		this->T= aux;

	}else
	{
		this->T->setSig(aux);
		this->T= aux;
	}
}
/**
Desencolar
@parametros: void
@result: int un entero
pregunta si la cola esta vacia y llama al metodo cola vacia 
si se cumple imprimie la cola esta vacia y retorna, si no 
obtiene el dato que se encuentra en H y lo guarda en una variable
llamada dato, ahora hacemos que H sea el siguiente de H y pregunta 
si H apunta a NULL entonces T apunta a NULL y al final devuelve el dato 
*/
int Cola::Desencolar()
{
	if(ColaVacia())
		{
			std::cout<<"La Cola se encuentra vacia"<<std::endl;
			return 0;
		}else
		{
			int Dato=H->getDato();
			this->H=H->getSig();
			if(this->H==NULL)
				this->T=NULL;
			return Dato;
		}
}
/**
VaciarCola
@parametros: void 
@Result:void 
Pregunta si la cola esta vacia llamando al metodo cola vacia si es asi 
envia una leyenda que dice que esta vacia si no 
hace que T y H apunten a NULL para perder todas las referencias y una leyeda
que dice que se ha vaciado la cola
*/
void Cola::VaciarCola()

{
	if (ColaVacia())
	{
		std::cout<<"La Cola esta vacia"<<std::endl;
		return;
	}else
	{
		this->H=NULL;
		this->T=NULL;
		std::cout<<"He dejado la cola vacia"<<std::endl;
			
	}
		return;
	
}
/**
Show
@parametros: void
@result: void
Crea un nodo que apunta a H y mediante un while 
recorre la cola y hasta que encuentre un NULL
e imprime el dato y va apuntando al siguiente confome avanzan 
los ciclos
*/

void Cola::Show()
{
	Nodo* aux = this->H;
		while(aux!=NULL)
		{
			std::cout<<aux->getDato()<<std::endl;
			aux=aux->getSig();
		}
}
