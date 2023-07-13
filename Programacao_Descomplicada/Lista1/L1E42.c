#include <stdio.h>

int main(){
    float sBase = 0, salario = 0;
    //float alt = 0;

    printf("Entre com o valor do salario base: ");
    scanf("%f", &sBase);

    salario = sBase + ((sBase * 5) / 100 ) - ((sBase * 7) / 100);
    //alt = sBase - ((sBase * 2) / 100 );

    printf("Salario a receber: %.2f", salario);
    //printf("\nTeste = %.2f", alt);

    return 0;
}