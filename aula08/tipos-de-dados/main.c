#include <stdio.h>
#include <stdlib.h>

int main () {
    char alfabeto[26];

    for (int i = 0; i < 26; i++) {
        alfabeto[i] = 'a' + i;  // letras de a (97) até z (122)
    }

    for (int i = 0; i < 26; i++) {
        printf("%d == %c \n", alfabeto[i], alfabeto[i]);
    }
    
    //OBS: a linguagem C não possui tipo de dado boolean, mas reconhece o valor 0 como falso e qualquer valor diferente de 0 como verdadeiro
    return 0;
}