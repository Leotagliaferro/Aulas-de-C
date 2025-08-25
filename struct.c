#include <stdio.h> 

struct Pessoa {
    char nome[50];
    int idade;
    char endereco[100];
};

int main () {
    struct Pessoa pessoa;
    printf("\nDigite seu nome \n");
    scanf("%s", &pessoa.nome);
    printf("\nDigite sua idade \n");
    scanf("%d", &pessoa.idade);
    printf("\nDigite seu endereco \n");
    scanf("%s", &pessoa.endereco);
};

