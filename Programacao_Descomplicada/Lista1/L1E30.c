#include <stdio.h>

int main(){
    float valor = 0, cotacao = 0;

    printf("Valor em real: ");
    scanf("%f", &valor);
    printf("Cotacao do dolar: ");
    scanf("%f", &cotacao);

    printf("O valor em dolares eh %.2f", (valor / cotacao));

    return 0;
}