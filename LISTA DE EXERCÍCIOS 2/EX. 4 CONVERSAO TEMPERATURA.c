#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float celsius, calculo;
	
	printf("INSIRA A TEMPERATURA EM CELSIUS: \n");
	scanf("%f", &celsius);
	
	calculo = celsius * (9.0/5.0) + 32.0;
	
	printf("CELSIUS = %.1f\n", celsius);
	printf("FAHRENHEIT = %.1f", calculo);
	return 0;
}
