#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	char nome[20], descricao[90];
	float frequencia, media;
	printf("Informe o nome da disciplina: "); gets(nome);
	printf("Informe a descrição da diciplina: "); gets(descricao);
	frequencia=75;
	media=6;
	printf("\nDisciplina: %s", nome);
	printf("\nDescrição: %s", descricao);
	printf("\nFrequência: %.0f%%", frequencia);
	printf("\nMédia: %.0f\n", media);
	

}
