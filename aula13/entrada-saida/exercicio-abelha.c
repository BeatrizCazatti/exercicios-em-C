//Escreva um programa que leia um arquivo texto e imprima na tela palavra a palavra com uma palavra por linha. 

#include <stdio.h>

int main () {
    FILE *arq;
    char c;

    arq = fopen("arquivo.txt", "r");
    if(arq){
        printf("Achei! O conteudo dele eh:\n");
        while((c = getc(arq)) != EOF){
            if(c == ' '){
                printf("\n");
            } 
            printf("%c", c);
        }
        fclose(arq);
    }else{
        printf("Nada encontrado");
    }
    return 0;
}