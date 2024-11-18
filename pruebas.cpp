#include <iostream>
using namespace std;


class Material
{
private:
    string lista_material;
    string nombre_material;
    float precio;
    float cantidad;
    float precio_final;

public:
    Material(){
        lista_material="1. Madera\n2. Piedra\n3. Ladrillo";
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
    void imprime_datos(){
        cout << "---------------" << endl;
        cout << "Nombre: " << nombre_material << endl;
        cout << "Precio: " << precio << endl;
        cout << "Cantidad: " << cantidad << endl;
        cout << "---------------" << endl;
        cout << "Precio Final: " << precio_ffinal() << endl;
        cout << "---------------" << endl;
    }

};

int main()
{
    Material imprime;
    imprime.imprimir_lista();
    int a;
    cout << "¿Que material quiere?\n(1:Madera, 2:Piedra, 3:Ladrillo)\n ";
    cin >> a;
    if(a==1){
        Material opcion;
        opcion.set_material("Madera");
        int cantidad_madera;
        cout << "¿Cuanta madera quiere?\n";
        cin >> cantidad_madera;
        opcion.set_precio(400);
        opcion.aumenta(cantidad_madera);
        opcion.imprime_datos();
    }
    else if (a==2)
    {
        Material opcion;
        opcion.set_material("Piedra");
        int cantidad_piedra;
        cout << "¿Cuanta piedra quiere?\n";
        cin >> cantidad_piedra;
        opcion.set_precio(50);
        opcion.aumenta(cantidad_piedra);
        opcion.imprime_datos();
    }
    else if (a==3)
    {
        Material opcion;
        opcion.set_material("Ladrillo");
        int cantidad_ladrillo;
        cout << "¿Cuanta piedra quiere?\n";
        cin >> cantidad_ladrillo;
        opcion.set_precio(0.30);
        opcion.aumenta(cantidad_ladrillo);
        opcion.imprime_datos();
    }
    
    
}