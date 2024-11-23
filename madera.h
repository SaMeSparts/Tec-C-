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



