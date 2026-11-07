#include <stdio.h>

int main()
{
    int x = 45;
    int *p = &x;

    printf("x  = %d\n", x);
    printf("&x  = %p\n", &x);
    printf("p  = %p\n", p);
    printf("*p  = %d\n", *p);

    *p = 100;
    printf("x after *p = 100:%d\n", x);
    return 0;
}