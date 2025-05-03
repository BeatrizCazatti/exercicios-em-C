#include <stdio.h>
#include "ajuda.h" // Arquivo de cabeçalho com os protótipos das funções

int main () {
    int n1, n2, ret_s, ret_m;
    char msg[] = "Bem vinda, digite n1 e n2:";

    mensagem(msg);

    scanf("%d", &n1);
    scanf("%d", &n2);

    ret_s = soma(n1, n2);
    printf("A soma de %d e %d eh %d\n", n1, n2, ret_s);
    
    ret_m = multiplicacao(n1, n2);
    printf("A multiplicacao de %d e %d eh %d\n", n1, n2, ret_m);
    return 0;
}