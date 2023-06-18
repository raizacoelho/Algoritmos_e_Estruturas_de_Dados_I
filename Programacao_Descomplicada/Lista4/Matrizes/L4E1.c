#include <stdio.h>

int main()
{
    int A[4][4], contador = 0;

    printf("Preencha a matriz A 4x4:\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);

            if (A[i][j] > 10)
            {
                contador++;
            }
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("A matriz possui %d valores maiores que 10.", contador);

    return 0;
}