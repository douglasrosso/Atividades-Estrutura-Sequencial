#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	float larg, comp, m2, p;
	printf("Informe a largura do c�modo: ");
	scanf("%f", &larg);
	printf("Informe o comprimento do c�modo: ");
	scanf("%f", &comp);
	m2=larg*comp;
	p=18*m2;
	printf("Seu c�modo em m� �: %.2f\n", m2);
	printf("A pot�ncia necess�ria �: %.2f\n", p);
	
}
