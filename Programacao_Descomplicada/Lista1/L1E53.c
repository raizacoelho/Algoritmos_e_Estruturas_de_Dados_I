#include <stdio.h>

int main(){
    float c = 0, l = 0, p = 0, custo = 0;
    
    printf("Comprimento: ");
    scanf("%f", &c);
    printf("Largura: ");
    scanf("%f", &l);
    printf("Preco do metro de tela: ");
    scanf("%f", &p);

    custo = ((2 * c) + (2 * l)) * p;

    printf("O custo para cercar esse terreno com tela eh: %.2f", custo);

    return 0;
}