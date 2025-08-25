#include <stdio.h>

int main() {
  
    int numero1;

    printf("digite o numero: ");
    scanf("%d", &numero1);

    if (numero1 >10) {
        printf("o numero digitado é maior que 10");
    } else if (numero1 < 10) {
        printf("o numero digitado é menor do que 10");

    } else {
        printf("o numero digitado é igual a 10");
    }
 
    return 0;
}
