#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //Datos de entrada
    double subtotal= 0;
    double total=0;
    double impuesto= 0.15;
    int descuento=0;
    double CalculoDescuento=0;
    double CalculoImpuesto=0;
    char estaExenta;


    cout << "Ingrese el subtotal de la factura :";
    cin >> subtotal;

    cout << "Ingrese el descuento (0, 10, 15, 20)";
    cin >> descuento;

     cout << "Es factura exenta? escriba s o n: ";
    cin >> estaExenta;

cout<< endl;

//Proceso


if (estaExenta == 's' || estaExenta  == 'S') 
{
    CalculoDescuento= (subtotal*descuento)/100;
    CalculoImpuesto= 0;
    total= subtotal - CalculoDescuento  + CalculoImpuesto;
    cout<<"Total a pagar es:" << total;
} 
if(estaExenta == 'n' || estaExenta == 'N')
{
    CalculoDescuento= (subtotal*descuento)/100;
    CalculoImpuesto= (subtotal -CalculoDescuento) *0.15;
    total= subtotal - CalculoDescuento  + CalculoImpuesto;
    cout<<"Total a pagar es:" << total;
}


    return 0;
}