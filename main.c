#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {

	int n;
	
	printf("Entre com o valor de N:\n");
	scanf("%d", &n);

	
	printf ("O numero %d e seu antecessor %d e sucessor %d", n, n-1, n+1);
	
	
	int a, b, c, maiortemp, maior;
	
	printf("Insira tres valores para identificar o maior: ");
	scanf("%d %d %d", &a, &b, &c);
	
	maiortemp = ((a+b+abs(a-b))/2);
	maior= ((maiortemp+c+abs(maiortemp-c))/2);
	 
	printf("O maior entre |%d| |%d| |%d| e %d", a, b, c, maior );
	
	
	return 0;
}
