#include <stdio.h>

int main()
{
    int opcao;
    float saldo = 1000.00;

    printf("Escolha uma opção:\n");
    printf("*[1] Verificar saldo.\n");
    printf("*[2] Fazer deposito.\n");
    printf("*[3] Fazer saque.\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("o seu saldo é: R$ %.2f\n", saldo);
        break;
    case 2:
        printf("Digite o banco que você deseja depositar\n");
        printf("Digite a agencia que você deseja depositar\n");
        printf("Digite a conta que você deseja depositar\n");
        break;
    case 3:
        printf("Digite o valor a sacar\n");
        break;

    default:
        printf("Opção inválida\n");
        break;
    }
}