#include <stdio.h>

int main()
{
    int i = 0, contador = 0;
    char binario[9];

    printf("Entre com uma serie de 1's e 0's de comprimento 8: ");
    scanf("%s", binario);

    printf("A serie armazenada eh: %s\n", binario);

    while (binario[i] != '\0')
    {
        if (binario[i] == '1')
        {
            contador++;
        }
        i++;
    }

    printf("A serie tem %i 1's.", contador);

    return 0;
}