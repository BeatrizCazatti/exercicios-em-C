#include <stdio.h>

int main () {
    //cria um apontador para o arquivo
    FILE *arq;
    char c;
    //fopen(nome-do-arquivo, forma-de-abertura-do-arquivo)
    //w - abrir para escrita(se não existe sera criado e se ja existe sera sobrescrito)
    //r - abre p leitura
    //wa - p adição de conteúdo(se ja existir será escrito nas linhas de baixo)

    //OBS: sempre que finalizar a manipulação do arquivo devemos fechá-lo
    arq = fopen("arquivo.txt", "r");
    if(arq){
        printf("Achei! O conteudo dele eh:\n");
        while((c = getc(arq)) != EOF){
            printf("%c", c);
        }
    }else{
        printf("Nada encontrado");
    }
    fclose(arq);
}