#include <stdio.h>
#include <stdlib.h>

int main()
{

    int v1, v2, *x, *y;

    printf("Entre com o primeiro valor: ");
    scanf("%d", &v1);
    printf("Entre com o segundo valor: ");
    scanf("%d", &v2);

    x = &v1;
    y = &v2;

    printf("O endereco da variavel v1(%d) e: %x\n", v1, x);
    printf("O endereco da variavel v2(%d) e: %x\n", v2, y);

    if (x > y)
    {
        printf("O conteudo do endereco de maior valor e: %d\n", *x);
    }
    else
    {
        printf("O conteudo do endereco de maior valor e: %d\n", *y);
    }

    free(x);
    free(y);

    return 0;
}