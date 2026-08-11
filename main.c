#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592

/* calculando area do circulo e trapezio*/

int main() {
float areac, r, bmenor, bmaior, h, areat;

   printf("ESCREVA O RAIO DO CIRCULO:\n ");	
      scanf("%f", &r);
   
 		areac = pi*(r*r);
 
    printf("A AREA DO CIRCULO DE RAIO R %f =%f\n", r, areac);
    
    
    
    printf("\nAGORA, INSIRA A BASE MENOR DO TRAPEZIO:\n ");
      scanf("%f", &bmenor);
      
     
    printf("INSIRA A BASE MAIOR DO TRAPEZIO:\n ");
      scanf("%f", &bmaior);
      
      
    printf("INSIRA A ALTURA DO TRAPEZIO:\n ");
      scanf("%f", &h);
      
    
    areat= (bmaior+bmenor)*h / 2;
 
     
     
    printf("A AREA DO TRAPEZIO DE BASE MENOR %f BASE MAIOR %f E ALTURA %f = %f", bmenor, bmaior, h, areat);
   

	
	return 0;
}
