#include <stdio.h>

int main(){
    float numero;

    printf("Valor: ");
    scanf("%f", &numero);

    printf("A quinta parte de %.2f eh %.2f", numero, (numero/5));

    return 0;
}