#include <iostream>
using namespace std;

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