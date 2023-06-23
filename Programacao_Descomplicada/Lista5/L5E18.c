#include <stdio.h>

int main()
{
    char frase[50], L1, L2;

    printf("Entre uma frase (maximo 50 caracteres): ");
    scanf("%s", frase);

    printf("Entre com o caractere a ser substituido: ");
    scanf(" %c", &L1);
    // printf("Entre com o caractere utilizado para substituicao: ");
    // L2 = getchar();

    // printf("A frase escolhida foi: %s\n", frase);
    // printf("O caractere %c sera substituido por $c.", L1, L2);

    return 0;
}