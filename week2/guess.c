#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int secret = rand() % 100 + 1;
    int attempts = 0;
    int guess = 0;

    do{
        printf("Введите положительное число: ");
        scanf("%d", &guess);
        attempts = attempts + 1;
        if (secret < guess)
        {
            printf("число меньше\n");
        }
        else if(secret > guess)
        {
            printf("число больше\n");
        }
    }while (guess != secret);
    printf("Угадал за %d попыток \n", attempts);
    
    return 0;
}