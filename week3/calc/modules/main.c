#include <stdio.h>
#include "ops.h"

int main()
{
    double a;
    double b;
    double result;
    char c;

    printf("Введите число А:");
    scanf("%lf", &a);
    printf("Введите число B:");
    scanf("%lf", &b);
    printf("Введите один из знаков *+-/:");
    scanf(" %c", &c);

    switch (c)
    {
    case '+':
        result = add(a,b);
        printf("%.2lf\n", result);
        break;

    case '-':
        result = sub(a,b);
        printf("%.2lf\n", result);
        break;

    case '*':
        result = mul(a,b);
        printf("%.2lf\n", result);
        break;

    case '/':
        if (b != 0.0)
        {
            result = divide(a,b);
            printf("Результат: %.2lf\n", result);
        }
        else
        {
            printf("Ошибка: деление на ноль невозможно!\n");
        }
        break;

    default:
        printf("Ошибка: неизвестная операция '%c'\n", c);
        break;
    }

    return 0;
}