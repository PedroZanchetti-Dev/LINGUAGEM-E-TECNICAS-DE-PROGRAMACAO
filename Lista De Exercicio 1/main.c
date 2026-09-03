#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	double valor, conta;
	int expoente;
	
	printf("Digite um valor positivo: ");
	scanf("%lf", &valor);
	
	expoente = (int) floor(log10(valor));
	conta = valor / pow(10, expoente);
	
	printf("%.4lf x 10^%d\n", conta, expoente);
	
	
	return 0;
}
