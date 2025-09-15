#include <stdio.h>

struct Alunos {
    int matricula;
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
};

int main () {
    struct Alunos aluno[5];
    int i;

    for(i = 0;i < 5; i++){
    printf("Digite o numero da matricula: ");
    scanf("%d", &aluno[i].matricula);
    printf("Digite o nome do aluno: ");
    scanf("%s", aluno[i].nome);
    printf("Digite a primeira nota: ");
    scanf("%f", &aluno[i].nota1);
     printf("Digite a segunda nota: ");
    scanf("%f", &aluno[i].nota2);
     printf("Digite a terceira nota: ");
    scanf("%f", &aluno[i].nota3);
    }

    int maiorNota = 0;
    for(i = 1; i < 5; i++) {
        if (aluno[i].nota1 > aluno[maiorNota].nota1) {
            maiorNota = i;
        }
    }

    printf("maior nota e o aluno: %s", aluno[maiorNota].nome);

    int alunoMaiorMedia = 0;

    for(i = 1; i < 5; i++) {
        if((aluno[i].nota1 + aluno[i].nota2 + aluno[i].nota3)/3 >
           (aluno[alunoMaiorMedia].nota1 + aluno[alunoMaiorMedia].nota2 + aluno[alunoMaiorMedia].nota3)/3) {
            alunoMaiorMedia = i;
        }
    }
    printf("Aluno com maior media geral: %s\n", aluno[alunoMaiorMedia].nome);


    int AlunoMenorMedia = 0;

    for(i = 1; i < 5; i++) {
        if ((aluno[i].nota1 + aluno[i].nota2 + aluno[i].nota3 )/3 < (aluno[AlunoMenorMedia].nota1 + aluno[AlunoMenorMedia].nota2 + aluno[AlunoMenorMedia].nota3) / 3 ) {
            AlunoMenorMedia = i;
        };
    }

    printf("aluno com a menor media geral: %s", aluno[AlunoMenorMedia].nome);

    
    for(i = 0; i < 5; i++ ) {
        float mediaGeral = (aluno[i].nota1 + aluno[i].nota2 + aluno[i].nota3) / 3;
        if(mediaGeral  >= 6) {
            printf("aluno %s esta aprovado - media %.2f\n", aluno[i].nome, mediaGeral);
        } else {
             printf("aluno %s esta reprovado - media%.2f\n", aluno[i].nome, mediaGeral);
        }
       
    }

    return 0;

}