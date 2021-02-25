#include <iostream>
#include "factura.h"

using namespace std;

void productos(int opcion)
{

system("cls");

int opcionProducto = 0;

switch (opcion)
{
case 1:
{    
   
        cout << "BEBIDAS CALIENTES" << endl;
        cout << "******************" << endl;
        cout << "1- Capuccino" << endl;
        cout << "2- Expresso" << endl;
        cout << "3- Cafe Latte" << endl;
        cout << endl;     
        
        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Capuccino - L 40.00", 1, 40);
            break;
        case 2:
            agregarProducto("1 Expresso - L 30.00", 1, 30);
            break;
        case 3:
            agregarProducto("1 Cafe Latte - L 40.00", 1, 40);
            break;
        default:
        {
            cout << "opcion no valida";
            return;
            break;
        }
        }

        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system("pause");
       
       break;   
}
case 2:
{
    cout << "BEBIDAS FRIAS" << endl;
    cout << "************" << endl;
    cout << "1- Granita de cafe" << endl;
    cout << "2- Mochaccino" << endl;
    cout << "3- Frapuchatta" << endl;
    cout << endl;     
        
        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Granita de cafe - L 30.00", 1, 30);
            break;
        case 2:
            agregarProducto("1 Expresso - L 60.00", 1, 60);
            break;
        case 3:
            agregarProducto("1  Frapuchatta - L 70.00", 1, 70);
            break;           
        default:
        {
            cout << "opcion no valida";
            return;
            break;
        }
        }

        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system("pause");

    break;   
}
case 3:
{
    cout << "REPOSTERIA" << endl;
    cout << "*********" << endl;
    cout << "1- Porcion-Pastel de Zanahoria" << endl;
    cout << "2- Galleta alfajor" << endl;
    cout << "3- Porcion-Pastel de Limon" << endl;
    cout << endl;     
        
        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Porcion-Pastel de Zanahoria - L 40.00", 1, 40);
            break;
        case 2:
            agregarProducto("1 Galleta alfajor - L 30.00", 1, 30);
            break;
        case 3:
            agregarProducto("1 Porcion-Pastel de limon - L 60.00", 1, 60);
            break;           
        default:
        {
            cout << "opcion no valida";
            return;
            break;
        }
        }

        cout << endl;
        cout << "Producto agregado" << endl << endl;
   
   
    system("pause");
   
    break;   
}


    default:
    break;
}
}