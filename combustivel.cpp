#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
main()
{
	//Preparação do sistema para português
	setlocale(LC_ALL, "Portuguese");
	system("color 03");
	//Declaração das variáveis
	float combA, combB, res;
	//Coleta dos dados
	printf("\n\t\t Olá, com este programa vamos calcular qual combustível compensa abastecer.");
	printf("\n\t Por favor seguir os passos abaixo, inserindo vírgula Exemplo: 2,50");
	printf("\n\n\t Por favor inserir o valor do combustível com o MENOR valor e pressione enter: ");
	scanf("%f", &combA);
	printf("\n\n\t Por favor inserir o valor do combustivel de MAIOR valor e pressione enter: ");
	scanf("%f", &combB);
	//Processamento dos dados
	res = (combA/combB);
	
	if (res <= 0.7)
	{
		system("color 02");
		printf("\n\n\t\t\t Abastecer com o Combustível de MENOR valor.\n\n");
	}
	else
	{
		system("color 04");
		printf("\n\n\t\t\t Abastecer com o combustível de MAIOR valor\n\n");
	}
	printf("\n\n\t Agradecemos por usar nosso sistema.\n DSA.\n\n");
	system("pause");
	
}