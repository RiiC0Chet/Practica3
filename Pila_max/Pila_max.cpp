#include <iostream>
#include "Pila_max_Cola.h"
#include "Pila_max_VD.h"

using namespace std;

int main() {

    cout << "Hello cuack \n";
    Pila_max_Cola<int> pila_c;
    Pila_max_Cola<int> pila_c_aux;

    Pila_max_VD<int> pila_vd;
    Pila_max_VD<int> pila_vd_aux;

    pila_c.poner(4);
    pila_c.poner(5);
    pila_c.poner(6);
    pila_c.poner(5);

    pila_c_aux = pila_c;

    for (int i = 0; i < pila_c.GetNum(); i++)
    {
        cout << pila_c_aux.Tope_ele() << " " << pila_c_aux.Tope_max() << endl;
        pila_c_aux.quitar();
    }

    cout << "/*******************************************************************/ \n";
    

    pila_vd.poner(4);
    pila_vd.poner(5);
    pila_vd.poner(4);
    pila_vd.poner(6);

    pila_vd_aux = pila_vd;

    for (int i = 0; i < pila_vd.size(); i++)
    {
        cout << pila_vd_aux.Tope_ele() << " " << pila_vd_aux.Tope_max()<<endl;
        pila_vd_aux.quitar();
    }

    return 0;

}

