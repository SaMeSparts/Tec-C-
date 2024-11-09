#include <iostream>
using namespace std;


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
    
    
    void imprime_datos(){
        cout << "---------------" << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Precio: " << precio << endl;
        cout << "Cantidad: " << cantidad << endl;
        cout << "---------------" << endl;
        cout << "Precio Final: " << cantidad*precio << endl;
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
    
    
    void imprime_datos(){
        cout << "---------------" << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Precio: " << precio << endl;
        cout << "Cantidad: " << cantidad << endl;
        cout << "---------------" << endl;
        cout << "Precio Final: " << cantidad*precio << endl;
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
    
    
    void imprime_datos(){
        cout << "---------------" << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Precio: " << precio << endl;
        cout << "Cantidad: " << cantidad << endl;
        cout << "---------------" << endl;
        cout << "Precio Final: " << cantidad*precio << endl;
        cout << "---------------" << endl;
    }




};