#include <stdio.h>

int main () {
    float numero; 

    printf("Digite um numero: ");
    scanf("%f", &numero);

    if(numero < 0) {
        printf("o numero digitado e negativo: ");
    } else {
        printf("numero digitado e positivo ou zero.\n");
    }

    return 0;
}