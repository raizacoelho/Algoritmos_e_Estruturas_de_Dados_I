#include <stdio.h>

int main()
{
    int valor = 0;

    printf("Escolha um inteiro entre 1 e 7: ");
    scanf("%d", &valor);

    if (valor < 1 || valor > 7)
    {
        printf("Valor Invalido.");
        return 0;
    }

    switch (valor)
    {
    case 1:
        printf("Domingo");
        break;
    case 2:
        printf("Segunda-feira");
        break;
    case 3:
        printf("Terca-feira");
        break;
    case 4:
        printf("Quarta-feira");
        break;
    case 5:
        printf("Quinta-feira");
        break;
    case 6:
        printf("Sexta-feira");
        break;
    case 7:
        printf("Sabado");
        break;
    }

    return 0;
}