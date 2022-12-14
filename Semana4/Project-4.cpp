#include <iostream>

//Function prototypes
bool isPal(int num);
int reverseNum(int num);

int main()
{
    int product = 0;
    int greatestPal = 0;
    // empiezo en el número más bajo de 3 dígitos (100), termina en el más grande (999)
    // método de fuerza bruta que prueba todas las combinaciones de dos números de tres dígitos
    for(int i = 100; i < 1000; i++){
        for(int j = 100; j < 1000; j++){
            // producto de numeros
            product = i * j;
            // si palindrome y greatPal aún no se han inicializado
            if(isPal(product) && greatestPal==0){
                    greatestPal = product;
                }
            // if palindrome and greatestPal is already initialized
            else if(isPal(product) && greatestPal!=0){
                // ensures greatestPal is always at the greatest
                // palindrome found so far
                if(product > greatestPal){
                    greatestPal = product;
                    }
                }
            }
        }
        std::cout << greatestPal << std::endl;
        return 0;
}

// check whether number is a palindrome
bool isPal(int num){
    // check whether the number is
    // the same backwards and forwards
    if(reverseNum(num) == num){
        return true;
    }
    else{
        return false;
    }
}
// reverse a given number
int reverseNum(int n){
    int revNum=0;
    int remainder=0;
    while(n!=0){
        remainder = n%10;
        revNum = revNum*10 + remainder; // increase value by factor of ten, append latest digit as last digit, repeat
        // cut off last digit by dividing by ten
        n /= 10;
    }
    return revNum;
}