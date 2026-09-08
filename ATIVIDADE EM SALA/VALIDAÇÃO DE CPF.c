#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a,b,c,d,e,f,g,h,i, verificador1, verificador2,resto1, soma1, conta1, conta2, resto2, soma2;
	
	
	printf("DIGITE OS 9 PRIMEIROS DIGITOS DO SEU CPF: \n");
	scanf("%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i);
	
	printf("DIGITE O PRIMEIRO VERIFICADOR: \n");
	scanf("%d", &verificador1);
	
	printf("DIGITE O SEGUNDO VERIFICADOR: \n");
	scanf("%d", &verificador2);
	
	soma1 = (a*10) + (b*9) + (c*8) + (d*7) + (e*6) + (f*5) + (g*4) + (h*3) + (i*2);
	resto1 = soma1 % 11;
	
	if (resto1 == 0 || resto1 == 1)
	conta1 = 0;
	
	else
	conta1 =  11 - resto1; 

	
	soma2 = (a*11) + (b*10) + (c*9) + (d*8) + (e*7) + (f*6) + (g*5) + (h*4) + (i*3) + (conta1 * 2);

	resto2 = soma2 % 11;
	
	if (resto2 == 0 || resto2 == 1)
	conta1 = 0;
	
	else
	conta2=  11 - resto2; 
	
	if (conta1 == verificador1 && conta2 == verificador2)
	printf(" O SEU CPF E VALIDO");
	
	else
	printf("O SEU CPF E INVALIDO");
	
	
	return 0;
}
