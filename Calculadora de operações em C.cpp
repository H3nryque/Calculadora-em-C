#include <stdio.h>

int main() 
{
int opcao, x, y, z;

	printf("Calculadora de operacoes.\n");
	printf("1: Calcular Soma. x + y = z\n");
	printf("2: Calcular Subtracao. x - y = z\n");
	printf("3: Calcular Multiplicacao. x * y = z\n");
	printf("4: Calcular Divisao. x / y = z\n");
	printf("\nDigite qual o calculo que deseja realizar: ");
	scanf("%d", & opcao);
	
switch(opcao)
{
	case 1:
		printf("\nCalcular Soma x + y = z\n");
		printf("Digite o valor de x: ");
		scanf("%d", & x);
		
		printf("Digite o valor de y: ");
		scanf("%d", & y);
		
		z = x + y;
		printf("\nResultado e: %d\n", z);
		break;
		
	case 2:
		printf("\nCalcular Subtracao x - y = z\n");
		printf("Digite o valor de X: ");
		scanf("%d", & x);
		
		printf("Digite o valor de y: ");
		scanf("%d", & y);
		
		z = x - y;
		printf("\nResultado e: %d\n", z);
		break;
		
	case 3:
		printf("\nCalculadora Multiplicacao x * y = z\n");
		printf("Digite o valor de x: ");
		scanf("%d", & x);
		
		printf("Digite o valor de y");
		scanf("%d", & y);
		
		z = x * y;
		printf("\nResultado e: %d\n", z);
		break;
	case 4:
		printf("\nCalcular Divisao x / y = z\n");
		printf("Digite o valor de x: ");
		scanf("%d", & x);
		
		printf("Digite o valor de y:");
		scanf("%d", & y);
		
		z = x / y;
		printf("Resultado: %d\n", z);
		break;
		
		default:
			printf("\nTente outra vez.");
		
}
	
return 0;
}
