#include <stdio.h>
#include <stdlib.h>

int main()
{
    //SINTAXE
    //scanf("express�o de controle", lista de argumentos);
    /*OBS: No caso da printf os argumentos s�o express�es interessadas no �right-value�,
    mas no caso da scanf devemos usar �left-values� (interessados em atribuir os valores obtidos do fluxo de entrada para vari�veis)
    fornecendo como par�metros o endere�o das vari�veis onde ser�o armazenados os valores obtidos no fluxo de entrada.
    Este assunto est� relacionado com �ponteiros�.
    A forma mais simples de especificar que queremos atribuir um valor � vari�vel � usando "&"precedendo a vari�vel X (endere�o de X)*/

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
