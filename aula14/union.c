#include <stdio.h>

//em uma **struct**, cada campo ocupa seu próprio espaço na memória.(uso de memória: soma dos tamanhos)
//em uma **union**, todos os campos compartilham o mesmo espaço na memória. ou seja, só um campo pode conter um valor válido de cada vez.(uso de memória: tamanho do maior)

union numeros {
    int num1, num2, num3, num4;
}n;
int main () {
    n.num1 = 1;
    printf("O valor de num1 eh: %d\n", n.num1);
    n.num2 = 2;
    printf("O valor de num2 eh: %d\n", n.num2);
    n.num3 = 4;
    printf("O valor de num3 eh: %d\n", n.num3);
    n.num4 = 8;
    printf("O valor de num4 eh: %d\n", n.num4);

    //union sobrescreve o 
    printf("O valor de num1 eh: %d\n", n.num1);
    printf("O valor de num2 eh: %d\n", n.num2);
    printf("O valor de num3 eh: %d\n", n.num3);
    printf("O valor de num4 eh: %d\n", n.num4);

    return 0;
}