#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	int numb, ant, suce;
	printf(">Infome um n�mero inteiro: "); scanf("%d", &numb);
	ant=numb-1; suce=numb+1;
	printf("\nN�mero escolhido: %d\n", numb);
	printf("-Antecessor: %d\n", ant);
	printf("-Sucessor: %d\n", suce);

}
