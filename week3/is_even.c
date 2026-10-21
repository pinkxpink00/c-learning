#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int s = add(3,5);
    printf("%d\n", s);
    return 0;
}