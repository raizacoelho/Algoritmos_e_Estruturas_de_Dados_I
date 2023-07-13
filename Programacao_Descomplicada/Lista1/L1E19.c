#include <stdio.h>

int main(){
    float m3 = 0, litros = 0;

    printf("Entre com o volume em litros: ");
    scanf("%f", &litros);

    m3 = litros / 1000;

    printf("O volume em metros cubicos eh %.2f", m3);

    return 0;
}