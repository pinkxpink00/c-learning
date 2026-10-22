#include <stdio.h>


int square(int x)
{
    return x * x;
}

int main()
{
    int r = square(5);
    printf("%d\n", r);
    return 0;
}