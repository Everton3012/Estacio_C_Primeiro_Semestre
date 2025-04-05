#include <stdio.h>

int main()
{
    size_t i, j;

    char letra;

    for (i = 1; i <= 5; i++)
    {
        letra = 'A';
        for (j = 1; j <= i; j++)
        {
            printf(" %c", letra);
            letra++;
        }
        printf("\n");
    }

    return 0;
}