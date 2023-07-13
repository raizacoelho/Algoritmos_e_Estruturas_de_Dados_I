#include <stdio.h>

int main(){
    float a1 = 0, a2 = 0, a3 = 0, Pa1 = 0, Pa2 = 0, Pa3 = 0;
    float totApostas = 0, premio = 0;

    printf("Valor de aposta amigo 1: ");
    scanf("%f", &a1);
    printf("Valor de aposta amigo 2: ");
    scanf("%f", &a2);
    printf("Valor de aposta amigo 3: ");
    scanf("%f", &a3);
    printf("Valor total do premio: ");
    scanf("%f", &premio);

    totApostas = a1 + a2 + a3;
    Pa1 = (a1 / totApostas) * 100;
    Pa2 = (a2 / totApostas) * 100;
    Pa3 = (a3 / totApostas) * 100;

    printf("O amigo 1 recebera %.2f%% do premio, totalizando %.2f.\n", Pa1, ((premio * Pa1) / 100));
    printf("O amigo 2 recebera %.2f%% do premio, totalizando %.2f.\n", Pa2, ((premio * Pa2) / 100));
    printf("O amigo 3 recebera %.2f%% do premio, totalizando %.2f.\n", Pa3, ((premio * Pa3) / 100));

    return 0;
}

/*
Tres amigos jogaram na loteria. Caso eles ganhem, o premio deve ser repartido proporcionalmente ao valor que cada deu para a realizacao da aposta. 
Faca um programa que leia quanto cada apostador investiu, o valor do premio, e imprima quanto cada um ganharia do premio com base no valor investido
*/