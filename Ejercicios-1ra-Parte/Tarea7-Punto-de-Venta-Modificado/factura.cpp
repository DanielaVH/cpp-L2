#include <iostream>


using namespace std;

double subtotal;
double total;
double impuesto;

string listaProductos;

void agregarProducto(string descripcion, int cantidad, double precio)
{
    listaProductos = listaProductos + descripcion + '\n';
    subtotal = subtotal + (cantidad * precio);
    impuesto = subtotal * 0.15;
    total = subtotal + impuesto;
}

void imprimirFactura()
{
    system("cls");
    cout << "*******" << endl;
    cout << "FACTURA" << endl;
    cout << "*******" << endl;
    cout << endl;


    cout << "Productos: " << endl;
    cout << listaProductos;
    
    cout << endl;
    cout << "Subtotal: " << subtotal;
    cout << endl;
    cout << endl;
    cout << "Impuesto: " << impuesto;
    cout << endl;
    cout << endl;
    cout << "Total a Pagar: " << total;
    cout << endl;
    cout << endl;
    system("pause");

}           