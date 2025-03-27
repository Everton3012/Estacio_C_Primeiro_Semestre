#include <stdio.h>

int main()
{
    int numero1, numero2;
    int soma, subtracao, multiplcacao, divisao;

    printf("Digite o primeiro número: \n");
    scanf("%d", &numero1);

    printf("Digite o segundo número: \n");
    scanf("%d", &numero2);

    // operação soma;
    soma = numero1 + numero2;

    // operação subtração;
    subtracao = numero1 - numero2;
    
    // operação multiplicação;
    multiplcacao = numero1 * numero2;
    
    // operação divisão;
    divisao = numero1 / numero2;

    printf("O resultado da soma é : %d\n", soma);
    printf("O resultado da subtração é : %d\n", subtracao);
    printf("O resultado da multiplicação é : %d\n", multiplcacao);
    printf("O resultado da divisão é : %d\n", divisao);


}