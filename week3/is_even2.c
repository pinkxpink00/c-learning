#include <stdio.h>

int is_even(int d)
{
    if (d % 2 == 0)
    {
        return 1;
    }
    else{
        return 0;
    }
}


int main()
{
    int n;
    printf("Введите число: ");
    scanf("%d", &n);

    if (is_even(n) == 1){
        printf("Чётное число\n");
    }
    else {
        printf("Нечётное\n");
    }

    return 0;
}