#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    //1.Escreva um algoritmo na Linguagem C que receba o preço de um produto, calcule e mostre o novo preço, sabendo-se que este sofreu um desconto de 10%.

    float preco, novoPreco;

    printf("Digite o preço atual do produto: ");
    scanf("%f", &preco);

    novoPreco = preco - 0.1*preco;
    printf("\nNovo preço do produto é %.2f", novoPreco);


    return 0;
}
