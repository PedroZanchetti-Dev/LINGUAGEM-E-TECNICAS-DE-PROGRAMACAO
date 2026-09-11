#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14159

int main(int argc, char *argv[]) {
	char escolha;
	printf("| 1 | EXERCICIO 1 - ORDEM INVERSA\n");
	printf("\n| 2 | EXERCICIO 2 - NOTACAO CIENTIFICA\n ");
	printf("\n| 3 | EXERCICIO 3 - TRANSFORMACAO EM BINARIO\n ");
	printf("\n| 4 | EXERCICIO 4 - SALARIO + COMISSAO\n");
	printf("\n| 5 | EXERCICIO 5 - MEDIA, SOMA, PRODUTO\n ");
	printf("\n| 6 | EXERCICIO 6 - IDADE\n");
	printf("\n| 7 | EXERCICIO 7 - VOLUME DE UMA ESFERA\n ");
	printf("\n| 8 | EXERCICIO 8 - CALCULO PLANO CARTESIANO\n  ");
	
    printf("\nESCOLHA QUAL EXERCICIO DESEJA VER: \n ");
    scanf("%c", &escolha);
    
    switch  (escolha){
    case'1':{
    int numero1, numero2;
    
    printf("\nVOCE ENTROU NO EXERCICIO 1 !!!\n");
    printf("\n");
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &numero1, &numero2);

    printf("%d %d\n", numero2, numero1);


    break;
}
	case '2':{
	double valor, conta;
	int expoente;
	
	printf("\nVOCE ENTROU NO EXERCICIO 2 !!!\n");
	printf("\n");
	printf("Digite um valor positivo: ");
	scanf("%lf", &valor);
	
	expoente = (int) floor(log10(valor));
	conta = valor / pow(10, expoente);
	
	printf("%.4lf x 10^%d\n", conta, expoente);
	
	break;
	}
	case '3':{
	printf("\nVOCE ENTROU NO EXERCICIO 3 !!!\n");
	printf("\n");
	int n, bit64, bit32, bit16, bit8, bit4, bit2, resultado ;
	
	
	printf("Entre com o valor de N:\n ");
	scanf("%d", &n);
	
	bit64 = n%2 ;
	resultado = n/2 ;
	
    bit32 = resultado%2 ;
    resultado = resultado/2 ;
    
    bit16 = resultado%2 ;
    resultado = resultado/2 ;
    
    bit8 = resultado%2 ;
    resultado = resultado/2 ;

    bit4 = resultado%2 ;
    resultado = resultado/2 ;
    
    bit2 = resultado%2 ;
    resultado = resultado/2 ;

	
	
	printf("O numero %d em binario: %d%d%d%d%d%d%d\n", n, resultado%2 , bit2, bit4, bit8, bit16, bit32, bit64);

	break;
	}
	case '4': {
	
    float salario, vendas, comissao, total;
    
    printf("\nVOCE ENTROU NO EXERCICIO 4 !!!\n");
	printf("\n");
    
    printf("DIGITE SEU SALARIO: \n");
    scanf("%f", &salario);
    
    printf("DIGITE SEU VALOR TOTAL DE VENDAS: \n");
    scanf("%f", &vendas);
	
	total = salario + (vendas * 0.15 );
	
	printf("O TOTAL A SER RECEBIDO NO FIM DO MES E DE: \n%.2f", total);
	

	break;
	}
	case '5': {
	float valor1, valor2, valor3, valor4, media, soma, produto;
	
	printf("\nVOCE ENTROU NO EXERCICIO 5 !!!\n");
	printf("\n");
    
	printf(" DIGITE O VALOR 1:\n ");
	scanf("%f", &valor1);
	
	printf(" DIGITE O VALOR 2:\n ");
	scanf("%f", &valor2);
	
	printf(" DIGITE O VALOR 3:\n ");
	scanf("%f", &valor3);
	
	printf(" DIGITE O VALOR 4:\n ");
	scanf("%f", &valor4);
	
	printf("\n");
	
	media = (valor1 + valor2 + valor3 + valor4) / 4;
	soma = valor1 + valor2 + valor3 + valor4;
	produto =valor1 * valor2 * valor3 * valor4;
	
	printf(" A SOMA ENTRE OS NUMEROS E: \n %.2f", soma);
	printf("\n A MEDIA ENTRE OS NUMEROS E: \n%.2f", media);
	printf("\n O PRODUTO ENTRE OS NUMEROS E: \n%.2f", produto);
	
	

	break;
	}
	
	
	case '6': {
	int idade, meses, anos;
	
	
	printf("\nVOCE ENTROU NO EXERCICIO 6 !!!\n");
	printf("\n");
	
	printf("DIGITE UMA IDADE EM DIAS: \n");
	scanf("%d", &idade);
	
	meses = idade / 30;
	anos = idade / 365;
	
	printf("\n");
	printf(" VOCE VIVEU %d DIAS\n", idade);
	printf(" %d MESES\n", meses);
	printf(" E %d ANOS\n", anos);
	
	break;
	}
	
	case '7': {
		
	
	float raio, calculo;
	
	printf("\nVOCE ENTROU NO EXERCICIO 7 !!!\n");
	printf("\n");
	
	printf("INSIRA O RAIO DA SUA ESFERA: \n");
	scanf("%f", &raio);
	
	calculo = (raio * raio * raio * 4 * pi) / 3.0;
	
	printf("O VOLUME DA SUA ESFERA DE RAIO %.0f E: %.2f UNIDADES CUBICAS !! \n", raio, calculo);
	break;
	}
	
	case '8': {

	int x1, x2, y1, y2;
	float dist, cat1, cat2;
	
	printf("\nVOCE ENTROU NO EXERCICIO 8 !!!\n");
	printf("\n");
	
	printf ("\nEntre com os valores para P1(x1,y1):\n");
	printf("x1:");
	scanf("%d", &x1);
	
	printf("y1:");
	scanf("%d", &y1);
	
	printf ("\nEntre com os valores para P2(x2,y2):\n");
	printf("x2:");
	scanf("%d", &x2);
	
	printf("y2:");
	scanf("%d", &y2);
	
	cat1 = pow(x2-x1, 2);
	cat2 = pow(y2-y1, 2);
	
	dist = sqrt(cat1+cat2);
	
	printf("A distancia =%f", dist);
	break;
	}
	}
	return 0;
}
