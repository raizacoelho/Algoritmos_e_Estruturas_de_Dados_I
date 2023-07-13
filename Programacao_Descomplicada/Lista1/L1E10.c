#include <stdio.h>

int main(){
    float kmh = 0, mps = 0;

    printf("Entre com a velocidade em km/h: ");
    scanf("%f", &kmh);

    mps = kmh / 3.6;

    printf("A velocidade em m/s eh %.2f", mps);

    return 0;
}