#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    long long int i, resultado;
    long long int MAX = 600851475143;
    int num;
 
    for( i = 2; i < MAX; i++)
    {
       if(MAX % i == 0)
       {
           MAX /= i;
           i = 2;
        }
    }
 
    printf("El maximo factor primo de 600851475143 es %d: ", MAX );
 
    system("pause");
    return 0;
}