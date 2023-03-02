#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	float preco, desc;
	printf("Digite o valor do produto: ");
	scanf("%f", &preco);
	desc=preco*0.1;
	printf("Valor descontado: %.2f", preco-desc);
	
	
	
}
