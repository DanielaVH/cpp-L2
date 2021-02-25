#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int pares = 0;
    int impares = 0;
    int total = 0;

    for (int i = 1; i <= 20; i++)
    {
        if (i % 2 == 0){
            pares = pares + i;
        }
        if (i %2 != 0)
        impares = impares + i;
        cout << i << " ";
    }

    cout << endl;
    cout << endl;
    cout << "Total pares: " << pares;
     cout << endl;
    cout << "Total Impares: " << impares;
     cout << endl;
    total = pares + impares,
    cout << "Total : " << total;




    return 0;
}