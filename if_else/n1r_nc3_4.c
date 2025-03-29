#include <stdio.h>

int main()
{

    float nota;
    printf("diga a sua media:\n");
    scanf("%f", &nota);

    if (nota >= 60.0)
    {
        printf("Parabéns, você passou!!!!\n");
    }
    else 
    {
        printf("Infelizmente, você não passou.\n");
    }
}