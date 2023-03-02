#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	float ladoa, ladob, area;
	printf("Informe o primeiro valor: ");
	scanf("%f", &ladoa);
	printf("Informe o segundo valor: ");
	scanf("%f", &ladob);
	area=ladoa*ladob;
	printf("Esta é a área: %.2f\n", area);	
}
