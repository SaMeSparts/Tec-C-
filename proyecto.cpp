#include <iostream>
#include "madera.h"
using namespace std;
#ifndef MADERA.H


int main()
{
    Material imprime;
    imprime.imprimir_lista();
    int a;
    cout << "¿Que material quiere?\n(1:Madera, 2:Piedra, 3:Ladrillo)";
    cin >> a;
    if(a==1){
        Madera opcion;
        int cantidad_madera;
        cout << "¿Cuanta madera quiere?";
        cin >> cantidad_madera;
        opcion.aumenta(cantidad_madera);
        opcion.imprime_datos();
    }
    else if (a==2)
    {
        Piedra opcion;
        int cantidad_piedra;
        cout << "¿Cuanta piedra quiere?";
        cin >> cantidad_piedra;
        opcion.aumenta(cantidad_piedra);
        opcion.imprime_datos();
    }
    else if (a==3)
    {
        Ladrillo opcion;
        int cantidad_ladrillo;
        cout << "¿Cuanta piedra quiere?";
        cin >> cantidad_ladrillo;
        opcion.aumenta(cantidad_ladrillo);
        opcion.imprime_datos();
    }
    
    
}

#endif MADERA.H