#include <stdio.h>

int main(){
    float milhas = 0, km = 0;

    printf("Entre com a distancia em km: ");
    scanf("%f", &km);

    milhas = km / 1.61;

    printf("A distancia em milhas eh %.2f", milhas);

    return 0;
}