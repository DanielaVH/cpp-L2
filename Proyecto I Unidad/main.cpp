#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{
    int opcion = 0;

    while(true) {
        system("cls");

        cout << "==============" << endl;
        cout << "MENU DE JUEGOS" << endl; 
        cout << "==============" << endl;        
        cout << endl;
        cout << "Seleccione un Juego: ";
        cout << endl;
        cout << "1 - StarShip" << endl;
        cout << "2 - Snake" << endl;
        cout << "0 - Salir"<< endl ;
        cout << endl;
        cout << "Ingrese un numero del menu para seleccionar un juego: ";
        cin >> opcion;
        cout << endl;

        switch (opcion)
        { 
        case 1: 
            starShip();            
            break;
        case 2:
            snake();
            break;
        default:
            break;
        }

        system("pause");
        cout << endl;

        if (opcion == 0) {
            break;
        }
    }

    //system("cls");

    // starShip();
    // snake();

    return 0;
}
