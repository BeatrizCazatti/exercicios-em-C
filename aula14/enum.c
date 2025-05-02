#include <stdio.h>
//abreviação de enumaration é uma forma de definir um conjunto de constantes inteiras com nomes legíveis. Ele é usado para tornar o código mais claro e fácil de entender, substituindo números mágicos por nomes descritivos.

enum diasSemana {
    domingo,
    segunda,
    terca,
    quarta,
    quinta,
    sexta,
    sabado
};

int main () {
    enum diasSemana feriado, lpI, hoje;

    feriado = quinta;  
    lpI = segunda;      
    hoje = 6;      

    if (hoje == feriado) {
        printf("ebaaa\n");
    }
    else if (hoje == lpI) {
        printf("aula do abelha\n");
    }

    return 0;
}
