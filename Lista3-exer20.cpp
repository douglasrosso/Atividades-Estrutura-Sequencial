#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	int A, B, C;
	printf("Informe o valor de A: ");
	scanf("%d", &A);
	printf("Informe o valor de B: ");
	scanf("%d", &B);
	C=A;
	A=B;
	B=C;
	printf("Valor de A: %d\n", A);
	printf("Valor de B: %d", B);
	
}
	
