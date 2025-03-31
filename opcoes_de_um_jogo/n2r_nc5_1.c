#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int opcao;
    int numeroSecreto, palpite;

    printf("*********Menu Principal*********\n");
    printf("*[1] Iniciar Jogo\n");
    printf("*[2] Ver Regras\n");
    printf("*[3] Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("\n\n*********Execução do jogo*********\n\n");
        srand(time(0));
        numeroSecreto = rand() % 10;
        printf("Digite um número de 0 a 9: ");
        scanf("%d",&palpite);
        if (numeroSecreto == palpite)
        {
            printf("Você acertou, o número secreto é: %d", numeroSecreto);
        } else {
            printf("Você errou, o número secreto é: %d", numeroSecreto);
        }
        
        
        break;
    case 2:
        printf("\n\n*********As regras são*********\n\n");
        printf("Digite um número de 0 a 9 e tente adivinhar o número aleatório!\n\n");
        break;
    case 3:
        printf("Saindo do jogo....\n");
        break;

    default:
        printf("Opção invalida!");
        break;
    }
}