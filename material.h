#include <iostream>
#include <vector>
using namespace std;
#include "madera.h"
#include "piedra.h"
#ifndef MADERA.H
#ifndef PIEDRA.H


class Material
{
private:
    string lista_material;
    string nombre_material;
    float precio;
    float cantidad;
    float precio_final;
    Clasificacion_Madera tipos;
    Clasificacion_Piedra textura_piedra;

public:
    Material(){
        lista_material="1. Madera\n2. Piedra\n";
        nombre_material="Desconocido";
        precio=0;
        cantidad=0;
        precio_final=0;
    }
    Material(string nombre_material_,float precio_){
        nombre_material=nombre_material_;
        precio=precio_;
        
    }
    string get_material(){
        return nombre_material;
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
        precio_final=cantidad*precio;
        return precio_final;
    }
    void imprimir_lista(){
        cout << nombre_material << endl;
    }
    void set_tipo(const Clasificacion_Madera &tipo_) {
        tipos = tipo_;
    }
    void set_textura(const Clasificacion_Piedra &texturas_) {
        textura_piedra = texturas_;
    }
    void imprime_datos_madera(){
        cout << "---------------" << endl;
        cout << "Nombre: " << nombre_material << endl;
        cout << "Tipo: " << tipos.get_clasificacion() << endl;
        cout << "Madera: " << tipos.get_madera() << endl;
        cout << "Precio: " << precio << endl;
        cout << "Cantidad: " << cantidad << endl;
        cout << "---------------" << endl;
        cout << "Precio Final: " << precio_ffinal() << endl;
        cout << "---------------" << endl;
    }
    void imprime_datos_piedra(){
        cout << "---------------" << endl;
        cout << "Nombre: " << nombre_material << endl;
        cout << "Tipo: " << textura_piedra.get_textura() << endl;
        cout << "Piedra: " << textura_piedra.get_piedra() << endl;
        cout << "Precio: " << precio << endl;
        cout << "Cantidad: " << cantidad << endl;
        cout << "---------------" << endl;
        cout << "Precio Final: " << precio_ffinal() << endl;
        cout << "---------------" << endl;
    }

};

class lista_material
{
private:
    vector<Clasificacion_Madera> maderas;
    vector<Clasificacion_Piedra> piedras;
public:
    lista_material(){


    }


    vector<Clasificacion_Madera> get_maderas(){
        return maderas;
    }
    vector<Clasificacion_Piedra> get_piedras(){
        return piedras;
    }


    Clasificacion_Madera agregar_madera(string madera, string clasificacion){
        Clasificacion_Madera nuevo= Clasificacion_Madera(madera,clasificacion);
        maderas.push_back(nuevo);
        return nuevo;
    }
    void eliminar_madera(int indice){
        maderas.erase(maderas.begin() + indice);
    }
    Clasificacion_Piedra agregar_piedra(string piedra, string textura){
        Clasificacion_Piedra nuevo= Clasificacion_Piedra(piedra,textura);
        piedras.push_back(nuevo);
        return nuevo;
    }
    void eliminar_piedra(int indice){
        piedras.erase(piedras.begin() + indice);
    }
};

#endif MADERA.H
#endif PIEDRA.H