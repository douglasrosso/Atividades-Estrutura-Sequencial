#include<stdio.h>
main()
{
	float salario, conta1, conta2, total;
	printf("Informe seu salario: ");
	scanf("%f", &salario);
	printf("Informe a conta 1: ");
	scanf("%f", &conta1);
	printf("Informe a conta 2: ");
	scanf("%f", &conta2);
	total=(conta1+conta2)*2/100 + conta1 + conta2;
	printf("Sobrouuuuu: %f", salario-total);
}
