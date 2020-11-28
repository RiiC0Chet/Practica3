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

		/**
			@brief Cronstructor por defecto
		*/
		Pila_max_Cola(): num(0)
		{}

		/**
			@brief Cronstructor de copia
			@param orig, otra Pila_max_cola, la cual copiaremos en el objeto implicito
		*/
		Pila_max_Cola(const Pila_max_Cola<T> & orig);

		/**
			@brief destructor por defecto de la clase
		*/
		virtual ~Pila_max_Cola();

		/**
			@brief operator de igualacion para la clase Pila_max_Cola
			@param orig, otra Pila_max_cola, la cual copiaremos en el objeto implicito
			@return Pila_max_Cola copiada
		*/
		void operator= (const Pila_max_Cola<T> & orig);


		/**
			@brief devuelve el numero de elementos que tiene la pila
			@return const int
		*/
		const int GetNum() const;

		/**
			@brief devuelve el numero de elementos que tiene la pila
			@return  int
		*/
		int GetNum();
		/**
			@brief devuelve true si la pila esta vacia y false si no
			@return bool
		*/
		bool Vacia();


		/**
			@brief devuelve el elemento del tope de la pila por referencia 
			@return const T
		*/
		const T & Tope_ele() const ;

		/**
			@brief devuelve el elemento del tope de la pila por referencia
			@return  T
		*/
		T &  Tope_ele();

		/**
			@brief devuelve el maximo del tope de la pila por referencia
			@return const T
		*/
		const T& Tope_max() const;

		/**
			@brief devuelve el maximo del tope de la pila por referencia
			@return  T
		*/
		T& Tope_max();

		/**
			@brief funcion para insertar un nuevo elemento T ala pila
			@param elem, elemento T a introducir en la pila
		*/
		void poner(const T & elem);

		/**
			@brief quita el primer elemeno de la pila
		*/
		void quitar();

};

		
/*********************************Pila_max_Cola.cpp***************************************/
	template <class T>
	Pila_max_Cola<T>::Pila_max_Cola(const Pila_max_Cola<T> & orig){
	
		pila = orig.pila;
		num = orig.GetNum();
	}

	// Al llamar a este destructor ya esta llamando al destructor de cola.
	
	template <class T>
	Pila_max_Cola<T>::~Pila_max_Cola() {
	}

	template <class T>
	void Pila_max_Cola<T>::operator= (const Pila_max_Cola<T>& orig) {

		pila = orig.pila;
		num = orig.GetNum();

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
	const T & Pila_max_Cola<T>::Tope_ele() const {
		
		return pila.frente().ele;
	}
	
	template <class T>
	T & Pila_max_Cola<T>::Tope_ele(){
		
		return pila.frente().ele;
	}

	template <class T>
	const T& Pila_max_Cola<T>::Tope_max() const {

		return pila.frente().maximo;
	}

	template <class T>
	T& Pila_max_Cola<T>::Tope_max() {

		return pila.frente().maximo;
	}

	template <class T>
	void Pila_max_Cola<T>::poner(const T & elem)
	{

		elemento aux;
		aux.ele = elem;
		
		if (Vacia()){

			aux.maximo = aux.ele;
		}

		else{
			if (elem > pila.frente().maximo)
				aux.maximo = aux.ele;
			else {
				aux.maximo = pila.frente().maximo;
			}
		
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

	