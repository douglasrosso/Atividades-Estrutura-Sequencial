#include<stdio.h>
main()
{
	char nome[30], sexo;
	int idade;
	printf("Informe seu nome: ");
	gets(nome);
	printf("Informe sua idade: ");
	scanf("%d", &idade);
	printf("informe seu sexo: ");
	fflush(stdin);
	scanf("%c", &sexo);
	printf("Nome: %s",nome);
	printf("\nIdade: %d",idade);
	
}







