#include <stdio.h>

int main()
{
    int idade;
    float altura;
    char opcao;
    char nome[20];

    printf("Digite seu nome: \n");
    scanf("%s", &nome);

    printf("digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite a sua altura: \n");
    scanf("%f", &altura);

    printf("seu nome é %s, você tem %d anos e tem %.2f cm de altura\n ", nome, idade, altura);
}