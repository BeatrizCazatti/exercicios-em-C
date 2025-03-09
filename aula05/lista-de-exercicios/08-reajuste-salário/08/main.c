#include <stdio.h>
#include <stdlib.h>

int main()
{
    //8.Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste. Calcular e escrever o valor do novo salário.
    float salario, reajuste, novoSalario;

    printf("Digite o valor do salario: ");
    scanf("%f", &salario);

    printf("Reajuste: ");
    scanf("%f", &reajuste);

    novoSalario = salario + (reajuste/100)*salario;
    printf("O novo valor é %.2f", novoSalario);


    return 0;
}
