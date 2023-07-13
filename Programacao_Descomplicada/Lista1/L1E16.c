#include <stdio.h>

int main(){
    float polegadas = 0, centimetros = 0;

    printf("Entre com o comprimento em polegadas: ");
    scanf("%f", &polegadas);

    centimetros = polegadas * 2.54;

    printf("O comprimento em centimetros eh %.2f", centimetros);

    return 0;
}