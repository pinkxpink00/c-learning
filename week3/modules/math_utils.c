#include "math_utils.h"

int is_even(int d)
{
    if (d % 2 == 0)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int is_prime(int n)
{
    int prime = 1;

    if( n < 2 ){ prime = 0;}

    for (int d = 2; d <= n - 1; d++)
    {
        if (n % d == 0)
        {
            prime = 0;
        }
    }

    if( prime == 1){ return 1; }else{ return 0; }
}