#include <stdio.h>

int main()
{
    int n;
    int is_prime = 1;
    printf("Введите число: ");
    scanf("%d", &n);

    for (int d = 2; d <= n - 1; d++)
    {
        if (n % d == 0)
        {
            is_prime = 0;
        }
    }

    if(is_prime == 1)
    {
        printf("simple");
    }
    else
    {
        printf("not simple");
    }

    return 0;
} 