#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    //5.Escreva um algoritmo para ler as dimens�es de um ret�ngulo (base e altura), calcular e escrever a �rea do ret�ngulo.
    float base, altura;
    setlocale(LC_ALL, "Portuguese");

    printf("base: ");
    scanf("%f", &base);

    printf("altura: ");
    scanf("%f", &altura);

    printf("O valor da �rea desse ret�ngulo � %.2f ", base*altura);

    return 0;
}
