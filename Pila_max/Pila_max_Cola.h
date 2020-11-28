#pragma once
#include "Cola.h"

#ifndef __Pila_max_Cola__
#define __Pila_max_Cola__

using namespace std;
template <class T>
class Pila_max_Cola
{
	private:

		struct elemento {
			T ele; ///<elemento a almacenar
			T maximo; ///<el máximo
		};

		Cola<elemento> pila;
		int num; //numero de elementos de la pila

	public:

		Pila_max_Cola(): num(0)
		{}

		Pila_max_Cola(const Pila_max_Cola<T> & orig);

		virtual ~Pila_max_Cola();

		Pila_max_Cola & operator= (const Pila_max_Cola<T> & orig);

		const Cola<T> & GetCola() const;
		
		Cola<T> & GetCola();

		const int GetNum() const;

		int GetNum();

		bool Vacia();

		const T & Tope() const ;

		T & Tope();

		void poner(const T & elem);

		void quitar();
};

	template <class T>
	Pila_max_Cola<T>::Pila_max_Cola(const Pila_max_Cola<T> & orig){
	
		pila = orig.GetCola();
		num = orig.GetNum();
	}

	// Al llamar a este destructor ya esta llamando al destructor de cola.
	
	template <class T>
	Pila_max_Cola<T>::~Pila_max_Cola() {
	}

	template <class T>
	Pila_max_Cola<T> & Pila_max_Cola<T>::operator= (const Pila_max_Cola<T>& orig) {

		pila = orig.GetCola();
		num = orig.GetNum();

		return *this;
	}
	

	template <class T>
	const Cola<T> & Pila_max_Cola<T>::GetCola() const {
		return pila;
	}

	template <class T>
	Cola<T> & Pila_max_Cola<T>::GetCola()
	{
		return pila;
	}

	template <class T>
	const int Pila_max_Cola<T>::GetNum() const
	{
		return num;
	}

	template <class T>
	int Pila_max_Cola<T>::GetNum()
	{
		return num;
	}

	template <class T>
	bool Pila_max_Cola<T>::Vacia() 
	{

		if (num == 0) 
		{
			return true;
		}

		else 
		{
			return false;
		}

	}

	template <class T>
	const T & Pila_max_Cola<T>::Tope() const {
		
		return pila.frente();
	}

	template <class T>
	T & Pila_max_Cola<T>::Tope(){
		
		return pila.frente();
	}

	template <class T>
	void Pila_max_Cola<T>::poner(const T & elem)
	{

		elemento aux;
		aux->ele = elem;
		
		if (elem > pila.frente()->maximo)
			aux->maximo = aux->ele;
		else {
			aux->maximo = pila.frente()->maximo;
		}

		if (num == 0)
			pila.poner(aux);
			
		else 
		{                      

			Cola<elemento> pila_aux;
			pila_aux.poner(aux);

			for (int n = 0; n < num; n++)
			{
					
					pila_aux.poner(pila.frente());
					pila.quitar();
			}
			pila = pila_aux;
			
		}

		num++;    
	}

	template <class T>
	void Pila_max_Cola<T>::quitar(){

		pila.quitar();
		num--;    
	}

	#endif