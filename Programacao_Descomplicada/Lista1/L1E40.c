#include <stdio.h>

int main(){
    int dias = 0, pagamento = 0;
    float desconto = 0;

    printf("Numero de dias trabalhados: ");
    scanf("%d", &dias);

    pagamento = (30 * dias);
    desconto = pagamento - ((pagamento * 8) / 100);

    printf("O valor a ser pago eh %.2f", desconto);

    return 0;
}