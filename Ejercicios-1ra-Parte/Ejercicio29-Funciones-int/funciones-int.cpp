#include <iostream>

using namespace std;

int sumar ( int a, int b){
    return a + b;
}

int main(int argc, char const *argv[])
{
    system ("cls");

    int resultado = sumar (8, 3);

    cout << sumar (5, 7);
    cout << endl;
    cout << sumar (15, 7);
    cout << endl;
    cout << sumar (5, 71);
    cout << endl;
    cout << sumar (9, 8);
    cout << endl;

    return 0;
}
