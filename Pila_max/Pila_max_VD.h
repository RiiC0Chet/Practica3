#pragma once
#include <vector>

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

		Pila_max_VD()
		{}

		Pila_max_VD(const Pila_max_VD<T>& orig);

		virtual ~Pila_max_VD();

		Pila_max_VD<T> & operator= (const Pila_max_VD<T>& orig);
		
		const vector<T> & GetVector() const;

		vector<T>& GetVector();

		bool Vacia();

		const T & Tope() const;

		T & Tope();

		void poner(const T& elem);

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
Pila_max_VD<T>& Pila_max_VD<T>::operator=(const Pila_max_VD<T>& orig) {

	pila = orig.GetVector();

	return *this;
}

//const Cola<T> & Pila_max_Cola<T>::GetCola() const 



template <class T>
const vector<T> & Pila_max_VD<T>::GetVector() const
{
	return pila;
}

template <class T>
vector<T>& Pila_max_VD<T>::GetVector()
{
	return pila;
}

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
const T& Pila_max_VD<T>::Tope() const {

	return pila.front();
}

template<class T>
T& Pila_max_VD<T>::Tope() {

	return pila.front();
}

template <class T>
void Pila_max_VD<T>::poner(const T& elem) {

	elemento aux;

	aux->ele = elem;
	if (elem >= GetVector().begin()->maximo)
	{
		aux->maximo = elem;
	}
	else
	{
		aux->maximo = GetVector().begin()->maximo;
	
	}

	if (pila.size() == 0)
		pila.push_back(aux);

	else
	{

		vector<elemento> pila_aux;
		pila_aux.push_back(aux);
		num = pila.size();

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