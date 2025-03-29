#include <stdio.h>

int main()
{

    int idade;
    printf("diga a sua idade:\n");
    scanf("%d", &idade);

    if (idade >= 18)
    {
        printf("Você é maior de idade!!!!\n");
    }
    else 
    {
        printf("Você é menor de idade.\n");
    }
}