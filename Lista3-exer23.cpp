#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	float numb, div;
	printf(">Infome um n�mero: "); scanf("%f", &numb);
	div=numb/3;
	printf("\nN�mero escolhido: %.2f\n", numb);
	printf("-Ter�a parte: %.2f\n", div);
	

}
