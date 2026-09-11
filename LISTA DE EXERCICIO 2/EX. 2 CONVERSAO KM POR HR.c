#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	float km, calculo;	
	
	printf("INSIRA A VELOCIDADE EM KM/H :\n");
	scanf("%f", &km);
	
	calculo = km/ 3.6;
	
	printf("%0.f KM/H = %0.f M/S ", km, calculo);
	
	return 0;
}
