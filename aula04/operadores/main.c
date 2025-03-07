#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2;
    int n3=1;

    printf("n1 = ");
    scanf("%f", &n1);

    printf("n2 = ");
    scanf("%f", &n2);


    printf("n1 = %.2f e n2 = %.2f \n", n1, n2);
    printf("soma: %.2f \n", n1+n2);
    printf("subtracao: %.2f \n", n1-n2);
    printf("multiplicacao: %.2f \n", n1*n2);
    printf("divisao: %.2f \n", n1/n2);


    printf("\n%d", n3);
    n3++;
    printf("\n%d", n3);
    n3 += 2;
    printf("\n%d", n3);

    return 0;
}
