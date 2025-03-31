#include <stdio.h>

int main()
{
    float nota;

    printf("Digite a sua nota: ");
    scanf("%f", &nota);

    if (nota > 100 || nota < 0)
    {
        printf("valor de nota invalida, a nota precisa ter o valor de 0 a 100.\n");
    }
    else if (nota >= 90)
    {
        printf("sua nota é : A");
    }
    else if (nota >= 80)
    {
        printf("sua nota é : B");
    }
    else if (nota >= 70)
    {
        printf("sua nota é : C");
    }
    else if (nota >= 60)
    {
        printf("sua nota é : D");
    }
    else if (nota >= 50)
    {
        printf("sua nota é : E");
    }
    else
    {
        printf("sua nota é : F");
    }
}