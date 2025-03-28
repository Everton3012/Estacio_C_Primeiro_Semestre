#include <stdio.h>

int main()
{
    char produtoA[30] = "Produto A";
    char produtoB[20] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    double valorTotalA;
    double valorTotalB;

    int resultadoA, resultadoB;

    // Exibir informações dos produtos
    printf("Produto %s tem estoque %u e o valor unitário é R$ %.2f\n", produtoA, estoqueA, valorA);

    printf("Produto %s tem estoque %u e o valor unitário é R$ %.2f\n", produtoB, estoqueB, valorB);

    // Comparações com o valor minimo de estoque
    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("o protudo %s tem estoque minimo %d\n", produtoA, resultadoA);
    printf("o protudo %s tem estoque minimo %d", produtoB, resultadoB);

    // Comparações entre os valores totais dos produtos
    printf("O valor total dde A(R$ %.2f) é maior que o valor total de B (R$ %.2f): %d\n", estoqueA * valorA, estoqueB * valorB, (estoqueA * valorA) > (estoqueB * valorB));

    return 0;
}