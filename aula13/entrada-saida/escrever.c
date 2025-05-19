#include <stdio.h>

int main () {
    FILE *arq;
    char palavra[256];

    arq = fopen("palavras.txt", "a");
    if(arq){
        do{
            fputs(palavra, arq);
            printf("Digite uma palavra: ");
            fgets(palavra, 256, stdin);
        }while(palavra[0] != '0');
    }else{
        printf("Erro!");
    }
    fclose(arq);
    return 0;
}