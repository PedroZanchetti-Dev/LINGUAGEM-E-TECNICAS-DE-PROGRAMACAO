#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	int nascimento, calculo;
	
	printf("INSIRA O ANO QUE VOCE NASCEU: \n");
	scanf("%d", &nascimento);
	
	calculo = 2026 - nascimento;
	
	printf("NO ANO DE 2026 VOCE TEM %d ANOS", calculo);
	return 0;
}
