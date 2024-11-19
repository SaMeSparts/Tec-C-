#include <iostream>
#include "madera.h"
using namespace std;
#ifndef MADERA.H


int main()
{
    Material imprime;
    imprime.imprimir_lista();
    int a;
    cout << "¿Que material quiere?\n(1:Madera, 2:Piedra)\n ";
    cin >> a;
    if(a==1){
        Material opcion;
        Clasificacion_Madera tipo;
        opcion.set_material("Madera");
        int tipo_madera;
        cout << "¿Que tipo de madera quiere? (1: Blanda, 2: Dura)\n";
        cin >> tipo_madera;

        if (tipo_madera==1){
            tipo.set_clasificacion("Blanda");
            tipo.imprimir_lista_madera_blanda();
            int madera_mat;
            cout << "¿que madera quiere?\n";
            cin >> madera_mat; 
            if (madera_mat==1)
            {
                tipo.set_madera("Pino");
                opcion.set_tipo(tipo);
                int cantidad_madera;
                cout << "¿Cuanta madera quiere?\n";
                cin >> cantidad_madera;
                opcion.set_precio(400);
                opcion.aumenta(cantidad_madera);
                opcion.imprime_datos_madera();
            }
            else if (madera_mat==2)
            {
                tipo.set_madera("Cedro");
                opcion.set_tipo(tipo);
                int cantidad_madera;
                cout << "¿Cuanta madera quiere?\n";
                cin >> cantidad_madera;
                opcion.set_precio(400);
                opcion.aumenta(cantidad_madera);
                opcion.imprime_datos_madera();
            }
            
        }
        else if (tipo_madera==2)
        {
            tipo.set_clasificacion("Dura");
            tipo.imprimir_lista_madera_blanda();
            int madera_mat;
            cout << "¿que madera quiere?\n";
            cin >> madera_mat; 
            if (madera_mat==1)
            {
                tipo.set_madera("Roble");
                opcion.set_tipo(tipo);
                int cantidad_madera;
                cout << "¿Cuanta madera quiere?\n";
                cin >> cantidad_madera;
                opcion.set_precio(400);
                opcion.aumenta(cantidad_madera);
                opcion.imprime_datos_madera();
            }
            else if (madera_mat==2)
            {
                tipo.set_madera("Cerezo");
                opcion.set_tipo(tipo);
                int cantidad_madera;
                cout << "¿Cuanta madera quiere?\n";
                cin >> cantidad_madera;
                opcion.set_precio(400);
                opcion.aumenta(cantidad_madera);
                opcion.imprime_datos_madera();
            }
        }
        
        
           
    }
    else if (a==2)
    {
        Material opcion;
        Clasificacion_Piedra textura;
        opcion.set_material("Piedra");
        int tipo_piedra;
        cout << "¿Que tipo de Piedra quiere? (1: Ignea, 2: Sedimentaria)\n";
        cin >> tipo_piedra;

        if (tipo_piedra==1){
            textura.set_textura("Ignea");
            textura.imprimir_lista_piedra_ignea();
            int piedra_tex;
            cout << "¿Que piedra quiere?\n";
            cin >> piedra_tex; 
            if (piedra_tex==1)
            {
                textura.set_piedra("Granito");
                opcion.set_textura(textura);
                int cantidad_piedra;
                cout << "¿Cuanta piedra quiere?\n";
                cin >> cantidad_piedra;
                opcion.set_precio(50);
                opcion.aumenta(cantidad_piedra);
                opcion.imprime_datos_piedra();
            }
            else if (piedra_tex==2)
            {
                textura.set_piedra("Basalto");
                opcion.set_textura(textura);
                int cantidad_piedra;
                cout << "¿Cuanta piedra quiere?\n";
                cin >> cantidad_piedra;
                opcion.set_precio(50);
                opcion.aumenta(cantidad_piedra);
                opcion.imprime_datos_piedra();
            }
            
        }
        else if (tipo_piedra==2)
        {
            textura.set_textura("Sedimentaria");
            textura.imprimir_lista_piedra_sedimentaria();
            int piedra_tex;
            cout << "¿que piedra quiere?\n";
            cin >> piedra_tex; 
            if (piedra_tex==1)
            {
                textura.set_piedra("Arenisca");
                opcion.set_textura(textura);
                int cantidad_piedra;
                cout << "¿Cuanta piedra quiere?\n";
                cin >> cantidad_piedra;
                opcion.set_precio(50);
                opcion.aumenta(cantidad_piedra);
                opcion.imprime_datos_madera();
            }
            else if (piedra_tex==2)
            {
                textura.set_piedra("Caliza");
                opcion.set_textura(textura);
                int cantidad_piedra;
                cout << "¿Cuanta madera quiere?\n";
                cin >> cantidad_piedra;
                opcion.set_precio(50);
                opcion.aumenta(cantidad_piedra);
                opcion.imprime_datos_madera();
            }
        }

    }
    
    
}

#endif MADERA.H