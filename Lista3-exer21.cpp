#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	float numb1, numb2, soma, sub, produto;
	printf(">Informe o n�mero 1: "); scanf("%f", &numb1);
	printf(">Informe o n�mero 2: "); scanf("%f", &numb2);
	soma=numb1+numb2; sub=numb1-numb2; produto=numb1*numb2;
	printf("\nPrimeiro n�mero: %.1f          ", numb1); printf("Segundo n�mero: %.1f", numb2);
	printf("\nSoma: %.1f", soma); printf("\nDiferen�a: %.1f", sub);
	printf("\nProduto: %.1f", produto);
	
	
}
