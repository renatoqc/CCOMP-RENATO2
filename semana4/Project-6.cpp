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
}