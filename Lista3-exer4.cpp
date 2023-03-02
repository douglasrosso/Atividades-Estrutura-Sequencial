#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	float n1, n2, soma, div;
	printf("Digite sua primeira nota: ");
	scanf("%f", &n1);
	printf("Digite sua segunda nota: ");
	scanf("%f", &n2);
	soma=n1+n2;
	div= soma/2;
	printf("A média é: %f ", div);

	
}
