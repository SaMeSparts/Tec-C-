#include <iostream>
using namespace std;

class Clasificacion_Madera
{
private:
    string clasificacion;
    string lista_madera_blanda;
    string lista_madera_dura;
    string madera;


public:
    Clasificacion_Madera(){
        clasificacion="Desconocida";
        madera="Desconocido";
        lista_madera_blanda="1:Pino, 2:Cedro";
        lista_madera_dura="1:Roble, 2:Cerezo";

    }

    Clasificacion_Madera(string madera_, string clasificacion_){
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
    void imprimir_lista_madera_blanda(){
        cout << lista_madera_blanda << endl;
    }
    void imprimir_lista_madera_dura(){
        cout << lista_madera_dura << endl;
    }
    
};

class Clasificacion_Piedra
{
private:
    string textura;
    string lista_piedra_ignea;
    string lista_piedra_sedimentaria;
    string piedra;


public:
    Clasificacion_Piedra(){
        textura="Desconocida";
        piedra="Desconocido";
        lista_piedra_ignea="1:Granito, 2:Basalto";
        lista_piedra_sedimentaria="1:Arenisca, 2:Calisa";

    }

    Clasificacion_Piedra(string piedra_, string textura_){
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
    void imprimir_lista_piedra_ignea(){
        cout << lista_piedra_ignea << endl;
    }
    void imprimir_lista_piedra_sedimentaria(){
        cout << lista_piedra_sedimentaria << endl;
    }
    
};

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
        cout << "¿Que tipo de madera quiere? (1: Blanda, 2: Dura)";
        cin >> tipo_madera;

        if (tipo_madera==1){
            tipo.set_clasificacion("Blanda");
            tipo.imprimir_lista_madera_blanda();
            int madera_mat;
            cout << "¿que madera quiere?";
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
            cout << "¿que madera quiere?";
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
            cout << "¿que piedra quiere?";
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