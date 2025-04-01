#include <stdio.h>

int main()
{

    int numero;

    do
    {
        printf("Digite um numero par para sair do programa: ");
        scanf("%d", &numero);

        if (numero % 2 == 0)
        {
            printf("%d é par\n", numero);
            printf("Saindo....\n");
        }
        else
        {
            printf("%d é impar\n", numero);
        }

    } while (numero % 2 != 0);

    return 0;
}