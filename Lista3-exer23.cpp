#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	float numb, div;
	printf(">Infome um número: "); scanf("%f", &numb);
	div=numb/3;
	printf("\nNúmero escolhido: %.2f\n", numb);
	printf("-Terça parte: %.2f\n", div);
	

}
