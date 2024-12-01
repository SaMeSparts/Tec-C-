#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

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
        cout << "Nombre: " << get_material() << endl;
        cout << "Tipo: " << get_textura() << endl;
        cout << "Piedra: " << get_piedra() << endl;
        cout << "Precio: " << get_precio() << endl;
        cout << "Cantidad: " << get_cantidad() << endl;
        cout << "---------------" << endl;
        cout << "Precio Final: " << precio_ffinal() << endl;
        cout << "---------------" << endl;
    }
    
};

class lista_material
{
private:
    vector<Madera> maderas={Madera("Pino","Blanda","Madera",400),Madera("Cedro","Blanda","Madera",400),Madera("Roble","Dura","Madera",400),Madera("Cerezo","Dura","Madera",400)};
    vector<Piedra> piedras={Piedra("Basalto","Ignea","Piedra",50),Piedra("Granito","Ignea","Piedra",50),Piedra("Arenisca","Sedimentaria","Piedra",50),Piedra("Calisa","Sedimentaria","Piedra",50)};
    vector<Material> materiales={Material("Madera",400),Material("Piedra",50)};
public:
    lista_material(){
    }

    void agregar_madera(Madera nombre){
        maderas.push_back(nombre);

    }

    bool eliminar_madera(string nombre){
        bool valid;
        valid=0;
        Madera maderitas;
        for (size_t i = 0; i < maderas.size(); i++){
            maderitas=maderas[i];
            if (maderitas.get_madera()== nombre)
            {
                maderas.erase(maderas.begin()+(i));
                break;
            }
        }   
        return valid;
    }

    void agregar_piedra(Piedra nombre){
        piedras.push_back(nombre);
        
    }

    bool eliminar_piedra(string nombre){
        bool valid;
        valid=0;
        Piedra piedritas;
        for (size_t i = 0; i < piedras.size(); i++){
            piedritas=piedras[i];
            if (piedritas.get_piedra()== nombre)
            {
                piedras.erase(piedras.begin()+(i));
                break;
            }
        }
        return valid;
    }
    void imprimir_material(){
        Material material;
        cout << "Lista de Clasificacion:" << endl;
        for (size_t i = 0; i < materiales.size(); i++)
        {
            material=materiales[i];
            if (material.get_material()=="Madera"|| material.get_material() =="Piedra")
            {
                cout << "" << material.get_material() << " " << i + 1 << endl;
            }
        }
        
        
    }
    void imprimir_maderas(){
        Madera maderitas_1;
        Madera maderitas_2;
        cout << "Lista de Clasificacion:" << endl;
        for (size_t i = 0; i < maderas.size(); i++)
        {
            maderitas_1=maderas[0];
            maderitas_2=maderas[2];
            if (maderitas_1.get_clasificacion()=="Blanda"|| maderitas_2.get_clasificacion() =="Dura")
            {
                cout << "" << maderitas_1.get_clasificacion() << " 1" << endl;
                cout << "" << maderitas_2.get_clasificacion() << " 2" << endl;
                break;
            }
        }
        
        
    }
    void imprimir_madera_blanda(){
        Madera maderitas;
        cout << "Lista de maderas:" << endl;
        for (size_t i = 0; i < maderas.size(); i++)
        {
            maderitas=maderas[i];
            if (maderitas.get_madera()=="Pino"|| maderitas.get_madera() =="Cedro")
            {
                cout << "" << maderitas.get_madera() << " " << i + 1 << endl;
            }
            
        }
        
        
    }
    void imprimir_madera_dura(){
        Madera maderitas;
        cout << "Lista de maderas:" << endl;
        for (size_t i = 0; i < maderas.size(); i++)
        {
            maderitas=maderas[i];
            if (maderitas.get_madera()=="Roble"|| maderitas.get_madera() =="Cerezo")
            {
                cout << "" << maderitas.get_madera() << " " << i - 1 << endl;
            }
        }
        
        
    }
    void imprimir_piedras(){
        Piedra piedritas_1;
        Piedra piedritas_2;
        cout << "Lista de Tipos:" << endl;
        for (size_t i = 0; i < piedras.size(); i++)
        {
            piedritas_1=piedras[0];
            piedritas_2=piedras[2];
            if (piedritas_1.get_textura()=="Ignea"|| piedritas_2.get_textura() =="Sedimentaria")
            {
                cout << "" << piedritas_1.get_textura() << " 1" << endl;
                cout << "" << piedritas_2.get_textura() << " 2" << endl;
                break;
            }
        }
        
        
    }
    void imprimir_piedra_ignea(){
        Piedra piedritas;
        cout << "Lista de piedras:" << endl;
        for (size_t i = 0; i < piedras.size(); i++)
        {
            piedritas=piedras[i];
            if (piedritas.get_piedra()=="Basalto"|| piedritas.get_piedra() =="Granito")
            {
                cout << "" << piedritas.get_piedra() << " " << i + 1 << endl;
            }
        }
        
        
    }
    void imprimir_piedra_sedimentaria(){
        Piedra piedritas;
        cout << "Lista de piedras:" << endl;
        for (size_t i = 0; i < piedras.size(); i++)
        {
            piedritas=piedras[i];
            if (piedritas.get_piedra()=="Arenisca"|| piedritas.get_piedra() =="Calisa")
            {
                cout << "" << piedritas.get_piedra() << " " << i - 1 << endl;
            }
        }
        
        
    }
    
    
};

class Pago
{
private:
    float saldo;
    float precio_pagar;
    float pago_final;
public:
    Pago(){
        saldo=0;
        precio_pagar=0;
        pago_final=0;
    }
    Pago(float saldo_,float precio_pagar_){
        saldo=saldo_;
        precio_pagar=precio_pagar_;
    }
    float get_saldo(){
        return saldo;
    }
    float get_precio_pagar(){
        return precio_pagar;
    }
    float get_pago_final(){
        return pago_final;
    }
    void set_saldo(float saldo_){
        saldo=saldo_;
    }
    void set_precio_pagar(float precio_pagar_){
        precio_pagar=precio_pagar_;
    }
    void añadir_saldo(float saldo_){
        saldo=saldo_;
    }
    float pagar_precio(){
        pago_final= saldo - precio_pagar;
        return pago_final;
    }
};

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
