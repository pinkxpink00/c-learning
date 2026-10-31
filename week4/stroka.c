#include <stdio.h>

int main()
{
    char name[] = "";
    int i = 0;

    while (name[i] != '\0'){
        i = i+1;
    }

    printf("%d\n", i);

    return 0;
}