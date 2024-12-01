#include <iostream>
#include <vector>
#include <algorithm>
#include "madera.h"
#include "piedra.h"
using namespace std;

#ifndef LISTA_MATERIAL.H
#define LISTA_MATERIAL.H
#define MADERA.H
#define PIEDRA.H

class lista_material
{
private:
    vector<Madera> maderas={Madera("Pino","Blanda","Madera",400),Madera("Cedro","Blanda","Madera",400),Madera("Roble","Dura","Madera",400),Madera("Cerezo","Dura","Madera",400)};
    vector<Piedra> piedras={Piedra("Basalto","Ignea","Piedra",50),Piedra("Granito","Ignea","Piedra",50),Piedra("Arenisca","Sedimentaria","Piedra",50),Piedra("Calisa","Sedimentaria","Piedra",50)};

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
    void imprimir_maderas(){
        Madera maderitas;
        cout << "Lista de maderas:" << endl;
        for (size_t i = 0; i < maderas.size(); i++)
        {
            maderitas=maderas[i];
            cout << "" << maderitas.get_madera() << endl;
        }
        
        
    }
    void imprimir_madera_blanda(){
        Madera maderitas;
        cout << "Lista de maderas:" << endl;
        for (size_t i = 0; i < maderas.size(); i++)
        {
            maderitas=maderas[i];
            cout << "" << maderitas.get_madera() << endl;
        }
        
        
    }
    void imprimir_madera_dura(){
        Madera maderitas;
        cout << "Lista de maderas:" << endl;
        for (size_t i = 0; i < maderas.size(); i++)
        {
            maderitas=maderas[i];
            cout << "" << maderitas.get_madera() << endl;
        }
        
        
    }
    void imprimir_piedras(){
        Piedra piedritas;
        cout << "Lista de piedras:" << endl;
        for (size_t i = 0; i < piedras.size(); i++)
        {
            piedritas=piedras[i];
            cout << "" << piedritas.get_piedra() << endl;
        }
        
        
    }
    void imprimir_piedra_ignea(){
        Piedra piedritas;
        cout << "Lista de piedras:" << endl;
        for (size_t i = 0; i < piedras.size(); i++)
        {
            piedritas=piedras[i];
            cout << "" << piedritas.get_piedra() << endl;
        }
        
        
    }
    void imprimir_piedra_sedimentaria(){
        Piedra piedritas;
        cout << "Lista de piedras:" << endl;
        for (size_t i = 0; i < piedras.size(); i++)
        {
            piedritas=piedras[i];
            cout << "" << piedritas.get_piedra() << endl;
        }
        
        
    }
    
    
};
#endif LISTA_MATERIAL.H