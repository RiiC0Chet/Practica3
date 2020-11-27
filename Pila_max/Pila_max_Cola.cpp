#include "Pila_max_Cola.h"



	Pila_max_Cola::Pila_max_Cola(const Pila_max_Cola & orig){
	
		pila = orig.GetCola();
		num = orig.GetNum();
	}

	// Al llamar a este destructor ya esta llamando al destructor de cola.

	Pila_max_Cola::~Pila_max_Cola() {
	}

	Pila_max_Cola & Pila_max_Cola::operator= (const Pila_max_Cola& orig) {

		pila = orig.GetCola();
		num = orig.GetNum();
	}
	const Cola<elemento>& Pila_max_Cola::GetCola() const
	{
		return pila;
	}

	Cola<elemento> & Pila_max_Cola::GetCola()
	{
		return pila;
	}

	const int Pila_max_Cola::GetNum() const
	{
		return num;
	}

	int Pila_max_Cola::GetNum()
	{
		return num;
	}

	bool Pila_max_Cola::Vacia() 
	{

		if (num == 0) {
			return true;
		}

		else {
			return false;
		}

	}

	const elemento & Pila_max_Cola::Tope() const {
		
		return pila.frente();
	}

	elemento& Pila_max_Cola::Tope(){
		
		return pila.frente();
	}

	void Pila_max_Cola::poner(const elemento & elem){

		if (num == 0)
			pila.poner(elem);
			
		else {                      

			Cola<elemento> pila_aux;
			pila_aux.poner(elem);

			for (int n = 0; n < num; n++)
			{
					
					pila_aux.poner(pila.frente());
					pila.quitar();
			}
			
		}


		num++;    
	}

	void Pila_max_Cola::quitar(){

		
	}