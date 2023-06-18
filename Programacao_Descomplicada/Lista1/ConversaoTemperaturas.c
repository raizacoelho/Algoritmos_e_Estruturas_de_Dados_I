#include <stdio.h>

int menu(void);
float le_celcius(void);
float le_fahrenheit(void);
float le_kelvin(void);
float celcius_para_fahrenheit(float input);
float celcius_para_kelvin(float input);
float fahrenheit_para_celcius(float input);
float fahrenheit_para_kelvin(float input);
float kelvin_para_celcius(float input);
float kelvin_para_fahrenheit(float input);
float imprime(float resultado);

int main()
{
    int escolha;
    float celcius, fahrenheit, kelvin;

    do
    {
        escolha = menu();

        switch (escolha)
        {
        case 0:
            break;
        case 1:
            celcius = le_celcius();
            imprime(celcius_para_fahrenheit(celcius));
            break;
        case 2:
            celcius = le_celcius();
            imprime(celcius_para_kelvin(celcius));
            break;
        case 3:
            fahrenheit = le_fahrenheit();
            imprime(fahrenheit_para_celcius(fahrenheit));
            break;
        case 4:
            fahrenheit = le_fahrenheit();
            imprime(fahrenheit_para_kelvin(fahrenheit));
            break;
        case 5:
            kelvin = le_kelvin();
            imprime(kelvin_para_celcius(kelvin));
            break;
        case 6:
            kelvin = le_kelvin();
            imprime(kelvin_para_fahrenheit(kelvin));
            break;
        }
    } while (escolha != 0);

    return 0;
}

int menu()
{
    int auxiliar;

    printf("Conversor de temperaturas!\n");
    printf("0. Encerrar o Programa \n1. Celsius para Fahrenheit \n2. Celcius para Kelvin \n3. Fahrenheit para Celcius \n4. Fahrenheit para Kelvin \n5. Kelvin para Celcius \n6. Kelvin para Fahrenheit\n");
    printf("Entre com o valor correspondente a operacao desejada: ");
    scanf("%d", &auxiliar);

    return auxiliar;
}

float le_celcius()
{
    float auxiliar;

    printf("Entre com o valor da temperatura em Celcius: ");
    scanf("%f", &auxiliar);

    return auxiliar;
}

float le_fahrenheit()
{
    float auxiliar;

    printf("Entre com o valor da temperatura em Fahrenheit: ");
    scanf("%f", &auxiliar);

    return auxiliar;
}

float le_kelvin()
{
    float auxiliar;

    printf("Entre com o valor da temperatura em Kelvin: ");
    scanf("%f", &auxiliar);

    return auxiliar;
}

float celcius_para_fahrenheit(float input)
{
    float celcius, fahrenheit;

    celcius = input;
    fahrenheit = (celcius * 1.8) + 32;

    return fahrenheit;
}

float celcius_para_kelvin(float input)
{
    float celcius, kelvin;

    celcius = input;
    kelvin = celcius + 273.15;

    return kelvin;
}

float fahrenheit_para_celcius(float input)
{
    float fahrenheit, celcius;

    fahrenheit = input;
    celcius = (5 * (fahrenheit - 32)) / 9;

    return celcius;
}

float fahrenheit_para_kelvin(float input)
{
    float fahrenheit, kelvin;

    fahrenheit = input;
    kelvin = ((fahrenheit - 32) * (5 / 9)) + 273.15;

    return kelvin;
}

float kelvin_para_celcius(float input)
{
    float kelvin, celcius;

    kelvin = input;
    celcius = kelvin - 273.15;

    return celcius;
}

float kelvin_para_fahrenheit(float input)
{
    float kelvin, fahrenheit;

    kelvin = input;
    fahrenheit = ((kelvin - 273.15) * (5 / 9)) + 32;

    return fahrenheit;
}

float imprime(float resultado)
{
    float auxiliar = resultado;

    printf("O valor da temperatura convertida e: %.2f\n\n", auxiliar);

    return 0;
}