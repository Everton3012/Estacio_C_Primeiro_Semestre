#include <stdio.h>

int main()
{
    int numeroNormal = 2147483647;
    long long int numeroGrande = 2147483647;

    printf("Número regular (int): %d\n", numeroNormal);
    printf("número grande (long ing): %ld\n", numeroGrande);

    numeroGrande++;

      printf("número grande atualizado (long ing): %lld\n", numeroGrande);

    return 0;
}