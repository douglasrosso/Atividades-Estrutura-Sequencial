#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	float trapezio, base, topo, altura;
	printf("Informe a altura do trap�zio: ");
	scanf("%f", &altura);
	printf("Informe o valor da base do trap�zio: ");
	scanf("%f", &base);
	printf("Informe o valor do topo do trap�zio: ");
	scanf("%f", &topo);
	trapezio=((base+topo)*altura)/2;
	printf("A �rea do trap�zio �: %.2f\n", trapezio);
}
