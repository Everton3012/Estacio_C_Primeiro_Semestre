#include <stdio.h>

int main()
{
    int numero1 = 1, resultado;

    printf("Antes do imcremento %d\n", numero1);
    
    printf("Pós do imcremento %d\n", numero1);
    numero1--;
    printf("Pós do decremento %d\n", numero1);

    resultado = numero1++;

    printf("Apos Pós-incremento - Número  :%d - Resultado: %d\n", numero1, resultado);

    resultado = ++numero1;

    printf("Apos Pré-incremento - Número  :%d - Resultado: %d\n", numero1, resultado);

}