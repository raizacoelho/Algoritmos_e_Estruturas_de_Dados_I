#include <stdio.h>

int main(){
    int valor = 780000, g1 = 0, g2 = 0, g3 = 0;
    int teste = 0;

    g1 = (valor * 46) / 100;
    g2 = (valor * 32) / 100;
    g3 = valor - (g1 + g2);
    
    printf("O primeiro ganhador recebera %d\n", g1);
    printf("O segundo ganhador recebera %d\n", g2);
    printf("O terceiro ganhador recebera %d\n", g3);
    
    return 0;
}