#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //7.Escreva um algoritmo para ler o número total de eleitores de um município, o número de votos brancos, nulos e válidos.
    //Calcular e escrever o percentual que cada um representa em relação ao total de eleitores.

    setlocale(LC_ALL, "Portuguese");

    int totalEleitores, votosBrancos, votosNulos, votosValidos;
    float percBrancos, percNulos, percValidos;
    printf("total de eleitores: ");
    scanf("%d", &totalEleitores);

    printf("total de votos brancos: ");
    scanf("%d", &votosBrancos);

    printf("total de votos nulos: ");
    scanf("%d", &votosNulos);

    printf("total de votos válidos: ");
    scanf("%d", &votosValidos);

    percBrancos = (votosBrancos*100)/totalEleitores;
    percNulos = (votosNulos*100)/totalEleitores;
    percValidos = (votosValidos*100)/totalEleitores;

    printf("%d eleitores %.1f%%brancos %.1f%%nulos %.1f%%válidos", totalEleitores, percBrancos, percNulos, percValidos);
    return 0;
}
