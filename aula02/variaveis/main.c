#include <stdio.h>
#include <stdlib.h>

int main()
{
    //INTEIRO int
    int num1 = 10;
    int num2 = 20;
    /*Especificador de formato
    int     ==>%d
    float   ==>%f
    char    ==>%c

    OBS:%d é usado exclusivamente com números decimais inteiros,
    já o %i é usado para inteiros também, mas independente da base(octal, decimal ou hexadecimal).
    */
    printf("o valor de num1 = %d", num1);
    printf("\n");
    printf("o valor de num2 = %d \n", num2);

    printf("o valor de num1+num2 = %d \n", num1+num2);
    printf("o valor de num1/num2 = %d \n", num1/num2);


    //DECIMAL float
    float a = 1;
    float b = 2;
    printf("%f \n", a);
    //quantidade de casas decimais
    printf("%.2f \n", b);

    printf("o valor de a/b = %f \n", a/b);


    //CARACTER char
    //devem ser usadas aspas simples
    char sexo = 'F';
    printf("%c \n", sexo);


    //BOOLEANA _Bool

    system("pause");
    return 0;
}
