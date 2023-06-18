#include <stdio.h>

int main()
{
    int A[6] = {1, 0, 5, -2, -5, 7}, soma = 0;

    soma = A[0] + A[1] + A[5];
    printf("A soma de A[0], A[1] e A[5] eh %d\n", soma);

    A[4] = 100;

    for (int i = 0; i < 6; i++)
    {
        printf("A[%d] = %d\n", i, A[i]);
    }

    return 0;
}