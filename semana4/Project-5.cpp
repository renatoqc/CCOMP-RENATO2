#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    for(long int i = 100; i < 1000; i++)
    {
        for(long int j = 100; j < 1000; j++)
        {
            long int prod = i*j;
            cout<<to_string(prod)<<endl;
        
        }

        continue;
    }
    return 0;
}