#include <stdio.h>

struct Computador { 
    char placa[50];
    char processador[50];
    char watercooler[50];
};

int main () {
    struct Computador computador[3];
    int i;
    for (i = 0; i < 3; i++) {
     printf("Digite o nome da placa de video: ");
    scanf("%s", computador[i].placa);
    printf("digite o nome do processador: ");
    scanf("%s", computador[i].processador);
    printf("qual seu watercooler?: ");
    scanf("%s", computador[i].watercooler);

    
    };

    for(i = 0; i < 3; i++) {
        printf("seu placa mae é: %s, seu processador é: %s, seu watercooler é: %s", computador[i].placa, computador[i].processador, computador[i].watercooler);
    }

    return 0;
};

