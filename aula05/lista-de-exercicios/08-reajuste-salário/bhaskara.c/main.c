#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calculaDelta (int *a, int *b, int *c){
        return (*b * *b) - 4 * *a * *c;
	}


void duasRaizes (int *a, int *b, float *delta){
    float x1, x2;
    x1 = (-*b + sqrt(*delta))/2 * *a;
    x2 = (-*b - sqrt(*delta))/2 * *a;
    printf("\nx1=%.2f e x2=%f \n", x1, x2);
}

float raizesComplexas (int *a, int *b, float *delta){

}

void umaRaiz (int *a, int *b){
    float x;
    x = (- *b)/2 * *a;
    printf("\nx=%f \n", x);
}


int main () {
    //declara vari�veis
	int a, b, c;
	float delta;

    //leitura de vari�veis da equa��o
    printf("a: ");
    scanf("%d/n", &a);
    printf("b: ");
    scanf("%d/n", &b);
    printf("c: ");
    scanf("%d/n", &c);

    //chama fun��o
	delta = calculaDelta(&a, &b, &c);
    printf("delta=%f \n\n", delta);

	//desvio condicional
	if (delta > 0.001) {
        printf("duas raizes\n");
        duasRaizes(&a, &b, &delta);
	} else if (delta < -0.001) {
        printf("raizes complexas\n");
        raizesComplexas(&a, &b, &delta);
	} else {
        printf("uma raiz\n");
        umaRaiz(&a, &b);
	}

    return 0;
}
