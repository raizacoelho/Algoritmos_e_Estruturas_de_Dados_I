#include <stdio.h>

int main(){
    float polegadas = 0, centimetros = 0;

    printf("Entre com o comprimento em centimetros: ");
    scanf("%f", &centimetros);

    polegadas = centimetros / 2.54;

    printf("O comprimento em polegadas eh %.2f", polegadas);

    return 0;
}