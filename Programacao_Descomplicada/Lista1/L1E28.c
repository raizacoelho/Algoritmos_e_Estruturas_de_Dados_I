#include <stdio.h>
#include <math.h>

int main(){
    int n1 = 0, n2 = 0, n3 = 0, soma = 0;

    printf("Primeiro valor: ");
    scanf("%d", &n1);
    printf("Segundo valor: ");
    scanf("%d", &n2);
    printf("Terceiro valor: ");
    scanf("%d", &n3);

    soma = pow(n1, 2) + pow(n2, 2) + pow(n3, 2);

    printf("A soma dos quadrados dos valores eh %d", soma);

    return 0;
}