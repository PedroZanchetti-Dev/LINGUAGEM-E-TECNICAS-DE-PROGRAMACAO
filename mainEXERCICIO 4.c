#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int maior(int a, int b){
    return (a + b + abs(a - b)) / 2;
}

int main(int argc, char *argv[]) {
    int vet[10];
    int i, maiorvalor;

   
    for(i = 0; i < 10; i++){
        scanf("%d", &vet[i]);
    }

    maiorvalor = vet[0];

   
    for(i = 0; i < 10; i++){
        maiorvalor = maior(maiorvalor, vet[i]);
    }

    printf("%d eh o maior", maiorvalor);

    return 0;
}
