#include <stdio.h>

int positivo_negativo(int x)
{
    int valor = 0;
    valor = x;

    if (valor == 0)
    {
        return (0);
    }
    if (valor > 0)
    {
        return (1);
    }
    else
    {
        return (-1);
    }
}

int main()
{
    int numero = 0, checagem = 0;

    printf("Entre com um valor inteiro: ");
    scanf("%d", &numero);

    checagem = positivo_negativo(numero);

    return 0;
}