//
//
//template <class T>
//Pila_max_VD<T>::Pila_max_VD(const Pila_max_VD<T>& orig)
//{
//	pila = orig.GetVector();
//}
//
//template <class T>
//Pila_max_VD<T>::~Pila_max_VD(){
//}
//
//template<class T>
//Pila_max_VD<T>& Pila_max_VD<T>::operator=(const Pila_max_VD<T>& orig){
//	
//	pila = orig.GetCola();
//
//	return *this;
//}
//
//template <class T>
//const vector<T>& Pila_max_VD<T>::GetVector() const
//{
//	return pila;
//}
//
//template <class T>
//vector<T>& Pila_max_VD<T>::GetVector()
//{
//	return pila;
//}
//
//template<class T>
//bool Pila_max_VD<T>::Vacia()
//{
//	
//	if (pila.size() == 0) 
//		{
//			return true;
//		}
//
//		else 
//		{
//			return false;
//		}
//}
//
//
//template <class T>
//const T& Pila_max_VD<T>::Tope() const {
//
//	return pila.front();
//}
//
//template<class T>
//T& Pila_max_VD<T>::Tope(){
//
//	return pila.front();
//}
//
//template <class T>
//void Pila_max_VD<T>::poner(const T& elem){
//
//	if (pila. == 0)
//		pila.poner(elem);
//
//	else
//	{
//
//		Cola<elemento> pila_aux;
//		pila_aux.poner(elem);
//
//		for (int n = 0; n < num; n++)
//		{
//
//			pila_aux.poner(pila.frente());
//			pila.quitar();
//		}
//		pila = pila_aux;
//
//	}
//
//
//}
//
//template <class T>
//void Pila_max_VD<T>::quitar()
//{
//
//}