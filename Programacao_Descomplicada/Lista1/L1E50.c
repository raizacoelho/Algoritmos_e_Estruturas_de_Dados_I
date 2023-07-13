#include <stdio.h>

int main(){
    int idade = 0, anoAtual = 0, anoNasc = 0, auxiliar;

    printf("Sua idade: ");
    scanf("%d", &idade);
    printf("Ano atual: ");
    scanf("%d", &anoAtual);
    
    do {        
        printf("Voce ja fez aniversario esse ano? Digite 1 se sim, 2 se nao: ");
        scanf("%d", &auxiliar);
    } while (auxiliar < 1 || auxiliar > 2);

    if (auxiliar == 1){
        anoNasc = anoAtual - idade;
    } else {
        anoNasc = (anoAtual - idade) - 1;
    }

    printf("Seu ano de nascimento eh %d", anoNasc);    

    return 0;
}