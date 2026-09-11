#include <stdio.h>
#include <stdlib.h>
#define pi 3.14159

int main(int argc, char *argv[]) {
	float raio, calculo;
	
	printf("INSIRA O RAIO DO SEU CIRCULO: \n");
	scanf("%f", &raio);
	
	calculo = (raio * raio * raio * 4 * pi) / 3.0;
	
	printf("O VOLUME DA SUA ESFERA DE RAIO %.0f E: %.2f UNIDADES CUBICAS !! \n", raio, calculo);
	 
	
	
	return 0;
}
