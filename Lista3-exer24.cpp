#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	float numb, quad, cubo, raizCubo, raizQuad;
	printf(">Infome um n�mero: "); scanf("%f", &numb);
	quad=pow(num,2); cubo=pow(numb,3); raizCubo=sqrt(numb); raizQuad=cbrt(numb);
	printf("\nN�mero escolhido: %.2f\n", numb);
	printf("-Valor do n�mero elevado ao quadrado: %.2f\n", quad);
	printf("-Valor do n�mero elevado ao cubo: %.2f\n", cubo);
	printf("-Valor do n�mero em raiz quadrada: %.2f\n", raizCubo);
	printf("-Valor do n�mero em raiz cubica: %.2f\n", raizQuad);
	

}
