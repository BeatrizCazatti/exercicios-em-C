#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //4.Escreva um algoritmo para ler um valor (do teclado) e escrever (na tela) o seu sucessor e antecessor.

    setlocale(LC_ALL, "Portuguese");

    int num;
    printf("Digite um n�mero: ");
    scanf("%d", &num);

    printf("O antecessor de %d � %d\n", num, num-1);
    printf("O sucessor de %d � %d", num, num+1);

    return 0;
}
