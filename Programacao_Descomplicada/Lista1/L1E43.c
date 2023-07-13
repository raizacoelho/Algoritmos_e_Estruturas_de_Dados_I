#include <stdio.h>

int main(){
    float vTotal = 0, desconto = 0, parcela = 0, cVista = 0, cParcela = 0;

    printf("Entre com o valor total: ");
    scanf("%f", &vTotal);

    // total com desconto
    desconto = vTotal - ((vTotal * 10) / 100);

    // valor de cada parcela (3x sem juros)
    parcela = vTotal / 3;

    // comissao vendas a vista
    cVista = (desconto * 5) / 100;

    // comissao vendas parceladas
    cParcela = (vTotal * 5) / 100;

    printf("Total a pagar com desconto de 10%%: %.2f", desconto);
    printf("Valor de cada parcela (3x sem juros): %.2f", parcela);
    printf("Comissão do vendedor (a vista): %.2f", cVista);
    printf("Comissão do vendedor (parcelado): %.2f", cParcela);

    return 0;
}