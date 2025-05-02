#include <stdio.h>
#include <stdlib.h>

int main () {
    char nome[20];
    char alfabeto[26];

    gets(nome);
    printf("Hello, %s", nome);

    for (int i = 0; i < 26; i++) {
        alfabeto[i] = 'a' + i;  // Letras maiúsculas de A (65) até Z (90)
    }

    for (int i = 0; i < 26; i++) {
        printf("%d == %c \n", alfabeto[i], alfabeto[i]);
    }
    
    return 0;
}