#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int i, numeros[10];
	int aux, j; 
	
	for (i = 0; i <10; i++){
	printf("INSIRA O NUMERO %d: ", i+1 );
	scanf("%d", &numeros[i]);
	}
	
	for( i = 9; i >= 0; i --){
		printf("\nNUMERO %d: %d\n", i + 1, numeros[i]);
	}
	
	 for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (numeros[j] < numeros[j + 1]) {
                aux = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = aux;
            }
        }
    }
    printf("\nNUMEROS DO MAIOR PARA O MENOR:\n");

    for (i = 0; i < 10; i++) {
        printf("%d\n", numeros[i]);
    }
	return 0;
}
