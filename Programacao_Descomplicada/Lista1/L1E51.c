#include <stdio.h>
#include <math.h>

int main(){
    float x = 0, y = 0, distancia = 0;

    printf("Entre com o valor de x: ");
    scanf("%f", &x);
    printf("Entre com o valor de x: ");
    scanf("%f", &y);

    distancia = sqrt(pow(x, 2) + pow(x, 2));

    printf("A distancia da origem eh %.2f", distancia);
    
    return 0;
}