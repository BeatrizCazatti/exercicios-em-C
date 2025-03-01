#include <stdio.h>
#include <stdlib.h>

int main()
{
    //SINTAXE
    //scanf("expressão de controle", lista de argumentos);
    /*OBS: No caso da printf os argumentos são expressões interessadas no ”right-value”,
    mas no caso da scanf devemos usar “left-values” (interessados em atribuir os valores obtidos do fluxo de entrada para variáveis)
    fornecendo como parâmetros o endereço das variáveis onde serão armazenados os valores obtidos no fluxo de entrada.
    Este assunto está relacionado com “ponteiros”.
    A forma mais simples de especificar que queremos atribuir um valor à variável é usando "&"precedendo a variável X (endereço de X)*/

    int num1, num2, soma;
    printf("valor de num1: ");
    scanf("%d", &num1);

    printf("valor de num2: ");
    scanf("%d", &num2);

    soma = num1 + num2;
    printf("A soma desses valores = %d \n", soma);
    printf("%d + %d = %d", num1, num2, soma);

    return 0;
}
