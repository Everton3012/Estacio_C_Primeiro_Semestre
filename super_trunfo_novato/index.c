#include <stdio.h>

int main()
{

    int carta1 = 1, carta2 = 2;
    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char nomeDaCidade1[30], nomeDaCidade2[30];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    printf("\nBem Vindo ao Super Trunfo!!! \n\n");
    printf("Cadastre a primeira carta: \n\n");

    printf("Digite a letra do estado: ");
    scanf(" %c", &estado1);

    printf("\nDigite o codigo do estado: ");
    scanf("%s", &codigo1);

    printf("\nDigite o nome da cidade sem espaços: ");
    scanf("%s", &nomeDaCidade1);

    printf("\nDigite o número de pessoas que moram na cidade: ");
    scanf("%d", &populacao1);

    printf("\nDigite o valor da área da cidade em km²: ");
    scanf("%f", &area1);

    printf("\nDigite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("\nDigite o número de ponntos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    /*segunda carta*/

    printf("\n\nCadastre a segunda carta: \n\n");

    printf("Digite a letra do estado: ");
    scanf(" %c", &estado2);

    printf("\nDigite o codigo do estado: ");
    scanf("%s", &codigo2);

    printf("\nDigite o nome da cidade sem espaços: ");
    scanf("%s", &nomeDaCidade2);

    printf("\nDigite o número de pessoas que moram na cidade: ");
    scanf("%d", &populacao2);

    printf("\nDigite o valor da área da cidade em km²: ");
    scanf("%f", &area2);

    printf("\nDigite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("\nDigite o número de ponntos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\n\n");

    printf("Carta %d: \n", carta1);
    printf("Estado: %c \n", estado1);
    printf("Codigo: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", nomeDaCidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Númedo de Pontos Turisticos: %d \n", pontosTuristicos1);

    printf("\n<----------//----------//---------->\n\n");

    printf("Carta %d: \n", carta2);
    printf("Estado: %c \n", estado2);
    printf("Codigo: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", nomeDaCidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Númedo de Pontos Turisticos: %d \n", pontosTuristicos2);
}