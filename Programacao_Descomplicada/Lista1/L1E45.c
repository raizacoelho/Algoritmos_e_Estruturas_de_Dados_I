#include <stdio.h>

int main(){
    char letra;

    printf("Entre com a letra maiuscula: ");
    scanf("%c", &letra);

    printf("Sua equivalente minuscula eh %c", (letra + 32));

    return 0;
}