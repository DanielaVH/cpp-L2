#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int numeroSecreto= 7;
    int numero=0;

    cout<< "Ingrese un numero:" ;
    cin>> numero;

    cout<< endl;

    if (numero == 7) {
        cout<< "Adivinaste el numero secreto: " << numero;
    } else{
        cout<< "No adivinaste";
    }

    
    return 0;
}
