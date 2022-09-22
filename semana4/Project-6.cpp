<<<<<<< HEAD
#include <stdio.h>
#define LIMIT 100

int main()
{
  int i, sum = 0, square = 0;
  
  for ( i = 1; i <= LIMIT; i++ )
        {
    sum += i * i;
    square += i;
  }
  
  square *= square;
  
  printf("%d\n", square - sum);
  return 0;
=======
#include <iostream>
using namespace std;

int main() {
    int n;
    
>>>>>>> 3d5f6905a779820f9419bf3039679580ea375bab
}