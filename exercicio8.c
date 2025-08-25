#include <stdio.h>

int main () {

    int conta;
    float saldo, debito, credito, total;
    
    printf("Digite o numero da conta: ");
    scanf("%d", &conta);

    printf("Digite o seu saldo: ");
    scanf("%f", &saldo);

    printf("Digite o valor no debito: ");
    scanf("%f", &debito);

    printf("Digite o valor no crédito: ");
    scanf("%f", &credito);

    total = saldo - debito + credito;
 
    printf("Conta: %d\n", conta);

    if (total >= 0) {
        printf("Seu saldo e %.4f e positivo\n", total);
    } else {
        printf("Seu saldo e %.4f e negativo\n", total);
    }

    return 0;
}