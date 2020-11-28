#pragma once
#include <vector>
#include <iostream>


#ifndef __Pila_max_VD__
#define __Pila_max_VD__

using namespace std;

template <class T>
class Pila_max_VD
{

	private:
		struct elemento {
			T ele; ///<elemento a almacenar
			T maximo; ///<el máximo
		};
		vector<elemento> pila;
		
	public:

		/**
			@brief Cronstructor por defecto
		*/
		Pila_max_VD() {}
		

		/**
			@brief Cronstructor de copia
			@param orig, otra Pila_max_VD, la cual copiaremos en el objeto implicito
		*/
		Pila_max_VD(const Pila_max_VD<T>& orig);

		/**
			@brief destructor por defecto de la clase
		*/
		virtual ~Pila_max_VD();

		/**
			@brief operator de igualacion para la clase Pila_max_VD
			@param orig, otra Pila_max_VD, la cual copiaremos en el objeto implicito
		*/
		void operator= (const Pila_max_VD<T>& orig);
		

		/**
			@brief devuelve true si la pila esta vacia y false si no
			@return bool
		*/
		bool Vacia();

		/**
			@brief devuelve el tope de la pila por referencia
			@return elemento->ele (devuelve el valor del struct)
		*/
		T& Tope_ele();

		/**
			@brief devuelve el tope de la pila por referencia
			@return const elemento->ele (devuelve el valor del struct)
		*/
		const T & Tope_ele() const;

		/**
			/**
			@brief devuelve el tope de la pila por referencia
			@return elemento->maximo (devuelve el maximo)
		*/
		
		T & Tope_max();

		/**
			@brief devuelve el tope de la pila por referencia
			@return const elemento->maximo (devuelve el maximo)
		*/
		const T& Tope_max() const;

		/**
			@brief devuelve el size del vector
			@return const int
		*/
		const int size()
		{
			return pila.size();
		}

		/**
			@brief funcion para insertar un nuevo elemento T ala pila
			@param elem, elemento T a introducir en la pila
		*/
		void poner(const T& elem);

		/**
			@brief quita el primer elemeno de la pila
		*/
		void quitar();


	

};

template <class T>
Pila_max_VD<T>::Pila_max_VD(const Pila_max_VD<T>& orig)
{
	pila = orig.GetVector();
}

template <class T>
Pila_max_VD<T>::~Pila_max_VD() {
}

template<class T>
void Pila_max_VD<T>::operator=(const Pila_max_VD<T>& orig) {

	pila = orig.pila;

}

//const Cola<T> & Pila_max_Cola<T>::GetCola() const 

template<class T>
bool Pila_max_VD<T>::Vacia()
{

	if (pila.size() == 0)
	{
		return true;
	}

	else
	{
		return false;
	}
}


template <class T>
const T& Pila_max_VD<T>::Tope_ele() const {

	return pila.front().ele;
}

template<class T>
T& Pila_max_VD<T>::Tope_ele() {

	return pila.front().ele;
}

template <class T>
const T& Pila_max_VD<T>::Tope_max() const {

	return pila.front().maximo;
}

template<class T>
T& Pila_max_VD<T>::Tope_max() {

	return pila.front().maximo;
}


template <class T>
void Pila_max_VD<T>::poner(const T& elem) {

	elemento aux;

	aux.ele = elem;
	if (Vacia())
	{
		aux.maximo = elem;
	}
	else
	{
		if (elem >= pila.front().maximo)
		{
			aux.maximo = elem;
		}
		else
		{
			aux.maximo = pila.front().maximo;

		}
	
	}
	if (pila.size() == 0)
		pila.push_back(aux);

	else
	{

		vector<elemento> pila_aux;
		pila_aux.push_back(aux);
		int num = pila.size();

		for (int n = 0; n < num; n++)
		{

			pila_aux.push_back(pila.front());
			pila.erase(pila.begin());
		}
		pila = pila_aux;

	}
}

template <class T>
void Pila_max_VD<T>::quitar()
{
	
	if (pila.size() != 0)
		pila.erase(pila.begin());


}

#endif