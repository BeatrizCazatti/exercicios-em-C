#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    //3.Escreva um algoritmo que armazene o valor 10 em uma variável A e o valor 20 em uma variável B.
    //A seguir (utilizando apenas atribuições entre variáveis) crie uma forma de trocar os seus conteúdos fazendo com que o valor que está em A passe para B e vice-versa.
    //Ao final, mostrar os valores que ficaram armazenados nas variáveis.

    int A=10, B=20, aux;
    printf("A=%d B=%d", A, B);
    aux = A;
    A = B;
    B = aux;
    printf("\nA=%d B=%d", A, B);
    return 0;
}
