#include <stdio.h>
#include <math.h>

int main(){
    float raio = 0, area = 0;

    printf("Valor do raio do circulo: ");
    scanf("%f", &raio);

    area = 3.141592 * pow(raio, 2);

    printf("A area do circulo eh %.4f", area);

    return 0;
}