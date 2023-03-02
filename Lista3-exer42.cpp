#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	float polegada, jarda, milha, pe;
	printf(">Digite a distância em pes: "); scanf("%f", &pe);
	polegada=pe*12;
	jarda=pe/3;
	milha=jarda/1760;
	printf("\nSua distância em polegadas: %f\n", polegada);
	printf("\nSua distância em jardas: %f\n", jarda);
	printf("\nSua distância em milhas: %f\n", milha);

	
}
