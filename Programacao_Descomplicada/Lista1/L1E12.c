#include <stdio.h>

int main(){
    float milhas = 0, km = 0;

    printf("Entre com a distancia em milhas: ");
    scanf("%f", &milhas);

    km = milhas * 1.61;

    printf("A distancia em km eh %.2f", km);

    return 0;
}