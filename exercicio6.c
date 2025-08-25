#include <stdio.h>

int main () {
    
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

   if (numero % 2 == 0 ) {
        printf("o numero %d e par \n ", numero);
   } else {
        printf("o numero %d e impar\n ", numero);
   }
    
    return 0;
}