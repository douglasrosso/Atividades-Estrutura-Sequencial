#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	float salarioMin, salario;
	printf("Informe o sal�rio: ");
	scanf("%f", &salario);
	salarioMin=1212;
	printf("Quantidade de sal�rios m�nimos: %.0f\n", salario/salarioMin);	
}
