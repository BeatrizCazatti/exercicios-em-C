#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    //1.Escreva um algoritmo na Linguagem C que receba o pre�o de um produto, calcule e mostre o novo pre�o, sabendo-se que este sofreu um desconto de 10%.

    float preco, novoPreco;

    printf("Digite o pre�o atual do produto: ");
    scanf("%f", &preco);

    novoPreco = preco - 0.1*preco;
    printf("\nNovo pre�o do produto � %.2f", novoPreco);


    return 0;
}
