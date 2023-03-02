#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	float salario, percent, increase, newSalario;
	printf(">Digite seu salário: "); scanf("%f", &salario);
	printf(">Digite o Percentual de aumento: "); scanf("%f", &percent);
	increase=salario*percent/100;
	newSalario=salario+increase;
	printf("\nSeu salário com aumento é: %.2f\n", newSalario);
	
 
	
}
