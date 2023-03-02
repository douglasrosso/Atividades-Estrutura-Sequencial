#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	float salario, comissao;
	printf("Informe seu salário: ");
	scanf("%f", &salario);
	comissao=salario*0.04;
	printf("Valor do seu salário com a comissão é: %.2f\n", salario+comissao);
}
	
