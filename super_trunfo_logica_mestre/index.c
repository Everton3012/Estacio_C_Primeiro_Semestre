#include <stdio.h>

int main()
{
    int carta1 = 1, carta2 = 2;
    char estado1[30], estado2[30];
    char codigo1[10], codigo2[10];
    char nomeDaCidade1[30], nomeDaCidade2[30];
    int populacao1, populacao2;
    double area1, area2;
    double pib1, pib2;
    int opcaoJogador, opcaoJogador2;

    int pontosTuristicos1, pontosTuristicos2;

    printf("\n#### Bem-vindo ao Super Trunfo!!! ####\n\n");

    printf("\n#### Selecone o atributo de comparação das cartas ####\n\n");
    printf("*[1] População.\n");
    printf("*[2] Areá.\n");
    printf("*[3] PIB.\n");
    printf("*[4] Número de pontos turísticos.\n");
    printf("*[5] Densidade demográfica.\n");
    scanf("%d", &opcaoJogador);

    printf("\n#### Selecone segundo o atributo de comparação das cartas ####\n\n");

    printf("*[1] População.\n");
    printf("*[2] Areá.\n");
    printf("*[3] PIB.\n");
    printf("*[4] Número de pontos turísticos.\n");
    printf("*[5] Densidade demográfica.\n");
    scanf("%d", &opcaoJogador2);

    if (opcaoJogador == opcaoJogador2)
    {
        printf("opção invalida! selecione atributos diferentes para calcular");
        return 0;
    }

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

    // calculo da densidade populacional da carta 1
    double densidadePopulacional1 = (double)populacao1 / (double)area1;

    // calculo do pib per capita da carta 1
    double PibPerCapita1 = (double)(pib1 * 1e9) / (double)populacao1;

    // calculo do super poder da carta 1
    double superPoder1 = (double)populacao1 + (double)area1 + (double)pib1 + (double)pontosTuristicos1 + (double)PibPerCapita1 + (double)(area1 / populacao1);

    // Segunda carta
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

    // calculo da densidade populacional da carta 2
    double densidadePopulacional2 = (double)populacao2 / (double)area2;

    // calculo do pib per capita da carta 2
    double PibPerCapita2 = (double)(pib2 * 1e9) / (double)populacao2;

    // calculo do super poder da carta 2
    double superPoder2 = (double)populacao2 + (double)area2 + (double)pib2 + (double)pontosTuristicos1 + (double)PibPerCapita2 + (double)(area2 / populacao2);

    /* Exibição de resultado */
    printf("\n================= RESULTADO =================\n");

    // opções de comparação
    switch (opcaoJogador)
    {
    case 1:
        printf("\nComparação de cartas (Atributo: População):\n\n");

        printf("Carta 1 - %s: %d\n", nomeDaCidade1, populacao1);
        printf("Carta 2 - %s: %d\n", nomeDaCidade2, populacao2);

        // estrutura condicional
        if (populacao1 > populacao2)
        {
            printf("Resultado: Carta 1 (%s) Venceu!!\n)", nomeDaCidade1);
        }
        else if (populacao1 = populacao2)
        {
            printf("Resultado: Carta 1 (%s) e Carta 2 (%s) Empataram!!! \n)", nomeDaCidade1, nomeDaCidade2);
        }
        else
        {
            printf("Resultado: Carta 2 (%s) Venceu!!\n", nomeDaCidade2);
        }
        break;
    case 2:
        printf("\nComparação de cartas (Atributo: Área):\n\n");

        printf("Carta 1 - %s: %d\n", nomeDaCidade1, area1);
        printf("Carta 2 - %s: %d\n", nomeDaCidade2, area2);

        // estrutura condicional
        if (area1 > area1)
        {
            printf("Resultado: Carta 1 (%s) Venceu!!\n)", nomeDaCidade1);
        }
        else if (area1 = area2)
        {
            printf("Resultado: Carta 1 (%s) e Carta 2 (%s) Empataram!!! \n)", nomeDaCidade1, nomeDaCidade2);
        }
        else
        {
            printf("Resultado: Carta 2 (%s) Venceu!!\n", nomeDaCidade2);
        }
        break;
    case 3:
        printf("\nComparação de cartas (Atributo: PIB):\n\n");

        printf("Carta 1 - %s: %d\n", nomeDaCidade1, pib1);
        printf("Carta 2 - %s: %d\n", nomeDaCidade2, pib2);

        // estrutura condicional
        if (pib1 > pib2)
        {
            printf("Resultado: Carta 1 (%s) Venceu!!\n)", nomeDaCidade1);
        }
        else if (pib1 = pib2)
        {
            printf("Resultado: Carta 1 (%s) e Carta 2 (%s) Empataram!!! \n)", nomeDaCidade1, nomeDaCidade2);
        }
        else
        {
            printf("Resultado: Carta 2 (%s) Venceu!!\n", nomeDaCidade2);
        }
        break;
    case 4:
        printf("\nComparação de cartas (Atributo: Número de pontos turísticos):\n\n");

        printf("Carta 1 - %s: %d\n", nomeDaCidade1, pontosTuristicos1);
        printf("Carta 2 - %s: %d\n", nomeDaCidade2, pontosTuristicos2);

        // estrutura condicional
        if (pontosTuristicos1 > pontosTuristicos2)
        {
            printf("Resultado: Carta 1 (%s) Venceu!!\n)", nomeDaCidade1);
        }
        else if (pontosTuristicos1 = pontosTuristicos2)
        {
            printf("Resultado: Carta 1 (%s) e Carta 2 (%s) Empataram!!! \n)", nomeDaCidade1, nomeDaCidade2);
        }
        else
        {
            printf("Resultado: Carta 2 (%s) Venceu!!\n", nomeDaCidade2);
        }
        break;
    case 5:
        printf("\nComparação de cartas (Atributo: Densidade demográfica):\n\n");

        printf("Carta 1 - %s: %d\n", nomeDaCidade1, densidadePopulacional1);
        printf("Carta 2 - %s: %d\n", nomeDaCidade2, densidadePopulacional2);

        // estrutura condicional
        if (densidadePopulacional1 < densidadePopulacional2)
        {
            printf("Resultado: Carta 1 (%s) Venceu!!\n)", nomeDaCidade1);
        }
        else if (densidadePopulacional1 = densidadePopulacional2)
        {
            printf("Resultado: Carta 1 (%s) e Carta 2 (%s) Empataram!!! \n)", nomeDaCidade1, nomeDaCidade2);
        }
        else
        {
            printf("Resultado: Carta 2 (%s) Venceu!!\n", nomeDaCidade2);
        }
        break;
    default:
        break;
    }

    switch (opcaoJogador2)
    {
    case 1:
        printf("\nComparação de cartas (Atributo: População):\n\n");

        printf("Carta 1 - %s: %d\n", nomeDaCidade1, populacao1);
        printf("Carta 2 - %s: %d\n", nomeDaCidade2, populacao2);

        // estrutura condicional
        if (populacao1 > populacao2)
        {
            printf("Resultado: Carta 1 (%s) Venceu!!\n)", nomeDaCidade1);
        }
        else if (populacao1 = populacao2)
        {
            printf("Resultado: Carta 1 (%s) e Carta 2 (%s) Empataram!!! \n)", nomeDaCidade1, nomeDaCidade2);
        }
        else
        {
            printf("Resultado: Carta 2 (%s) Venceu!!\n", nomeDaCidade2);
        }
        break;
    case 2:
        printf("\nComparação de cartas (Atributo: Área):\n\n");

        printf("Carta 1 - %s: %d\n", nomeDaCidade1, area1);
        printf("Carta 2 - %s: %d\n", nomeDaCidade2, area2);

        // estrutura condicional
        if (area1 > area1)
        {
            printf("Resultado: Carta 1 (%s) Venceu!!\n)", nomeDaCidade1);
        }
        else if (area1 = area2)
        {
            printf("Resultado: Carta 1 (%s) e Carta 2 (%s) Empataram!!! \n)", nomeDaCidade1, nomeDaCidade2);
        }
        else
        {
            printf("Resultado: Carta 2 (%s) Venceu!!\n", nomeDaCidade2);
        }
        break;
    case 3:
        printf("\nComparação de cartas (Atributo: PIB):\n\n");

        printf("Carta 1 - %s: %d\n", nomeDaCidade1, pib1);
        printf("Carta 2 - %s: %d\n", nomeDaCidade2, pib2);

        // estrutura condicional
        if (pib1 > pib2)
        {
            printf("Resultado: Carta 1 (%s) Venceu!!\n)", nomeDaCidade1);
        }
        else if (pib1 = pib2)
        {
            printf("Resultado: Carta 1 (%s) e Carta 2 (%s) Empataram!!! \n)", nomeDaCidade1, nomeDaCidade2);
        }
        else
        {
            printf("Resultado: Carta 2 (%s) Venceu!!\n", nomeDaCidade2);
        }
        break;
    case 4:
        printf("\nComparação de cartas (Atributo: Número de pontos turísticos):\n\n");

        printf("Carta 1 - %s: %d\n", nomeDaCidade1, pontosTuristicos1);
        printf("Carta 2 - %s: %d\n", nomeDaCidade2, pontosTuristicos2);

        // estrutura condicional
        if (pontosTuristicos1 > pontosTuristicos2)
        {
            printf("Resultado: Carta 1 (%s) Venceu!!\n)", nomeDaCidade1);
        }
        else if (pontosTuristicos1 = pontosTuristicos2)
        {
            printf("Resultado: Carta 1 (%s) e Carta 2 (%s) Empataram!!! \n)", nomeDaCidade1, nomeDaCidade2);
        }
        else
        {
            printf("Resultado: Carta 2 (%s) Venceu!!\n", nomeDaCidade2);
        }
        break;
    case 5:
        printf("\nComparação de cartas (Atributo: Densidade demográfica):\n\n");

        printf("Carta 1 - %s: %d\n", nomeDaCidade1, densidadePopulacional1);
        printf("Carta 2 - %s: %d\n", nomeDaCidade2, densidadePopulacional2);

        // estrutura condicional
        if (densidadePopulacional1 < densidadePopulacional2)
        {
            printf("Resultado: Carta 1 (%s) Venceu!!\n)", nomeDaCidade1);
        }
        else if (densidadePopulacional1 = densidadePopulacional2)
        {
            printf("Resultado: Carta 1 (%s) e Carta 2 (%s) Empataram!!! \n)", nomeDaCidade1, nomeDaCidade2);
        }
        else
        {
            printf("Resultado: Carta 2 (%s) Venceu!!\n", nomeDaCidade2);
        }
        break;
    default:
        break;
    }

    printf("\n==========================================\n");

    return 0;
}
