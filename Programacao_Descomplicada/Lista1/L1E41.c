#include <stdio.h>

int main(){
    float valor = 0, numHoras = 0, salario = 0, adicional = 0;

    printf("Entre com o valor da hora de trabalho (reais): ");
    scanf("%f", &valor);
    printf("Entre com a quantidade de horas trabalhadas: ");
    scanf("%f", &numHoras);

    salario = valor * numHoras;
    adicional = salario + ((salario * 10) / 100);

    printf("O valor a ser pago eh %.2f", adicional);
    
    return 0;
}