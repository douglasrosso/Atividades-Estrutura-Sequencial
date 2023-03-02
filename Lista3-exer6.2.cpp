#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	float preco, perc, desc;
	printf("Informe o preço do produto: ");
	scanf("%f", &preco);
	printf("Informe o percentual de desconto: ");
	scanf("%f", &perc);
	desc=preco*perc/100;
	printf("Valor descontado: %.2f", preco-desc);
	
	
	
}
