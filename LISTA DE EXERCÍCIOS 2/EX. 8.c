#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int seg, min, h;
	
	printf("Digite o tempo em segundos: ");
	scanf("%d", &seg);
	
	min = seg / 60;
	seg = seg % 60;
	h = min / 60;
	min = min % 60;
	
	printf("horas: %d minutos: %d segundos: %d", h, min, seg);
  
	return 0;
}
