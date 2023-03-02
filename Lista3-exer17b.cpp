#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	char nome [30], sexo;
	int idade;
	printf("Informe seu nome: ");
	gets(nome);
	printf("Informe seu sexo: ");
	scanf("%c", &sexo);
	printf("Informe sua idade: ");
	scanf("%d", &idade);
	printf("Nome: %s",nome);
	printf("\nSexo: %c",sexo);
	printf("\nIdade: %d",idade);

}
