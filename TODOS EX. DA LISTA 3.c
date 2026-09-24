#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define pi 3.14159

float calcularINSS(float salario)
{
    float inss;

    if (salario <= 1412.00)
    {
        inss = salario * 0.075;
    }
    else if (salario <= 2666.68)
    {
        inss = salario * 0.09;
    }
    else if (salario <= 4000.03)
    {
        inss = salario * 0.12;
    }
    else
    {
        inss = salario * 0.14;
    }

    return inss;
}

float calcularIRPF(float salarioBase)
{
    float imposto;

    if (salarioBase <= 2259.20)
    {
        imposto = 0;
    }
    else if (salarioBase <= 2826.65)
    {
        imposto = (salarioBase * 0.075) - 169.44;
    }
    else if (salarioBase <= 3751.05)
    {
        imposto = (salarioBase * 0.15) - 381.44;
    }
    else if (salarioBase <= 4664.68)
    {
        imposto = (salarioBase * 0.225) - 662.77;
    }
    else
    {
        imposto = (salarioBase * 0.275) - 896.00;
    }

    return imposto;
}

int main()
{
    char escolha;

    printf("| 1 | EXERCICIO 1 - SAQUE\n");
    printf("| 2 | EXERCICIO 2 - TRAJETORIA\n");
    printf("| 3 | EXERCICIO 3 - INSS\n");
    printf("| 4 | EXERCICIO 4 - IRPF\n");
    printf("| 5 | EXERCICIO 5 - CONTRA-CHEQUE\n");

    printf("\nESCOLHA QUAL EXERCICIO DESEJA VER: ");
    scanf(" %c", &escolha);

    switch (escolha)
    {
        case '1':
        {
            int valor, valor100, valor50, valor10;
            int valor5, valor2, valor1;

            printf("DIGITE O VALOR DESEJADO DO SAQUE: ");
            scanf("%d", &valor);

            valor100 = valor / 100;
            valor = valor % 100;

            valor50 = valor / 50;
            valor = valor % 50;

            valor10 = valor / 10;
            valor = valor % 10;

            valor5 = valor / 5;
            valor = valor % 5;

            valor2 = valor / 2;
            valor = valor % 2;

            valor1 = valor;

            printf("VOCE RECEBERA %d NOTA(S) DE 100\n", valor100);
            printf("VOCE RECEBERA %d NOTA(S) DE 50\n", valor50);
            printf("VOCE RECEBERA %d NOTA(S) DE 10\n", valor10);
            printf("VOCE RECEBERA %d NOTA(S) DE 5\n", valor5);
            printf("VOCE RECEBERA %d NOTA(S) DE 2\n", valor2);
            printf("VOCE RECEBERA %d MOEDA(S) DE 1\n", valor1);

            break;
        }

        case '2':
        {
            float v0, graus, rad;
            float g = 9.8;
            float k = 0.5;
            float dt = 0.01;

            float vx, vy;
            float x = 0;
            float y = 0;
            float tempo = 0;
            float ax, ay;

            printf("Digite a velocidade inicial: ");
            scanf("%f", &v0);

            printf("Digite o angulo: ");
            scanf("%f", &graus);

            rad = graus * (pi / 180);

            vx = v0 * cos(rad);
            vy = v0 * sin(rad);

            while (y >= 0)
            {
                ax = -k * vx;
                ay = -g - k * vy;

                vx = vx + ax * dt;
                vy = vy + ay * dt;

                x = x + vx * dt;
                y = y + vy * dt;

                tempo = tempo + dt;
            }

            printf("\nAlcance horizontal: %.2f metros\n", x);
            printf("Tempo de voo: %.2f segundos\n", tempo);

            break;
        }

        case '3':
        {
            float salario, desconto;

            printf("Digite o salario bruto: ");
            scanf("%f", &salario);

            desconto = calcularINSS(salario);

            printf("Desconto do INSS: R$ %.2f\n", desconto);

            break;
        }

        case '4':
        {
            float salarioBase, imposto;

            printf("Digite o salario-base: ");
            scanf("%f", &salarioBase);

            imposto = calcularIRPF(salarioBase);

            printf("IRPF: R$ %.2f\n", imposto);

            break;
        }

        case '5':
        {
            float valorHora, horas;
            float salarioBruto, inss, irpf;
            float salarioBase, salarioLiquido;

            printf("Digite o valor da hora trabalhada: ");
            scanf("%f", &valorHora);

            printf("Digite a quantidade de horas trabalhadas: ");
            scanf("%f", &horas);

            salarioBruto = valorHora * horas;

            inss = calcularINSS(salarioBruto);

            salarioBase = salarioBruto - inss;

            irpf = calcularIRPF(salarioBase);

            salarioLiquido = salarioBruto - inss - irpf;

            printf("\n======================================================\n");
            printf("       RECIBO DE PAGAMENTO DE SALARIO (CONTRA-CHEQUE)\n");
            printf("======================================================\n");
            printf(" Salario Bruto (Horas x Valor):   R$ %8.2f\n", salarioBruto);
            printf(" (-) Desconto INSS:               R$ %8.2f\n", inss);
            printf(" (-) Desconto IRPF:               R$ %8.2f\n", irpf);
            printf("------------------------------------------------------\n");
            printf(" LIQUIDO A RECEBER:               R$ %8.2f\n", salarioLiquido);
            printf("======================================================\n");

            break;
        }

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}
