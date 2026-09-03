#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	float valor1, valor2, valor3, valor4, media, soma, produto;
	
	printf(" DIGITE O VALOR 1:\n ");
	scanf("%f", &valor1);
	
	printf(" DIGITE O VALOR 2:\n ");
	scanf("%f", &valor2);
	
	printf(" DIGITE O VALOR 3:\n ");
	scanf("%f", &valor3);
	
	printf(" DIGITE O VALOR 4:\n ");
	scanf("%f", &valor4);
	
	printf("\n");
	
	media = (valor1 + valor2 + valor3 + valor4) / 4;
	soma = valor1 + valor2 + valor3 + valor4;
	produto =valor1 * valor2 * valor3 * valor4;
	
	printf(" A SOMA ENTRE OS NUMEROS E: \n %.2f", soma);
	printf("\n A MEDIA ENTRE OS NUMEROS E: \n %.2f", media);
	printf("\n O PRODUTO ENTRE OS NUMEROS E: \ n%.2f", produto);
	
	
	return 0;
}
