#include <iostream>
using namespace std;

class Material
{
private:
    string nombre_material;

public:
    Material(){
        nombre_material="1. Madera\n2. Piedra\n3. Ladrillo";
    }
    Material(string nombre_material_){
        nombre_material=nombre_material_;
    }
    string get_material(){
        return nombre_material;
    }
    void set_material(string nombre_materia_){
        nombre_material=nombre_materia_;

    }
    void imprimir_lista(){
        cout << nombre_material << endl;
    }
};


class Madera {


private:
    string nombre;
    float precio;
    float cantidad;
    float precio_final;
public:
    Madera(){
        nombre="madera";
        precio=400;
        cantidad=0;
        precio_final=0;

    }
    void aumenta(float aum){
        cantidad += aum;
    }
    int precio_ffinal(){
        precio_final=cantidad*precio;
        return precio_final;
    }
    
    void imprime_datos(){
        cout << "---------------" << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Precio: " << precio << endl;
        cout << "Cantidad: " << cantidad << endl;
        cout << "---------------" << endl;
        cout << "Precio Final: " << precio_ffinal() << endl;
        cout << "---------------" << endl;
    }




};

class Piedra {


private:
    string nombre;
    float precio;
    float cantidad;
    float precio_final;
public:
    Piedra(){
        nombre="piedra";
        precio=50;
        cantidad=0;
        precio_final=0;

    }
    void aumenta(float aum){
        cantidad += aum;
    }
    int precio_ffinal(){
        precio_final=cantidad*precio;
        return precio_final;
    }
    
    
    void imprime_datos(){
        cout << "---------------" << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Precio: " << precio << endl;
        cout << "Cantidad: " << cantidad << endl;
        cout << "---------------" << endl;
        cout << "Precio Final: " << precio_ffinal() << endl;
        cout << "---------------" << endl;
    }




};

class Ladrillo {


private:
    string nombre;
    float precio;
    float cantidad;
    float precio_final;
public:
    Ladrillo(){
        nombre="Ladrillo";
        precio=0.30;
        cantidad=0;
        precio_final=0;

    }
    void aumenta(float aum){
        cantidad += aum;
    }
    int precio_ffinal(){
        precio_final=cantidad*precio;
        return precio_final;
    }
    
    void imprime_datos(){
        cout << "---------------" << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Precio: " << precio << endl;
        cout << "Cantidad: " << cantidad << endl;
        cout << "---------------" << endl;
        cout << "Precio Final: " << precio_ffinal() << endl;
        cout << "---------------" << endl;
    }




};