#include <stdio.h>

int main(){
    float graus = 0, radianos = 0;

    printf("Entre com o angulo em radianos: ");
    scanf("%f", &radianos);

    graus = radianos * (180 / 3.14);

    printf("O angulo em graus eh %.2f", graus);

    return 0;
}