#include <stdio.h>

int main()
{
    int n;
    printf("Введите число: ");
    scanf("%d", &n);

    for (int num = 2; num <= n; num++ )
    {
        int is_prime = 1;

        for (int d = 2; d <= num - 1; d++)
        {
            if (num % d == 0)
            {
                is_prime = 0;
            }
        
        }

         if(is_prime == 1)
    {
        printf("%d\n", num);
    }
    }

    return 0;

}