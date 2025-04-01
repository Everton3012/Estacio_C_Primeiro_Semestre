#include <stdio.h>

int main()
{

    int numero, i;

    printf("Digite um  numero para calcularmos a tabuada: ");
    scanf("%d", &numero);

    for (i = 0; i < 11; i++)
    {
        int resultado = i * numero;
        printf("%d x %d = %d\n",i , numero, resultado);
    }

    return 0;
}