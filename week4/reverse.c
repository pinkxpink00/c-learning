#include <stdio.h>

int main(){
    char german[] = "Hi";
    int i = 0;

    while (german[i] != '\0'){
        i = i+1;
    }

    for (int j = i-1; j >= 0; j--)
    {
        printf("%c", german[j]);
    }

    return 0;

}