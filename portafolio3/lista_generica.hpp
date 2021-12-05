//
// lista_generica.hpp
//lista_generica
//

#ifndef lista_generica_hpp
#define lista_generica_hpp

#include <iostream>
#include <string>
#include <sstream>

using std::string;
using std::ostringstream;
using std::cout;
using std::endl;

template <typename TIPODATO>
class Lista{
	private:
		int cuenta;
		int capacidad;
		TIPODATO *items;
		void agrandar();
	public:
		Lista(int capacidad);
		Lista();
		~Lista();
		Lista(const Lista &otra);
		bool estaVacia();
		int tamano();
		void insertar(int indice, TIPODATO item);
		void adjuntar(TIPODATO item);
		TIPODATO obtener(int indice);
		bool contiene(TIPODATO item);
		TIPODATO remover(int indice);
		string comoCadena();
		
};

//Constructor
template <typename TIPODATO>
Lista<TIPODATO>::Lista(): Lista(4){}

//Destructor de la lista
template <typename TIPODATO>
Lista<TIPODATO>::~Lista(){
	cout << "Destruyendo la lista..." << endl;
	delete[] items;
}

//Construir una lista a partir de otra 
template <typename TIPODATO>
Lista<TIPODATO>::Lista(const Lista<TIPODATO> &otra){
	cout <<"copiando una lista desde otra..." << endl;
	this->cuenta =otra.cuenta;
	this->capacidad=otra.capacidad;
	this->items =new TIPODATO[capacidad];
	for (int i=0; i< this->cuenta; i++)
		this->items[i] = otra.items[i];
		
}

//esta lista esrta vacia?
template <typename TIPODATO>
bool lista<TIPODATO>::estaVacia(){
	cout << "comprobando si la lista esta vacia..." << endl;
	return this->cuenta ==0;
}

//tamano de la lista
template <typename TIPODATO>
bool Lista<TIPODATO>::tamano(){
	cout<< "obteniendo el tamano de la lista..." << endl;
	return this->cuenta;
}




