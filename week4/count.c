#include <stdio.h>

int main()
{
    char b[] = "banana";
    char target = 'a';
    int i = 0;
    int count = 0;

    while (b[i] != '\0')
    {
        if (b[i] == target)
        {
           count = count + 1;
        }
        i = i + 1;
    }

    printf("%d\n", count);
    return 0;
}