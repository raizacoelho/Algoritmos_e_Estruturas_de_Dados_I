#include <stdio.h>

int main(){
    float n1 = 0, n2 = 0, n3 = 0, n4 = 0, media = 0;

    printf("Primeira nota: ");
    scanf("%f", &n1);
    printf("Segunda nota: ");
    scanf("%f", &n2);
    printf("Terceira nota: ");
    scanf("%f", &n3);
    printf("Quarta nota: ");
    scanf("%f", &n4);

    media = (n1 + n2 + n3 + n4) / 4;

    printf("A media aritmetica eh %.2f", media);

    return 0;
}