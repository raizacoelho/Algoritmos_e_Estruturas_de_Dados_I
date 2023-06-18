#include <stdio.h>
#include <math.h>

int main()
{
    int A[4][4];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i < j)
            {
                A[i][j] = (2 * i) + (7 * j) - 2;
            }
            else if (i == j)
            {
                A[i][j] = (3 * (i * i)) - 1;
            }
            else if (i > j)
            {
                A[i][j] = (4 * (i * i * i)) - (5 * (j * j)) + 1;
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

    return 0;
}
