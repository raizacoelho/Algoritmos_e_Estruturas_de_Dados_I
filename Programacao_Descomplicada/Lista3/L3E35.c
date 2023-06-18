#include <stdio.h>

int main()
{
    int vInicial = 0, vFinal = 0, soma = 0;

    printf("Entre com o valor inicial do intervalo: ");
    scanf("%d", &vInicial);
    printf("Entre com o valor final do intervalo: ");
    scanf("%d", &vFinal);

    if (vInicial > vFinal)
    {
        printf("Intervalo de valores invalido.");
        return 0;
    }

    for (int i = vInicial; i <= vFinal; i++)
    {
        if (i % 2 != 0)
        {
            soma = soma + i;
        }
    }

    printf("Soma dos impares no intervalo = %d", soma);

    return 0;
}