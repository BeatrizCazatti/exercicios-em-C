#include <stdio.h>
#include <stdlib.h>

int main () {
    //vetor = array uni dimensional
    char nome[30];
    char listaNomes[3][30];

    gets(nome); //cuidado com o overflow

    printf("Hello, %s\n", nome);

    //matriz = array multi-dimensional

    for(int i = 0; i < 4; i++){
        printf("\nnome[%d]: ", i);
        scanf("%s", listaNomes[i]);
    }

    for(int i = 0; i < 4; i++){
        printf("%s\n", listaNomes[i]);
    }
}