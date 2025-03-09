#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    //5.Escreva um algoritmo para ler as dimensões de um retângulo (base e altura), calcular e escrever a área do retângulo.
    float base, altura;
    setlocale(LC_ALL, "Portuguese");

    printf("base: ");
    scanf("%f", &base);

    printf("altura: ");
    scanf("%f", &altura);

    printf("O valor da área desse retângulo é %.2f ", base*altura);

    return 0;
}
