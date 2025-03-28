#include <stdio.h>

int main()
{
    int carta1 = 1, carta2 = 2;
    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char nomeDaCidade1[30], nomeDaCidade2[30];
    int populacao1, populacao2;
    double area1, area2;
    double pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    printf("\nBem-vindo ao Super Trunfo!!! \n\n");

    /* Primeira carta */
    printf("Cadastre a primeira carta: \n\n");

    printf("Digite a letra do estado: ");
    scanf(" %c", &estado1);

    printf("Digite o código do estado: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade (sem espaços): ");
    scanf("%s", nomeDaCidade1);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em km²: ");
    scanf("%lf", &area1);

    printf("Digite o PIB da cidade em bilhões: ");
    scanf("%lf", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    double densidadePopulacional1 = (double) populacao1 / area1;
    double PibPerCapita1 = (double) (pib1 * 1e9) / populacao1;

    /* Segunda carta */
    printf("\nCadastre a segunda carta: \n\n");

    printf("Digite a letra do estado: ");
    scanf(" %c", &estado2);

    printf("Digite o código do estado: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade (sem espaços): ");
    scanf("%s", nomeDaCidade2);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em km²: ");
    scanf("%lf", &area2);

    printf("Digite o PIB da cidade em bilhões: ");
    scanf("%lf", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    double densidadePopulacional2 = (double) populacao2 / area2;
    double PibPerCapita2 = (double) (pib2 * 1e9) / populacao2;

    /* Exibição das cartas */
    printf("\n================= CARTAS =================\n");

    printf("\nCarta %d:\n", carta1);
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nomeDaCidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per capita: R$ %.2f\n", PibPerCapita1);

    printf("\n------------------------------------------\n");

    printf("\nCarta %d:\n", carta2);
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nomeDaCidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per capita: R$ %.2f\n", PibPerCapita2);

    printf("\n==========================================\n");

    return 0;
}
