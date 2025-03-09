#include <stdio.h>
#include <stdlib.h>

int main()
{
    //6.Escreva um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e mês com 30 dias.
    int anos, meses, dias, totalDias;
    printf("Anos: ");
    scanf("%d", &anos);

    printf("Meses: ");
    scanf("%d", &meses);

    printf("Dias: ");
    scanf("%d", &dias);

    totalDias = anos*365 + meses*30 + dias;
    printf("A idade em dias corridos = %d ", totalDias);
    return 0;
}
