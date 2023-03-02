#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	float numb1, numb2, soma, sub, produto;
	printf(">Informe o número 1: "); scanf("%f", &numb1);
	printf(">Informe o número 2: "); scanf("%f", &numb2);
	soma=numb1+numb2; sub=numb1-numb2; produto=numb1*numb2;
	printf("\nPrimeiro número: %.1f          ", numb1); printf("Segundo número: %.1f", numb2);
	printf("\nSoma: %.1f", soma); printf("\nDiferença: %.1f", sub);
	printf("\nProduto: %.1f", produto);
	
	
}
