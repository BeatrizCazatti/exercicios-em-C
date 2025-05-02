#include <stdio.h>
#include <stdlib.h>

int main () {
    int valor = 4; //0000 0100
    printf("%d\n", valor);
    
    //deslocamento de bits para direita
    valor = valor >> 2; //0000 0001 
    printf("%d\n", valor);

    valor = 4;

    //deslocamento de bits para esquerda
    valor = valor << 2; //0001 0000 
    printf("%d\n", valor);
    
    valor = 4;

    //negação
    valor = ~valor;//1111 1011
    printf("%d\n", valor);

    return 0;
}