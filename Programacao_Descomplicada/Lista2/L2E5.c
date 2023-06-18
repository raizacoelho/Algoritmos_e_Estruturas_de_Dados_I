#include <stdio.h>

int main()
{
    int numero = 0;

    printf("Entre com um valor inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
    {
        printf("O numero eh par");
    }
    else
    {
        printf("O numero eh impar");
    }

    return 0;
}