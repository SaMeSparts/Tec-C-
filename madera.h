#include <iostream>
#include <vector>
using namespace std;
#include "material.h"
#ifndef MADERA.H
#define MATERIAL.H
#define MADERA.H

class Madera: public Material {
private:
    string clasificacion;
    string madera;


public:
    Madera(): Material(){
        clasificacion="Desconocida";
        madera="Desconocido";
    }

    Madera(string madera_, string clasificacion_,string nombre_material_,float precio_):Material(nombre_material_,precio_){
        madera=madera_;
        clasificacion=clasificacion_;
        
    }
    string get_clasificacion(){
        return clasificacion;
    }
    string get_madera(){
        return madera;
    }
    void set_clasificacion(string clasificacion_){
        clasificacion=clasificacion_;
    }
    void set_madera(string madera_){
        madera=madera_;
    }
    
    void imprime_datos(){
        cout << "---------------" << endl;
        cout << "Nombre: " << get_material() << endl;
        cout << "Tipo: " << get_clasificacion() << endl;
        cout << "Madera: " << get_madera() << endl;
        cout << "Precio: " << get_precio() << endl;
        cout << "Cantidad: " << get_cantidad() << endl;
        cout << "---------------" << endl;
        cout << "Precio Final: " << precio_ffinal() << endl;
        cout << "---------------" << endl;
    }
    
    
};

#endif MADERA.H

