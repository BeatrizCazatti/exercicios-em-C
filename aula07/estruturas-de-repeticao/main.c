#include <stdio.h>
#include <stdlib.h>

int para (int num, int soma){
    //loops com número de repetições conhecido
    for(int i = 0; i < 5; i++){
        printf("Informe um numero: ");
        scanf("%d", &num);
        soma = soma + num;
    }
    return soma;
}

int enquanto (int num, int soma) {
    while (num != 999){
        //perceba que agora essa atribuição deve preceder o input de num
        //ou seja a checagem é feita antes do bloco de execução(pré-teste)
        soma = soma + num;
        printf("Informe um numero: ");
        scanf("%d", &num);
    }
    return soma;
}

int faca_enquanto (int num, int soma) {
    //a checagem é feita depois de executar o bloco (pós-teste)
    //precisar que o bloco execute ao menos uma vez
    do{
        printf("Informe um numero: ");
        scanf("%d", &num);
        soma = soma + num;
    }
    while(num =! 999);
    
    return soma;
}

int main () {
    int num = 0, soma = 0;
    //OBS: se nao inicializar soma a operação feita(antes da inicialização) é realizada com lixo de memória; diferente de num em que há uma atribuição antes, então não há problemas

    printf("A soma eh %d", enquanto(num, soma));
    return 0;
}