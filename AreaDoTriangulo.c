#include <stdio.h>
#include <stdlib.h>
/* Codigo para calcular area do triangulo*/

int main() {
	float base, altura, area;
	
	printf ("Digite o valor da Base: ");
	 scanf("%f", &base);
	 
		
	printf ("Digite o valor da Altura: ");
	 scanf("%f", &altura);
	 
	 
	area = (base * altura) /2;
	
	printf("A area do triangulo e: %.2f\n", area );
	return 0;
}
