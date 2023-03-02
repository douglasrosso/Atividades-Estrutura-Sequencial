#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	int celsius, fahrenheit;
	printf("Informe temperatura em celsius: ");
	scanf("%d", &celsius);
	fahrenheit=(celsius * 9/5) + 32;
	printf("Temperatura em Fahrenheit: %d", fahrenheit);
}
