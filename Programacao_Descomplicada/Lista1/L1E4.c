#include <stdio.h>

int main(){
    float numero;

    printf("Valor: ");
    scanf("%f", &numero);

    printf("O quadrado eh %.2f", (numero*numero));

    return 0;
}