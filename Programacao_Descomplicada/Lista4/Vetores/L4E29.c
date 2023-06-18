#include <stdio.h>

int main()
{
    int A[6], somaPares = 0, qtddImpares = 0;

    printf("Preencha o vetor A[6]:\n");

    for (int i = 0; i < 6; i++)
    {
        printf("A[%d] = ", i);
        scanf("%d", &A[i]);
    }

    // numeros pares e soma dos numeros pares
    printf("Os numeros pares sao: \n");
    for (int i = 0; i < 6; i++)
    {
        if (A[i] % 2 == 0)
        {
            printf("A[%d] = %d\n", i, A[i]);
            somaPares = somaPares + A[i];
        }
    }
    printf("A soma dos numeros pares eh %d\n", somaPares);

    // numeros impares e quantidade de numeros impares
    printf("Os numeros impares sao: \n");
    for (int i = 0; i < 6; i++)
    {
        if (A[i] % 2 != 0)
        {
            printf("A[%d] = %d\n", i, A[i]);
            qtddImpares++;
        }
    }
    printf("A quantidade de numeros impares eh %d\n", qtddImpares);

    return 0;
}