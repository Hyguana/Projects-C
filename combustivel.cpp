#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
main()
{
	//Prepara��o do sistema para portugu�s
	setlocale(LC_ALL, "Portuguese");
	system("color 03");
	//Declara��o das vari�veis
	float combA, combB, res;
	//Coleta dos dados
	printf("\n\t\t Ol�, com este programa vamos calcular qual combust�vel compensa abastecer.");
	printf("\n\t Por favor seguir os passos abaixo, inserindo v�rgula Exemplo: 2,50");
	printf("\n\n\t Por favor inserir o valor do combust�vel com o MENOR valor e pressione enter: ");
	scanf("%f", &combA);
	printf("\n\n\t Por favor inserir o valor do combustivel de MAIOR valor e pressione enter: ");
	scanf("%f", &combB);
	//Processamento dos dados
	res = (combA/combB);
	
	if (res <= 0.7)
	{
		system("color 02");
		printf("\n\n\t\t\t Abastecer com o Combust�vel de MENOR valor.\n\n");
	}
	else
	{
		system("color 04");
		printf("\n\n\t\t\t Abastecer com o combust�vel de MAIOR valor\n\n");
	}
	printf("\n\n\t Agradecemos por usar nosso sistema.\n DSA.\n\n");
	system("pause");
	
}