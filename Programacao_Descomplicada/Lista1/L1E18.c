#include <stdio.h>

int main(){
    float m3 = 0, litros = 0;

    printf("Entre com o voume em metros cubicos: ");
    scanf("%f", &m3);

    litros = m3 * 1000;

    printf("O volume em litros eh %.2f", litros);

    return 0;
}