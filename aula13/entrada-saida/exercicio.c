
#include <stdio.h>

int main () {
    FILE *arq;
    char nome_arquivo[15];

    printf("Digite o nome do arquivo:");
    fgets(nome_arquivo, 15, stdin);
    nome_arquivo[strcspn(nome_arquivo, "\n")] = '\0';

    arq = fopen(nome_arquivo, "r");
    if(arq) {
        printf("Abri");
    }else{
        printf("Nada");
    }

    fclose(arq);

    return 0;
}
