#include <stdio.h>

int main(){
    float lado = 0, area = 0;

    printf("Entre com o lado do quadrado: ");
    scanf("%d", &lado);

    area = 2 * lado;

    printf("A area eh %d", area);

    return 0;
}