#include <stdio.h>

int main(){
    int n1, n2, n3, soma = 0;

    printf("Primeiro valor: ");
    scanf("%d", &n1);
    printf("Segundo valor: ");
    scanf("%d", &n2);
    printf("Terceiro valor: ");
    scanf("%d", &n3);

    soma = n1 + n2 + n3;

    printf("A soma eh %d", soma);

    return 0;
}