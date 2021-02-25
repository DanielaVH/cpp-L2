#include <iostream>
#include <stdlib.h> //srand, rand
#include <time.h>

using namespace std;


int main(int argc, char const *argv[])
{
    int PrimerDado = 0;
    int SegundoDado = 0;
    int TotalDados =0;

    srand(time(NULL));

    system("cls");
     // genera un numero entre 6 y 10
    PrimerDado = rand() % 6 + 1;
    cout << "Primer dado: " <<  PrimerDado << endl;   
    SegundoDado = rand() % 6 + 1;
    cout << "Segundo dado: " <<  SegundoDado << endl;   
    cout << endl;
   
   TotalDados = PrimerDado + SegundoDado;
   cout << "El total de los dos dados es: " << TotalDados; 
    
    return 0;
}