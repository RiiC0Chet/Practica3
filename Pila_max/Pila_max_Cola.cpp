//#include "Pila_max_Cola.h"
//	
//	template <class T>
//	Pila_max_Cola<T>::Pila_max_Cola(const Pila_max_Cola<T> & orig){
//	
//		pila = orig.GetCola();
//		num = orig.GetNum();
//	}
//
//	// Al llamar a este destructor ya esta llamando al destructor de cola.
//	
//	template <class T>
//	Pila_max_Cola<T>::~Pila_max_Cola() {
//	}
//
//	template <class T>
//	Pila_max_Cola<T> & Pila_max_Cola<T>::operator= (const Pila_max_Cola<T>& orig) {
//
//		pila = orig.GetCola();
//		num = orig.GetNum();
//
//		return *this;
//	}
//	
//
//	template <class T>
//	const Cola<T> & Pila_max_Cola<T>::GetCola() const {
//		return pila;
//	}
//
//	template <class T>
//	Cola<T> & Pila_max_Cola<T>::GetCola()
//	{
//		return pila;
//	}
//
//	template <class T>
//	const int Pila_max_Cola<T>::GetNum() const
//	{
//		return num;
//	}
//
//	template <class T>
//	int Pila_max_Cola<T>::GetNum()
//	{
//		return num;
//	}
//
//	template <class T>
//	bool Pila_max_Cola<T>::Vacia() 
//	{
//
//		if (num == 0) 
//		{
//			return true;
//		}
//
//		else 
//		{
//			return false;
//		}
//
//	}
//
//	template <class T>
//	const T & Pila_max_Cola<T>::Tope() const {
//		
//		return pila.frente();
//	}
//
//	template <class T>
//	T & Pila_max_Cola<T>::Tope(){
//		
//		return pila.frente();
//	}
//
//	template <class T>
//	void Pila_max_Cola<T>::poner(const T & elem)
//	{
//
//		if (num == 0)
//			pila.poner(elem);
//			
//		else 
//		{                      
//
//			Cola<elemento> pila_aux;
//			pila_aux.poner(elem);
//
//			for (int n = 0; n < num; n++)
//			{
//					
//					pila_aux.poner(pila.frente());
//					pila.quitar();
//			}
//			pila = pila_aux;
//			
//		}
//
//		num++;    
//	}
//
//	template <class T>
//	void Pila_max_Cola<T>::quitar(){
//
//			pila.quitar();
//			
//		/*
//		else 
//		{                      
//
//			Cola<elemento> pila_aux;
//
//			for (int n = 0; n < num-1; n++)
//			{
//					pila.quitar();
//					pila_aux.poner(pila.frente());
//
//			}
//			pila = pila_aux;
//			
//		}
//		*/
//		num--;    
//	}