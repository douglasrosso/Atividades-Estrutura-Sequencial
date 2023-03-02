#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	float precoFab, lucro, imposto, precoFinal;
	printf(">Digite o preço de fábrica do veiculo: "); scanf("%f", &precoFab);
	printf(">Digite o percentual do lucro do distribuidor: "); scanf("%f", &lucro);
	printf(">Digite o valor do imposto: "); scanf("%f", &imposto);
	lucro=precoFab*lucro/100;
	imposto=precoFab*imposto/100;
	precoFinal=lucro+imposto+precoFab;
	printf("\nLucro do distribuidor: %.2f\n", lucro);
	printf("\nValor do Imposto: %.2f\n", imposto);
	printf("\nPreço final do Produto: %.2f\n", precoFinal);
	
	
}
