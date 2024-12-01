#include <iostream>
#include <vector>
#include <algorithm>
#include "material.h"
using namespace std;
#ifndef PIEDRA.H
#define MATERIAL.H

class Piedra: public Material
{
private:
    string textura;
    string piedra;


public:
    Piedra(): Material(){
        textura="Desconocida";
        piedra="Desconocido";

    }

    Piedra(string piedra_, string textura_,string nombre_material_,float precio_): Material(nombre_material_,precio_){
        piedra=piedra_;
        textura=textura_;
        
    }
    string get_textura(){
        return textura;
    }
    string get_piedra(){
        return piedra;
    }
    void set_textura(string textura_){
        textura=textura_;
    }
    void set_piedra(string piedra_){
        piedra=piedra_;
    }
    void imprime_datos(){
        cout << "---------------" << endl;
        cout << "Nombre: " << nombre_material << endl;
        cout << "Tipo: " << get_textura() << endl;
        cout << "Piedra: " << get_piedra() << endl;
        cout << "Precio: " << precio << endl;
        cout << "Cantidad: " << cantidad << endl;
        cout << "---------------" << endl;
        cout << "Precio Final: " << precio_ffinal() << endl;
        cout << "---------------" << endl;
    }
    
};

#endif PIEDRA.H