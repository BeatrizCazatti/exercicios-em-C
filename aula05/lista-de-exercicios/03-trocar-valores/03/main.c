#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    //3.Escreva um algoritmo que armazene o valor 10 em uma vari�vel A e o valor 20 em uma vari�vel B.
    //A seguir (utilizando apenas atribui��es entre vari�veis) crie uma forma de trocar os seus conte�dos fazendo com que o valor que est� em A passe para B e vice-versa.
    //Ao final, mostrar os valores que ficaram armazenados nas vari�veis.

    int A=10, B=20, aux;
    printf("A=%d B=%d", A, B);
    aux = A;
    A = B;
    B = aux;
    printf("\nA=%d B=%d", A, B);
    return 0;
}
