#include <stdio.h>

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