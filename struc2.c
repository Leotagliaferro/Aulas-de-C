#include <stdio.h>

struct Aluno {
    char nome[50];
    int matricula;
    char curso[50];
};

int main () {
    struct Aluno aluno[5]; 
        int i;


        for (i = 0; i < 5; i++) {
            printf("digite o nome: ");
            scanf("%s", aluno[i].nome);
            printf("Digite a matricula: ");
            scanf("%d", &aluno[i].matricula);
            printf("Digite o nome do curso: ");
            scanf("%s", aluno[i].curso);
        }

        for (i = 0; i < 5; i++) {
            printf("nome: %s | idade: %d | endereco: %s\n", aluno[i].nome, aluno[i].matricula, aluno[i].curso);
        }

    return 0;
}