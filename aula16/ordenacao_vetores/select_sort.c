#include <stdio.h>

void select_sort (int vetor[], int tam){
    int menor, troca;
    for (int i = 0; i < tam - 1; i++) {
        menor = i;
        for (int j = i + 1; j < tam; j++){
            if(vetor[j] < vetor[menor]){
                menor = j;
            }
        }
        troca = vetor[i];
        vetor[i] = vetor[menor];
        vetor[menor] = troca;
    }
}
int main () {
    int vetor[6] = {8, 12, 4, 9, 3, 7};

    select_sort(vetor, 6);

    for (int i = 0; i < 6; i++) {
        printf("%d ", vetor[i]);
    }
    return 0;
}