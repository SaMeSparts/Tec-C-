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
    vector<Madera> maderas={"Blanda","Dura"};
    vector<Piedra> piedras={"Sedimentaria","Ignea"};
    vector<Piedra> piedra_ignea={"Granito", "Basalto"};
    vector<Piedra> piedra_sedimentaria={"Arenisca", "Calisa"};
    vector<Madera> madera_blanda={"Pino","Cedro"};
    vector<Madera> madera_dura={"Roble","Cerezo"};
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

    void agregar_madera_blanda(Madera nombre){
        madera_blanda.push_back(nombre);

    }
    bool eliminar_madera_blanda(string nombre){
        bool valid;
        valid=0;
        Madera maderitas;
        for (size_t i = 0; i < madera_blanda.size(); i++){
            maderitas=madera_blanda[i];
            if (maderitas.get_madera()== nombre)
            {
                madera_blanda.erase(madera_blanda.begin()+(i));
                break;
            }            
        }    
        return valid;   
    }

    void agregar_madera_dura(Madera nombre){
        madera_dura.push_back(nombre);

    }
    bool eliminar_madera_dura(string nombre){
        bool valid;
        valid=0;
        Madera maderitas;
        for (size_t i = 0; i < madera_dura.size(); i++){
            maderitas=madera_dura[i];
        
            if (maderitas.get_madera()== nombre)
            {
                madera_dura.erase(madera_dura.begin()+(i));
                break;
            }                     
        }    
        return valid;   
    }

    void agregar_piedra_ignea(Piedra nombre){
        piedra_ignea.push_back(nombre);
        
    }
    bool eliminar_ignea(string nombre){
        bool valid;
        valid=0;
        Piedra piedritas;
        for (size_t i = 0; i < piedra_ignea.size(); i++){
            piedritas=piedra_ignea[i];
            if (piedritas.get_piedra()== nombre)
            {
                piedra_ignea.erase(piedra_ignea.begin()+(i));
                break;
            }
        }       
        return valid; 
    }

    void agregar_piedra_sedimentaria(Piedra nombre){
        piedra_sedimentaria.push_back(nombre);
        
    }

    bool eliminar_piedra_sedimentaria(string nombre){
        bool valid;
        valid=0;
        Piedra piedritas;
        for (size_t i = 0; i < piedra_sedimentaria.size(); i++){
            piedritas=piedra_sedimentaria[i];
            if (piedritas.get_piedra()== nombre)
            {
                piedra_sedimentaria.erase(piedra_sedimentaria.begin()+(i));
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
        for (size_t i = 0; i < madera_blanda.size(); i++)
        {
            maderitas=madera_blanda[i];
            cout << "" << maderitas.get_madera() << endl;
        }
        
        
    }
    void imprimir_madera_dura(){
        Madera maderitas;
        cout << "Lista de maderas:" << endl;
        for (size_t i = 0; i < madera_dura.size(); i++)
        {
            maderitas=madera_dura[i];
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
        for (size_t i = 0; i < piedra_ignea.size(); i++)
        {
            piedritas=piedra_ignea[i];
            cout << "" << piedritas.get_piedra() << endl;
        }
        
        
    }
    void imprimir_piedra_sedimentaria(){
        Piedra piedritas;
        cout << "Lista de piedras:" << endl;
        for (size_t i = 0; i < piedra_sedimentaria.size(); i++)
        {
            piedritas=piedra_sedimentaria[i];
            cout << "" << piedritas.get_piedra() << endl;
        }
        
        
    }
    
    
};

#endif LISTA_MATERIAL.H