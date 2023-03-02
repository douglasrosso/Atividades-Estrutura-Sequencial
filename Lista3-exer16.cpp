#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	float larg, comp, m2, p;
	printf("Informe a largura do cômodo: ");
	scanf("%f", &larg);
	printf("Informe o comprimento do cômodo: ");
	scanf("%f", &comp);
	m2=larg*comp;
	p=18*m2;
	printf("Seu cômodo em m² é: %.2f\n", m2);
	printf("A potência necessária é: %.2f\n", p);
	
}
