#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	float salario, comissao;
	printf("Informe seu sal�rio: ");
	scanf("%f", &salario);
	comissao=salario*0.04;
	printf("Valor do seu sal�rio com a comiss�o �: %.2f\n", salario+comissao);
}
	
