#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int idade, meses, anos;
	
	printf("DIGITE UMA IDADE EM DIAS: \n");
	scanf("%d", &idade);
	
	meses = idade / 30;
	anos = idade / 365;
	
	printf("\n");
	printf(" VOCE VIVEU %d DIAS\n", idade);
	printf(" %d MESES\n", meses);
	printf(" E %d ANOS\n", anos);
	
	
	return 0;
}
