#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a=100;
    int b=500;
    int c=70;


if (a>b){
    if (a>c) {
        cout <<  "a es el mayor";
          }else {
              cout << "c es el mayor";
          }

}else{
    if (b>c){
        cout<< "b es el mayor";
    }else{
        cout<<"c es el mayor";
    }
}

    return 0;
}
