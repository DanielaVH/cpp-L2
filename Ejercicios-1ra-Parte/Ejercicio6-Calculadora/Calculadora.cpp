#include <iostream>

 using namespace std;

int main(int argc, char const *argv[])
{
//Datos de entrada
int a=0;
int b=0;
int Suma=0;
int Resta=0;
int Multiplicacion=0;
int Division=0;

cout <<"Ingrese el valor de a:" ;
cin >> a;

cout<< endl;

cout <<"Ingrese el valor de b:" ;
cin >> b;

cout<< endl;

//Proceso
Suma = a + b;
Resta= a-b;
Multiplicacion= a*b;
Division= a/b;


//Salida
cout << "La suma de a + b es:" <<Suma << endl;
cout << "La Resta de a - b es:" <<Resta << endl;
cout << "La Multiplicacion de a * b es:" <<Multiplicacion << endl;
cout << "La Division de a / b es:" <<Division << endl;

    return 0; 
}
