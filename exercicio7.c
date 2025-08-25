#include <stdio.h>

int main () {

    float base, altura, area;

    printf("Adicione o valor da base: ");
    scanf("%f", &base);

    printf("Adicione o valor da altura: ");
    scanf("%f", &altura);

    area = base * altura;

    printf("A area do retangulo e %.2f\n", area);

    return 0;
}