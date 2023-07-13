#include <stdio.h>
#include <math.h>

int main(){
    float altura = 0, raio = 0, volume = 0;

    printf("Entre com a altura do cilindro: ");
    scanf("%f", &altura);
    printf("Entre com o raio do cilindro: ");
    scanf("%f", &raio);

    volume = 3.141592 * pow(raio, 2) * altura;

    printf("O volume eh %.2f", volume);

    return 0;
}