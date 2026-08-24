#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int a, b, c;
	
	printf("digite o valor de A, B, e C: \n");
	printf("A: ");
	scanf("%d", &a);
	
	printf("\nB: ");
	scanf("%d", &b);

	printf("\nC: ");
	scanf("%d", &c);
	
	
	if(a>b && a>c) {
	 printf("\nO maior valor e A: %d", a);
	}
	else if(b>a && b>c) {
	 printf("\nO maior valor e B: %d", b);
	}
	else {
	 printf("\nO maior valor e C: %d", c);
	}
	
	
	return 0;
}
