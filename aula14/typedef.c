#include <stdio.h>

//typedef não cria novos tipos, apenas renomeia os existentes. tornando o código mais legível, fácil de manter e menos verboso


int main () {
//1-simplificar declaração de struct
//sem typedef 
struct Aluno {
    char nome[50];
    int idade;
};
struct Aluno a1;

//com typedef
typedef struct {
    char nome[50];
    int idade;
} Aluno;

Aluno a1;



//2-tornar ponteiros mais legíveis
typedef int* IntPtr;

IntPtr p1, p2;  // mais claro do que: int *p1, *p2;



//3-facilitar o uso de tipos complexos
typedef unsigned long long ULL;
ULL valor = 123456789012345ULL;



//4-declarar tipos funcionais (funções como parâmetros)
//sem typedef
int soma(int a, int b) {
    return a + b;
}

void aplicar(int (*f)(int, int), int x, int y) {
    printf("Resultado: %d\n", f(x, y));
}

//com typedef
typedef int (*Operacao)(int, int);

int soma(int a, int b) {
    return a + b;
}

void aplicar(Operacao op, int x, int y) {
    printf("Resultado: %d\n", op(x, y));
}

int main() {
    aplicar(soma, 10, 5);  // Resultado: 15
    return 0;
}



//5-facilitar o uso de enums
typedef enum {
    VERDE, AMARELO, VERMELHO
} Cor;

Cor semaforo = VERMELHO;
}