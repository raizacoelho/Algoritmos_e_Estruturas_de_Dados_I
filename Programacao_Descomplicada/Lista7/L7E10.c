#include <stdio.h>

int maior(int x, int y)
{
    int v1 = x, v2 = y;

    if (v1 == v2)
    {
        printf("Os numeros sao iguais.");
        return 0;
    }
    else if (v1 > v2)
    {
        return v1;
    }
    else
    {
        return v2;
    }
}

int main()
{
    int v1, v2, aux;

    printf("Entre com o primeiro valor: ");
    scanf("%d", &v1);
    printf("Entre com o segundo valor: ");
    scanf("%d", &v2);

    aux = maior(v1, v2);

    if (aux != 0)
    {
        printf("O maior valor e %d", aux);
    }

    return 0;
}