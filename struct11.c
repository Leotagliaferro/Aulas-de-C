#include <stdio.h>

struct Numero  {
    int par[10];
};

int main () {
    struct Numero numero;
     int i, j = 0;

   for(i = 2; i <= 20;i+=2) {
    numero.par[j] = i;
    j++; 
   }

   for (i =0;i < 10;i++) {
    printf("o valor do vetor 1 e: %d\n", numero.par[i]);
   }

    return 0;
}

