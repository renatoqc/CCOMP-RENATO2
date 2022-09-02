#include <iostream>
using namespace std;

int main() {
    int a;
    int b;

    cout << "Ingrese primer numero: ";
    cin >>a;
    cout << "Ingrese segundo numero: ";
    cin >>b;
     
     if (a > b) {
     cout << "El mayor numero es: " << a << endl;
     } else {
        cout << "El mayor numero es: " << b << endl;
     }

     return 0;   
}  