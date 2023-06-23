#include <stdio.h>

struct dados_pessoais
{
    char nome[20];
    int idade;
    char endereco[40];
};

int main()
{
    struct dados_pessoais pessoa;

    printf("Entre com o nome: ");
    scanf("%s", pessoa.nome);

    printf("Entre com a idade: ");
    scanf("%d", &pessoa.idade);

    printf("Entre com o endereco: ");
    scanf("%s", pessoa.endereco);

    printf("\nDados cadastrados:\n");
    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Endereco: %s\n", pessoa.endereco);

    return 0;
}