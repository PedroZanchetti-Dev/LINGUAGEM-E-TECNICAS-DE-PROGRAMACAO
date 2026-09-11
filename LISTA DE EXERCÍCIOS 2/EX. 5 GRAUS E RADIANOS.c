#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592


int main(int argc, char *argv[]) {
	float graus, calculo;
	
	printf("INSIRA O VALOR DO ANGULO EM GRAUS: \n");
	scanf("%f", &graus);
	
	calculo = graus * pi / 180;
	
	printf("GRAUS = %.1f\nRADIANOS = %f", graus, calculo);
	
	return 0;
}
