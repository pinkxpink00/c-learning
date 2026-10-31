#include <stdio.h>

int main()
{
    int a[5] = {1,2,3,4,5};
    
    int a5 = (a[5]);
    int a10 = (a[10]);
    int a1 = (a[-1]);

    printf("sum: %d\n", a5);
    printf("avg: %d\n", a10);
    printf("min: %d\n", a1);

    return 0;
}