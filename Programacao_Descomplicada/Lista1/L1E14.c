#include <stdio.h>

int main(){
    float graus = 0, radianos = 0;

    printf("Entre com o angulo em graus: ");
    scanf("%f", &graus);

    radianos = graus * (3.14 / 180);

    printf("O angulo em radianos eh %.2f", radianos);

    return 0;
}