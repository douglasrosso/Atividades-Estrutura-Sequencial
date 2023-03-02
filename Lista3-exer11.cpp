#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	float altura, largura, area;
	printf("Informe o valor da altura: ");
	scanf("%f", &altura);
	printf("Informe o valor da largura: ");
	scanf("%f", &largura);
	area=altura*largura/2;
	printf("Esta é a área do losango: %.2f\n", area);	
}
