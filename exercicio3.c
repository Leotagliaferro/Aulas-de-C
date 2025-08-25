#include <stdio.h>

int main () {
    
    float base, altura, divisao;
    
    printf("Adicione o valor da base: ");
    scanf("%f", &base);
    
    printf("Adicione o valor da altura: ");
    scanf("%f", &altura);

    divisao = base * altura / 2;

    
    printf("A area do triangulo é: %.2f", divisao); 



    return 0;
}