#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	float salarioMin, salario;
	printf("Informe o salário: ");
	scanf("%f", &salario);
	salarioMin=1212;
	printf("Quantidade de salários mínimos: %.0f\n", salario/salarioMin);	
}
