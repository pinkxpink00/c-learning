#include <stdio.h>

int main()
{
    int temps[5] = {21, 23, 19, 25, 22};
    int sum = 0;
    int max = (temps[0]);
    int min = (temps[0]);

    for(int i = 0; i <= 4; i++)
    {
        sum = sum + temps[i];
        if (temps[i] > max)
        {
            max = temps[i];
        }
        if (temps[i] < min)
        {
            min = temps[i];
        }
    }

    double avg = sum / 5.0;

    printf("sum: %d\n", sum);
    printf("avg: %lf\n", avg);
    printf("min: %d\n", min);
    printf("max: %d\n", max);
}