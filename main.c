#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592

/* calculando area do circulo */

int main() {
 float area, r;

   printf("ESCREVA O RAIO DO CIRCULO: ");	
    scanf("%f", &r);
   
 area = pi*(r*r);
 
    printf("A AREA DO CIRCULO DE RAIO R %f =%f", r, area);
   

	
	return 0;
}
