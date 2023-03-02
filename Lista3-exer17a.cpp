#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	char nome [30];
	int idade;
	printf("Informe seu nome: ");
	gets(nome);
	printf("Informe sua idade: ");
	scanf("%d", &idade);
	printf("Nome: %s",nome);
	printf("\nIdade: %d",idade);
	
	
	
}
