#include <stdio.h>
#include "math_utils.h"


int main()
{
    int n;
    printf("Введите число: ");
    scanf("%d", &n);

    for (int num = 2; num <= n; num++)
    {
        if (is_prime(num)){printf("%d ", num );}
    }

    printf("\n");
    return 0;
}
