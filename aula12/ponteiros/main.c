#include <stdio.h>
/*++(*ptr)	Incrementa o conteúdo apontado
*ptr++	Incrementa o ponteiro (não o valor apontado)*/
int incrementa(int *num) {
    return *num++;
}

int main () {
    int num;
    scanf("%d", &num);
    
    printf("%d", incrementa(&num));

}