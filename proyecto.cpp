#include <iostream>
#include "material.h"
#include "pago.h"
#include "lista.h"
using namespace std;
#define LISTA_MATERIAL.H
#define MATERIAL.H
#define PAGO.H


int main()
{
    int con;
    cout << "Cuenta 1: Cliente, 2. Admin:\n";
    cin >> con;
    if(con==1){

        lista_material listas;
        Pago pagar;
        int p;
        cout << "Cuanto dinero quiere agregar a su saldo:\n";
        cin >> p;
        pagar.añadir_saldo(p);
        cout << "Se añadio: $" << p << endl;
        listas.imprimir_material();
        int a;
        cout << "¿Que material quiere?\n";
        cin >> a;
        if(a==1){
            Material opcion;
            Madera tipo("Desconocido", "Desconocido", "Desconocido", 400);
            lista_material listas;
            tipo.set_material("Madera");
            listas.imprimir_maderas();
            int tipo_madera;
            cout << "¿Que tipo de madera quiere?\n";
            cin >> tipo_madera;

            if (tipo_madera==1){
                tipo.set_clasificacion("Blanda");
                listas.imprimir_madera_blanda();
                int madera_mat;
                cout << "¿Que madera quiere?\n";
                cin >> madera_mat; 
                if (madera_mat==1)
                {
                    tipo.set_madera("Pino");
                    int cantidad_madera;
                    cout << "¿Cuanta madera quiere?\n";
                    cin >> cantidad_madera;
                    opcion.set_precio(400);
                    tipo.aumenta(cantidad_madera);
                    tipo.imprime_datos();
                    pagar.set_precio_pagar(tipo.precio_ffinal());
                    cout << "Se pagaron: $" << tipo.precio_ffinal() << ", su saldo es de: $" << pagar.pagar_precio() << endl; 
                    cout << "---------------" << endl;
                }
                else if (madera_mat==2)
                {
                    tipo.set_madera("Cedro");
                    int cantidad_madera;
                    cout << "¿Cuanta madera quiere?\n";
                    cin >> cantidad_madera;
                    opcion.set_precio(400);
                    tipo.aumenta(cantidad_madera);
                    tipo.imprime_datos();
                    pagar.set_precio_pagar(tipo.precio_ffinal());
                    cout << "Se pagaron: $" << tipo.precio_ffinal() << ", su saldo es de: $" << pagar.pagar_precio() << endl; 
                    cout << "---------------" << endl;
                }
                
            }
            else if (tipo_madera==2)
            {
                tipo.set_clasificacion("Dura");
                listas.imprimir_madera_dura();
                int madera_mat;
                cout << "¿Que madera quiere?\n";
                cin >> madera_mat; 
                if (madera_mat==1)
                {
                    tipo.set_madera("Roble");
                    int cantidad_madera;
                    cout << "¿Cuanta madera quiere?\n";
                    cin >> cantidad_madera;
                    opcion.set_precio(400);
                    tipo.aumenta(cantidad_madera);
                    tipo.imprime_datos();
                    pagar.set_precio_pagar(tipo.precio_ffinal());
                    cout << "Se pagaron: $" << tipo.precio_ffinal() << ", su saldo es de: $" << pagar.pagar_precio() << endl; 
                    cout << "---------------" << endl;
                }
                else if (madera_mat==2)
                {
                    tipo.set_madera("Cerezo");
                    int cantidad_madera;
                    cout << "¿Cuanta madera quiere?\n";
                    cin >> cantidad_madera;
                    opcion.set_precio(400);
                    tipo.aumenta(cantidad_madera);
                    tipo.imprime_datos();
                    pagar.set_precio_pagar(tipo.precio_ffinal());
                    cout << "Se pagaron: $" << tipo.precio_ffinal() << ", su saldo es de: $" << pagar.pagar_precio() << endl; 
                    cout << "---------------" << endl;
                }
            }
            
            
            
        }
        else if (a==2)
        {
            Material opcion;
            Piedra textura("Desconocido", "Desconocido", "Desconocido", 50);
            lista_material listas;
            textura.set_material("Piedra");
            listas.imprimir_piedras();
            int tipo_piedra;
            cout << "¿Que textura de Piedra quiere?\n";
            cin >> tipo_piedra;

            if (tipo_piedra==1){
                textura.set_textura("Ignea");
                listas.imprimir_piedra_ignea();
                int piedra_tex;
                cout << "¿Que piedra quiere?\n";
                cin >> piedra_tex; 
                if (piedra_tex==1)
                {
                    textura.set_piedra("Granito");
                    int cantidad_piedra;
                    cout << "¿Cuanta piedra quiere?\n";
                    cin >> cantidad_piedra;
                    opcion.set_precio(50);
                    textura.aumenta(cantidad_piedra);
                    textura.imprime_datos();
                    pagar.set_precio_pagar(textura.precio_ffinal());
                    cout << "Se pagaron: $" << textura.precio_ffinal() << ", su saldo es de: $" << pagar.pagar_precio() << endl;  
                    cout << "---------------" << endl;
                }
                else if (piedra_tex==2)
                {
                    textura.set_piedra("Basalto");
                    int cantidad_piedra;
                    cout << "¿Cuanta piedra quiere?\n";
                    cin >> cantidad_piedra;
                    opcion.set_precio(50);
                    textura.aumenta(cantidad_piedra);
                    textura.imprime_datos();
                    pagar.set_precio_pagar(textura.precio_ffinal());
                    cout << "Se pagaron: $" << textura.precio_ffinal() << ", su saldo es de: $" << pagar.pagar_precio() << endl; 
                    cout << "---------------" << endl;
                }
                
            }
            else if (tipo_piedra==2)
            {
                textura.set_textura("Sedimentaria");
                listas.imprimir_piedra_sedimentaria();
                int piedra_tex;
                cout << "¿que piedra quiere?\n";
                cin >> piedra_tex; 
                if (piedra_tex==1)
                {
                    textura.set_piedra("Arenisca");
                    int cantidad_piedra;
                    cout << "¿Cuanta piedra quiere?\n";
                    cin >> cantidad_piedra;
                    opcion.set_precio(50);
                    textura.aumenta(cantidad_piedra);
                    textura.imprime_datos();
                    pagar.set_precio_pagar(textura.precio_ffinal());
                    cout << "Se pagaron: $" << textura.precio_ffinal() << ", su saldo es de: $" << pagar.pagar_precio() << endl; 
                    cout << "---------------" << endl;
                }
                else if (piedra_tex==2)
                {
                    textura.set_piedra("Caliza");
                    int cantidad_piedra;
                    cout << "¿Cuanta piedra quiere?\n";
                    cin >> cantidad_piedra;
                    opcion.set_precio(50);
                    textura.aumenta(cantidad_piedra);
                    textura.imprime_datos();
                    pagar.set_precio_pagar(textura.precio_ffinal());
                    cout << "Se pagaron: $" << textura.precio_ffinal() << ", su saldo es de: $" << pagar.pagar_precio() << endl; 
                    cout << "---------------" << endl;
                }
            }
        }
        
    }
    else if(con==2)
    {   
        lista_material listas;
        float desicion;
        cout << "¿que material quiere?";
        string an;
        cout << "escribe el nombre:\n";
        cin >> an;
        Madera maderas_1=Madera(an, "Blanda","Madera",400);
        listas.agregar_madera(maderas_1);        
        
    }
    
    
  
}   