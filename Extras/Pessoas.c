#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[30];
    int idade;
    int altura;
} Pessoa;

int main()
{
    int escolha = 0, i = 0, contador = 0;
    Pessoa *p = NULL;
    p = (Pessoa *)malloc(sizeof(Pessoa));

    if (p == NULL)
    {
        printf("Não foi possível alocar memória.\n");
        return 0;
    }

    do
    {
        printf("Voce deseja adicionar informaçoes de (mais) uma pessoa? Se sim, digite 1. Caso contrario, digite 0: ");
        scanf("%d", &escolha);

        if (contador != 0)
        {
            p = (Pessoa *)realloc(p, (contador + 1) * sizeof(Pessoa));

            if (p == NULL)
            {
                printf("Não foi possível alocar memória.\n");
                return 0;
            }
        }

        switch (escolha)
        {
        case 0:
            break;
        case 1:
            printf("Nome: ");
            scanf("%s", &p[i].nome);
            printf("Idade: ");
            scanf("%d", &p[i].idade);
            printf("Altura: ");
            scanf("%d", &p[i].altura);

            i++;
            contador++;
        }

    } while (escolha != 0);

    printf("\nCompilado dos dados:\n");

    for (i = 0; i < contador; i++)
    {
        printf("Nome: %s\n", p[i].nome);
        printf("Idade: %d\n", p[i].idade);
        printf("Altura: %d\n", p[i].altura);
        printf("\n");
    }

    for (i = 0; i < contador; i++)
    {
        free(p[i]);
    }

    return 0;
}

typedef struct
{
    char nome2[40];
    int idade2;
    int altura2;
} Pessoa2;

int main()
{
    Pessoa2 *p;
    p = (Pessoa2 *)malloc(sizeof(Pessoa2));

    p = (Pessoa2 *)realloc(p, 2 * sizeof(Pessoa));

    p = (Pessoa *)realloc(p, (contador + 1) * sizeof(Pessoa));
    return 0;
}