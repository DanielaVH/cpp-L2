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


    cout << "Ingrese el subtotal de la factura :";
    cin >> subtotal;

    cout << "Ingrese el descuento (0, 10, 15, 20)";
    cin >> descuento;

//Proceso
CalculoDescuento= (subtotal*descuento)/100;
CalculoImpuesto= (subtotal -CalculoDescuento) *0.15;
total= subtotal - CalculoDescuento  + CalculoImpuesto;


//Salida
cout<< endl;
cout<<"Total a pagar es:" << total;

    return 0;
}

