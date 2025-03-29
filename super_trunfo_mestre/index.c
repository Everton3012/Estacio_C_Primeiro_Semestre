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

    double densidadePopulacional1 = (double)populacao1 / (double)area1;
    double PibPerCapita1 = (double)(pib1 * 1e9) / (double)populacao1;
    double superPoder1 = (double)populacao1 + (double)area1 + (double)pib1 + (double)pontosTuristicos1 + (double)PibPerCapita1 + (double)(area1 / populacao1);

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

    double densidadePopulacional2 = (double)populacao2 / (double)area2;
    double PibPerCapita2 = (double)(pib2 * 1e9) / (double)populacao2;
    double superPoder2 = (double)populacao2 + (double)area2 + (double)pib2 + (double)pontosTuristicos1 + (double)PibPerCapita2 + (double)(area2 / populacao2);

    /* Exibição de resultado */
    printf("\n================= CARTAS =================\n");

    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade populacional: Carta 2 venceu (%d)\n", densidadePopulacional1 < densidadePopulacional2);
    printf("PIB per capita: Carta 1 venceu (%d)\n", PibPerCapita1 > PibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    printf("\n==========================================\n");

    return 0;
}
