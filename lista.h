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
#endif LISTA_MATERIAL.H