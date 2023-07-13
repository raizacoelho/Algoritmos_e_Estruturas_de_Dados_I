#include <stdio.h>

int main(){
    int numero = 0, soma = 0;
    
    printf("Entre com um numero inteiro: ");
    scanf("%d", &numero);

    soma = ((3 * numero) + 1) + ((2 * numero) - 1);

    printf("A soma eh %d", soma);

    return 0;
}