#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	float valorHora, numH, taxa, desconto, salarioLiq, bruto;
	printf(">Digite o valor da sua hora: "); scanf("%f", &valorHora);
	printf(">Digite o n�mero de horas dadas no m�s: "); scanf("%f", &numH);
	printf(">Digite o valor de desconto do INSS: "); scanf("%f", &taxa);
	bruto=valorHora*numH;
	desconto=bruto*taxa/100;
	salarioLiq=bruto-desconto;
	printf("\nSal�rio l�quido: %.2f\n", salarioLiq);
}
