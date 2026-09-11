#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	float real, cotacao, calculo;
	
	printf("INSIRA O VALOR EM REAIS: \n");
	scanf("%f", &real);
	
	printf("INSIRA A COTACAO DO DOLAR: \n");
	scanf("%f", &cotacao);
	
	calculo = real / cotacao;
	
	printf("%.2f R$ = %.2f $", real, calculo);
	
	
	return 0;
}
