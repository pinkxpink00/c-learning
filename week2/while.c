#include <stdio.h>

int main()
{
    int sum = 0;
    int n = 472;
    while (n != 0)
    {
        int digits = n % 10;
        sum = sum + digits;
        n = n / 10;
    }

    printf("%d\n", sum);
}