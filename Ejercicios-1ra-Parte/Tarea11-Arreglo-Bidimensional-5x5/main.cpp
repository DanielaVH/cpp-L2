#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int filas = 5;
    int columnas = 5;

     int numerosRandom[filas][columnas] = 
     {
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
     };

    int sumar = 0;
    int x = 0;

    srand(time(NULL));
    for (int i = 0; i < filas; i++)
    {
       for (int j = 0; j < columnas; j++)
       {    
            numerosRandom[i][j] = rand() % 100 + 1;
            cout << " " << numerosRandom[i][j]   << "  " << " " ; 
            sumar = sumar + numerosRandom[i][j];
       }
       cout << endl;
    }

    cout << endl;
    cout << "La suma total de la matriz es: " << sumar << endl;


    
    return 0;
}

