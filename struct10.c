#include <stdio.h>

struct Numero { 
    int numero_inteiro[8];
};

int main () {
    struct Numero numero = { {1,2,3,4,5,6,7,8 } };
    int Digite_numero;

    printf("Digite um numero: ");
    scanf("%d", &Digite_numero);

    int i;
    int diferente = 0;
    for (i = 0; i < 8; i++) {
        if (Digite_numero == numero.numero_inteiro[i] ) {
            diferente = 1;
            printf("O numero %d esta na posicao %d do vetor \n", Digite_numero, i);
            break;
        }
    }

       if (diferente == 0) {
            printf("o numero nao existe dentro do array ");
       }

    
    
    return 0;
}

