#include <stdio.h>

int main () {
    float distancia, consumo, preco, custo_total;

    printf("Adicione a distancia: ");
    scanf("%f", &distancia);

    printf("quantos quilometros o carro percorre por litro de combustivel: ");
    scanf("%f", &consumo);

    printf("Adicione o valor do litro do combustivel: ");
    scanf("%f", &preco);

    custo_total = (distancia / consumo) * preco;

    printf("O custo total da viagem é de: %.2f\n", custo_total);    


    return 0;

}