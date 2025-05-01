#include <stdio.h>
#include <stdlib.h>

int main()
{
    //8.Escreva um algoritmo para ler o sal�rio mensal atual de um funcion�rio e o percentual de reajuste. Calcular e escrever o valor do novo sal�rio.
    float salario, reajuste, novoSalario;

    printf("Digite o valor do salario: ");
    scanf("%f", &salario);

    printf("Reajuste: ");
    scanf("%f", &reajuste);

    novoSalario = salario + (reajuste/100)*salario;
    printf("O novo valor � %.2f", novoSalario);


    return 0;
}
