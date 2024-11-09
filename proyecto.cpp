#include <iostream>
#include "madera.h"
using namespace std;
#ifndef MADERA.H


int main()
{
    Madera uno;
    uno.aumenta(1);
    uno.imprime_datos();
    Madera dos;
    dos.aumenta(2);
    dos.imprime_datos();
    Madera tres;
    tres.aumenta(3);
    tres.imprime_datos();
    Madera cuatro;
    cuatro.aumenta(4);
    cuatro.imprime_datos();
    
    Piedra unos;
    unos.aumenta(1);
    unos.imprime_datos();
    Piedra doss;
    doss.aumenta(2);
    doss.imprime_datos();
    Piedra tress;
    tress.aumenta(3);
    tress.imprime_datos();
    Piedra cuatros;
    cuatros.aumenta(4);
    cuatros.imprime_datos();

    Ladrillo unoss;
    unoss.aumenta(1);
    unoss.imprime_datos();
    Ladrillo dosss;
    dosss.aumenta(2);
    dosss.imprime_datos();
    Ladrillo tresss;
    tresss.aumenta(3);
    tresss.imprime_datos();
    Ladrillo cuatrosss;
    cuatrosss.aumenta(4);
    cuatrosss.imprime_datos();
    return 0;
}

#endif MADERA.H