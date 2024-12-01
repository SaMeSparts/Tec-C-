#include <iostream>
using namespace std;
#ifndef PAGO.H

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

#endif PAGO.H
