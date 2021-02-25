#include <iostream>

using namespace std;

extern int sumar(int a, int b);

int main(int argc, char const *argv[])
{
    system ("cls");

    int resultado = sumar (8, 3);

    cout << sumar (5, 7);
    cout << endl;
    
    return 0;
}