#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	float pesokg, pesog;
	printf("Informe o seu peso: ");
	scanf("%f", &pesokg);
	pesog=pesokg*1000;
	printf("Seu peso é: %.2f" " gramas\n", pesog);
}

	
