#include <stdio.h>

int main(){
    float salario = 0, aumento = 0;

    printf("Entre com o salario: ");
    scanf("%f", &salario);

    aumento = salario + ((salario * 25) / 100);

    printf("O valor do novo salario com aumento eh %.2f", aumento);

    return 0;
}