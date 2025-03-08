#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //2.Escreva um algoritmo que calcule o IMC de uma pessoa (Índice de Massa Corporal). O cálculo do IMC é feito dividindo o peso (em quilogramas) pela altura (em metros) ao quadrado.

    setlocale(LC_ALL, "Portuguese");

    float peso, altura, imc;

    printf("peso(Kg): ");
    scanf("%f", &peso);


    printf("altura(m): ");
    scanf("%f", &altura);

    imc = peso/(altura*altura);
    printf("O valor do IMC é %.2f", imc);

    return 0;
}
