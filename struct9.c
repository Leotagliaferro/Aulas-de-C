#include <stdio.h>

struct Produto {
    char nome[50];
    float preco;
    int quantidade;
};

int main() {
    struct Produto produto;

    printf("Digite o nome do produto: ");
    scanf("%s", produto.nome); 
    printf("Digite o preco do produto: ");
    scanf("%f", &produto.preco);
    printf("Digite a quantidade em estoque: ");
    scanf("%d", &produto.quantidade);

    float valor_total = produto.preco * produto.quantidade;

    printf("\nProduto: %s\n", produto.nome);
    printf("Preco unitario: %.2f\n", produto.preco);
    printf("Quantidade em estoque: %d\n", produto.quantidade);
    printf("Valor total em estoque: %.2f\n", valor_total);

    return 0;
}
