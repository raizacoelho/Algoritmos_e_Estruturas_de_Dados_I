#include <stdio.h>

int main(){
    float valor = 0, desconto = 0;

    printf("Entre com o valor: ");
    scanf("%f", &valor);

    desconto = valor - ((valor * 12) / 100);

    printf("O valor com desconto eh %.2f", desconto);

    return 0;
}



