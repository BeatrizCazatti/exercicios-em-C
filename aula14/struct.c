#include <stdio.h>
#include <string.h>
//strok

//struct 
struct aluno {
    char matricula[14];
    char nome[50];
    char curso[10];
    int ano_nascimento;
};
//}aluno1,aluno2;
//}aluno[2];

int main () {
    struct aluno a1;

    fgets(a1.matricula, 14, stdin);
    fgets(a1.nome, 50, stdin);
    fgets(a1.curso, 10, stdin);
    scanf("%d", &a1.ano_nascimento);

    printf("\n============ Dados do Aluno ============ \n");
    printf("Matricula: %s", a1.matricula);
    printf("Nome: %s", a1.nome);
    printf("Curso: %s", a1.curso);
    printf("Ano de Nascimento: %d", a1.ano_nascimento);
    return 0;
}