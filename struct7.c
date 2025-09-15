#include <stdio.h>

struct Data {
    int dia;
    int mes;
    int ano;
};

int main () {
    struct Data data;
    printf("Digite o dia: ");
    scanf("%d", &data.dia);
    printf("Digite o mes: ");
    scanf("%d", &data.mes);
    printf("Digite o ano: ");
    scanf("%d", &data.ano);

    printf("A data digitada foi: %02d/%02d/%04d\n", data.dia, data.mes, data.ano);


    return 0;
}