#include <stdio.h>

int main(){
    float altDegrau = 0, altUsuario = 0;

    printf("Entre com a altura do degrau: ");
    scanf("%f", &altDegrau);
    printf("Entre com a altura que o usuario deseja alcancar: ");
    scanf("%f", &altUsuario);

    printf("O usuario deve subir %0.f degraus para alcancar a altura desejada.", (altUsuario / altDegrau));
    return 0;
}