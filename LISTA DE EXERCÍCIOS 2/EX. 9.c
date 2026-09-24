#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float aut, t, Vm, d, L;
	
	printf("Digite o tempo gasto na viagem em horas: ");
	scanf("%f", &t);
	
	printf("Digite a velocidade media em (Km/h): ");
	scanf("%f", &Vm);
	
	aut = 12;
	
	d = t * Vm;
	
	L = d / aut;
	
	printf("O total gasto vai ser de %.3fL", L);
	return 0;
}
