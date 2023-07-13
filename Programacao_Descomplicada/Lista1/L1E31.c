#include <stdio.h>

int main(){
    int numero = 0;
    
    printf("Entre com um numero inteiro: ");
    scanf("%d", &numero);

    printf("O antecessor de %d eh %d e o sucessor eh %d", numero, (numero - 1), (numero + 1));

    return 0;
}