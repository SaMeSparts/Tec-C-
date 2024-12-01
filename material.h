#include <iostream>
#include <vector>
using namespace std;
#ifndef MATERIAL.H
#define MATERIAL.H

class Material
{
protected:
    string nombre_material;
    float precio;
    float cantidad;

public:
    Material(){
        nombre_material="Desconocido";
        precio=0;
        cantidad=0;
    }
    Material(string nombre_material_,float precio_){
        nombre_material=nombre_material_;
        precio=precio_;
        
    }
    string get_material(){
        return nombre_material;
    }
    float get_precio(){
        return precio;
    }
    float get_cantidad(){
        return cantidad;
    }
    void set_material(string nombre_material_){
        nombre_material=nombre_material_;

    }
    void set_precio(float precio_){
        precio=precio_;
    }
    void aumenta(float aum){
        cantidad += aum;
    }
    float precio_ffinal(){
        float precio_final=cantidad*precio;
        return precio_final;
    }
    virtual void imprime_datos(){
        cout << nombre_material << endl;
    }
    
    

};


#endif MATERIAL.H
