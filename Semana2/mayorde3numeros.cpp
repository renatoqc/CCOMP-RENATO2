#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    int c;

    cout << "Ingrese primer numero: ";
    cin >>a;
    cout << "Ingrese segundo numero: ";
    cin >>b;
    cout << "Ingrese segundo numero: ";
    cin >>c;
     
     if (a > b > c) {
     cout << "El mayor numero es: " << a << endl;
     } else if (b > a > c)
     {
        cout << "El mayor numero es: " << b << endl;
     } else {
        cout << "El mayor numero es: " << c << endl;
     }
     
     return 0;
}