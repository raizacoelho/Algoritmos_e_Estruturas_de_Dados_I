#include <stdio.h>
#include <math.h>

int main(){
    float a = 0, b = 0, hipotenusa = 0;

    printf("Entre com o valor de a: ");
    scanf("%f", &a);
    printf("Entre com o valor de b: ");
    scanf("%f", &b);

    hipotenusa = sqrt(pow(a, 2) + pow(b, 2));

    printf("O valor da hipotenusa eh %.2f", hipotenusa);
    
    return 0;
}