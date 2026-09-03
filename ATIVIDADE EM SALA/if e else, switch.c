#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char letra;
	
	printf("Insira uma letra: ");
	scanf("%c", &letra);
	
	if (letra == 'a' || letra == 'e' ||letra == 'i' ||letra == 'o' ||letra == 'u' ){
		
			if (letra == 'a' || letra == 'o') {
		printf(" AOBA!");
		}
		
			else if (letra == 'i' || letra == 'u'){
		printf("LA ELE!");
		}
	}
	else {
		printf("67!");
	}
	printf("\n");
	
	switch (letra){
		case 'a':
			printf("A de AMOR");
			break;
		case 'b':
			printf("B de BAIXINHO");
			break;
		case 'c':
			printf("C de CORACAO");
			break;
		case 'd':
			printf("D de DEDINHO");
			break;
	}
	
	
	
	return 0;
}
