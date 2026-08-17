#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {
	
	int n, bit64, bit32, bit16, bit8, bit4, bit2, resultado ;
	
	
	printf("Entre com o valor de N:\n ");
	scanf("%d", &n);
	
	bit64 = n%2 ;
	resultado = n/2 ;
	
    bit32 = resultado%2 ;
    resultado = resultado/2 ;
    
    bit16 = resultado%2 ;
    resultado = resultado/2 ;
    
    bit8 = resultado%2 ;
    resultado = resultado/2 ;

    bit4 = resultado%2 ;
    resultado = resultado/2 ;
    
    bit2 = resultado%2 ;
    resultado = resultado/2 ;

	
	
	printf("O numero %d em binario: %d%d%d%d%d%d%d\n", n, resultado%2 , bit2, bit4, bit8, bit16, bit32, bit64);
   
	
	int x1, x2, y1, y2;
	float dist, cat1, cat2;
	
	printf ("\nEntre com os valores para P1(x1,y1):\n");
	printf("x1:");
	scanf("%d", &x1);
	
	printf("y1:");
	scanf("%d", &y1);
	
	printf ("\nEntre com os valores para P2(x2,y2):\n");
	printf("x2:");
	scanf("%d", &x2);
	
	printf("y1:");
	scanf("%d", &y2);
	
	cat1 = pow(x2-x1, 2);
	cat2 = pow(y2-y1, 2);
	
	dist = sqrt(cat1+cat2);
	
	printf("A distancia =%f", dist);
	
	
	return 0;
}
