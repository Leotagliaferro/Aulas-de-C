#include <stdio.h>

struct Funcionario {
    char nome[50];
    float salario_base;
    int tempo_de_empresa;
};

int main() {
    struct Funcionario funcionario;
    
    printf("Digite seu nome: ");
    scanf("%s", funcionario.nome);
    printf("Digite seu salario: ");
    scanf("%f", &funcionario.salario_base);
    printf("Quanto tempo de empresa voce possui?: ");
    scanf("%d", &funcionario.tempo_de_empresa);

    float bonus;
    if (funcionario.tempo_de_empresa <= 3) {
        bonus = funcionario.salario_base * 0.05f;
    } else {
        bonus = funcionario.salario_base * 0.10f;
    }

    float total = funcionario.salario_base + bonus;

    printf("Seu nome e: %s | Salario base: %.2f | Tempo de empresa: %d | Salario com bonus: %.2f\n",
           funcionario.nome, funcionario.salario_base, funcionario.tempo_de_empresa, total);

    return 0;
}
