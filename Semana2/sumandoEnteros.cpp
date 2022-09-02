#include <iostream>

using namespace std;
/*
Programa que recibe don enteros por teclado e imprime la suma de ambos.
*/
int main() {
    int a;
    int b;
    //declarando dos variables de tipo entero
    cout << "Ingrese primer numero: ";
    cin >> a;
    cout << "Ingrese segundo numero: ";
    cin >> b;


    int suma = a + b;

    cout << "La suma es: " << suma << endl;
    return 0; 
}