#include <stdio.h>

struct Retangulo { 
    float base;
    float altura;
};

int main () {
    struct Retangulo retangulo;
    printf("Digite o valor da base \n");
    scanf("%f", &retangulo.base);
    printf("digite o valor da altura \n");
    scanf("%f", &retangulo.altura);

    float area = retangulo.base * retangulo.altura; 


    printf("\nBase: %.2f\nAltura: %.2f\n", retangulo.base, retangulo.altura);
    printf("A area do retangulo e: %.2f\n", area);
    return 0;
}