#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14159


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char escolha;
	printf("| 1 | EXERCICIO 1 - \n");
	printf("\n| 2 | EXERCICIO 2 - \n ");
	printf("\n| 3 | EXERCICIO 3 - \n ");
	printf("\n| 4 | EXERCICIO 4 - \n");
	printf("\n| 5 | EXERCICIO 5 - \n ");
	printf("\n| 6 | EXERCICIO 6 - \n");
	printf("\n| 7 | EXERCICIO 7 -\n ");
	printf("\n| 8 | EXERCICIO 8 - \n  ");
	printf("\n| 8 | EXERCICIO 9 - \n  ");
	
    printf("\nESCOLHA QUAL EXERCICIO DESEJA VER: \n ");
    scanf("%c", &escolha);
    
    switch  (escolha){
    case'1':{
    int nascimento, calculo;
	
	printf("INSIRA O ANO QUE VOCE NASCEU: \n");
	scanf("%d", &nascimento);
	
	calculo = 2026 - nascimento;
	
	printf("NO ANO DE 2026 VOCE TEM %d ANOS", calculo);


    break;
}
	case '2':{
	float km, calculo;	
	
	printf("INSIRA A VELOCIDADE EM KM/H :\n");
	scanf("%f", &km);
	
	calculo = km/ 3.6;
	
	printf("%0.f KM/H = %0.f M/S ", km, calculo);
	
	break;
	}
	
	case '3':{
	float real, cotacao, calculo;
	
	printf("INSIRA O VALOR EM REAIS: \n");
	scanf("%f", &real);
	
	printf("INSIRA A COTACAO DO DOLAR: \n");
	scanf("%f", &cotacao);
	
	calculo = real / cotacao;
	
	printf("%.2f R$ = %.2f $", real, calculo);
	
	
	break;
	}
	case '4': {
 float salario, vendas, comissao, total;
    
    printf("DIGITE SEU SALARIO: \n");
    scanf("%f", &salario);
    
    printf("DIGITE SEU VALOR TOTAL DE VENDAS: \n");
    scanf("%f", &vendas);
	
	total = salario + (vendas * 0.15 );
	
	printf("O TOTAL A SER RECEBIDO NO FIM DO MES E DE: \n%.2f", total);

	break;
	}
	
	case '5': {
	float graus, calculo;
	
	printf("INSIRA O VALOR DO ANGULO EM GRAUS: \n");
	scanf("%f", &graus);
	
	calculo = graus * pi / 180;
	
	printf("GRAUS = %.1f\nRADIANOS = %f", graus, calculo);

	break;
	}
	
	
	case '6': {
	int idade, meses, anos;
	
	

	int num, ant, suc;
	printf("Digite o valor n: ");
	scanf("%d", &num);
	suc = num+1;
	ant = num-1;
	printf("o numero %d, seu antecesor %d e seu sucessor %d", num, ant, suc);
	
	break;
	}
	
	case '7': {
		
	
	float total = 780000.00;
    float primeiro, segundo, terceiro;

    primeiro = total * 0.46;
    segundo = total * 0.32;
    terceiro = total - (primeiro + segundo);

    printf("Primeiro ganhador (46%%): R$ %.2f\n", primeiro);
    printf("Segundo ganhador (32%%): R$ %.2f\n", segundo);
    printf("Terceiro ganhador (restante): R$ %.2f\n", terceiro);
    
	break;
	}
	
	case '8': {

int seg, min, h;
	
	printf("Digite o tempo em segundos: ");
	scanf("%d", &seg);
	
	min = seg / 60;
	seg = seg % 60;
	h = min / 60;
	min = min % 60;
	
	printf("horas: %d minutos: %d segundos: %d", h, min, seg);

	break;
	}
	
	case '9': {
	float aut, t, Vm, d, L;
	
	printf("Digite o tempo gasto na viagem em horas: ");
	scanf("%f", &t);
	
	printf("Digite a velocidade media em (Km/h): ");
	scanf("%f", &Vm);
	
	aut = 12;
	
	d = t * Vm;
	
	L = d / aut;
	
	printf("O total gasto vai ser de %.3fL", L);
	break;
	}
	}
	return 0;
}
