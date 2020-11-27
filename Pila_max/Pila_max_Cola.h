#pragma once
#include "Cola.h"

#ifndef __Pila_max_Cola__
#define __Pila_max_Cola__

struct elemento {
	int ele; ///<elemento a almacenar
	int maximo; ///<el máximo
};

class Pila_max_Cola
{
	private:

		Cola<elemento> pila;
		int num; //numero de elementos de la pila

	public:

		Pila_max_Cola(): num(0)
		{}

		Pila_max_Cola(const Pila_max_Cola & orig);

		~Pila_max_Cola();

		Pila_max_Cola & operator= (const Pila_max_Cola& orig);

		const Cola<elemento> & GetCola() const;
		
		Cola<elemento>& GetCola();

		const int GetNum() const;

		int GetNum();

		bool Vacia();

		const elemento& Tope() const ;

		elemento& Tope();

		void poner(const elemento & elem);

		void quitar();
};

#endif