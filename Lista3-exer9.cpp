#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	float trapezio, base, topo, altura;
	printf("Informe a altura do trapézio: ");
	scanf("%f", &altura);
	printf("Informe o valor da base do trapézio: ");
	scanf("%f", &base);
	printf("Informe o valor do topo do trapézio: ");
	scanf("%f", &topo);
	trapezio=((base+topo)*altura)/2;
	printf("A área do trapézio é: %.2f\n", trapezio);
}
