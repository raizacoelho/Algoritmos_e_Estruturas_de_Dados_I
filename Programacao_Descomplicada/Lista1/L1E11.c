#include <stdio.h>

int main(){
    float kmh = 0, mps = 0;

    printf("Entre com a velocidade em m/s: ");
    scanf("%f", &mps);

    kmh = mps * 3.6;

    printf("A velocidade em km/h eh %.2f", kmh);

    return 0;
}