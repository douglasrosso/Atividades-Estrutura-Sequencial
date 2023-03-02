
 #include<stdio.h>
main()
{
	char nome[30], endereco[30], cidade[30], uf[3], nascimento[12];
	int cep, telefone, cpf, rg;
	printf("Informe seu nome: "); gets(nome); 
	printf("Informe seu endereco: "); gets(endereco);
	printf("Informe seu cidade: "); gets(cidade);
	printf("Informe seu uf: "); gets(uf);
	printf("Informe seu nascimento: "); gets(nascimento);
	printf("Informe cep: "); scanf("%d", &cep);
	printf("Informe telefone: "); scanf("%d", &telefone);
	printf("Informe cpf: "); scanf("%d", &cpf);
	printf("Informe rg: "); scanf("%d", &rg);
	printf("Nome: %s\nEndereco: %s\ncidade: %s\nUF: %s", nome, endereco, cidade, uf);
	printf("Nascimento: %s\ncep: %d\ntelefone: %d\nCPF: %d\nRG: %d", nascimento, cep, telefone, cpf, rg );	
}
