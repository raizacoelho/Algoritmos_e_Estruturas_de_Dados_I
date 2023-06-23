#include <stdio.h>

void consumo(float x, float y)
{
    float distancia = x, litros_gasolina = y, consumo = 0;
    consumo = distancia / litros_gasolina;

    if (consumo < 8)
    {
        printf("Venda o carro!");
    }
    else if (consumo > 12)
    {
        printf("Super Economico!");
    }
    else
    {
        printf("Economico!");
    }
}

int main()
{
    float distancia, litros_gasolina;

    printf("Entre a distancia (em kilometros): ");
    scanf("%f", &distancia);
    printf("Entre a quantidade de litros de gasolina consumidos: ");
    scanf("%f", &litros_gasolina);

    consumo(distancia, litros_gasolina);

    return 0;
}