#include <stdio.h>

int main(){
    int segundos = 0, horas = 0, minutos = 0, auxiliar = 0;

    printf("Entre com os segundos: ");
    scanf("%d", &segundos);

    // 1h = 60 minutos = 3600 segundos
    horas = segundos / 3600;
    auxiliar = segundos % 3600;
    minutos = auxiliar / 60;
    segundos = auxiliar % 60;

    printf("O resultado da conversao eh: %d hora(s), %d minuto(s) e %d segundo(s)", horas, minutos, segundos);

    return 0;
}

