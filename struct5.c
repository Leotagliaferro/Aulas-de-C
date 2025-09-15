#include <stdio.h> 

struct Pessoa { 
    char nome[50];
    int idade; 
    float altura; 

};

int main () {
    struct Pessoa pessoa;
    
    printf("\nDigite seu nome:\n ");
    scanf("%s", pessoa.nome);
    printf("\nDigite sua idade: \n");
    scanf("%d", &pessoa.idade);
    printf("Digite sua altura");
    scanf("%f", &pessoa.altura);

    printf("O nome digitado foi: %s\n", pessoa.nome);
    printf("Sua idade e de: %d anos\n", pessoa.idade);
    printf("Sua altura e de %.2f: metros\n", pessoa.altura);
    return 0;
};