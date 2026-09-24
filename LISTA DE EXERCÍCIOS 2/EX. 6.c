#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {


	int num, ant, suc;
	printf("Digite o valor n: ");
	scanf("%d", &num);
	suc = num+1;
	ant = num-1;
	printf("o numero %d, seu antecesor %d e seu sucessor %d", num, ant, suc);
	
	return 0;
}
