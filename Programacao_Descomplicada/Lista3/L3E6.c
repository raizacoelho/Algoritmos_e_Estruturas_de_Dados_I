#include <stdio.h>

int main()
{
    int valores[10], soma = 0;
    float media = 0;

    printf("Preencha o vetor com 10 valores:\n");

    for (int i = 0; i < 10; i++)
    {
        printf("[%d]= ", i);
        scanf("%d", &valores[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        soma = soma + valores[i];
    }

    media = (float)soma / 10;
    printf("A soma dos valores eh %d\n", soma);
    printf("A media dos valores eh %f", media);

    return 0;
}