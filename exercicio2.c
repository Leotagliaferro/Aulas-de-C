#include <stdio.h>

int main () {

    char nome;
    int idade; 

    printf("Digite seu nome: ");
    scanf("%s", &nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade <= 2) {
        printf("Voce possui %d anos e e um bebe\n",  idade);
    } else if (idade <= 11) {
        printf("voce possui %d anos e e uma crianca\n", idade);
    } else if (idade <= 21) {
        printf("voce possui %d anos e e um jovem\n", idade);
    } else if (idade <= 64) {
        printf("voce possui %d anos e e um adulto\n", idade);
    } else if (idade <= 100) {
        printf("voce possui %d anos e e um idoso\n", idade);
    } else {
        printf("voce possui %d anos e e muito velinho\n", idade);
    }

    return 0;
}
