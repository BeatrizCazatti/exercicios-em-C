#include <stdio.h>
#include <stdlib.h>

int main () {
    int qtd, *p;

    printf("Quantidade de vetores: ");
    scanf("%d", &qtd);

    // malloc - aloca um bloco de memória de um tamanho específico, sem inicialização. 
    // calloc - aloca um bloco de memória e inicializa todos os seus bytes com zero. 
    // realloc - redimensiona um bloco de memória previamente alocado
    p = (int*)malloc(qtd * sizeof(int));

    for(int i = 0; i < qtd; i++){
        printf("Infome o valor do vetor no index [%d]: ", i);
        scanf("%d", &p[i]);
    }
    for(int i = 0; i < qtd; i++){
        printf("valor em [%d] = %d \n", i, p[i]);
    }

    //libera memoria(desaloca)
    free(p);

    //medida de segurança: garante que um ponteiro não aponta para um local de memória inválido ou não alocado, evitando erros graves como "Segmentation Fault" ou "Null Pointer Exception"
    p == NULL

    return 0;
}