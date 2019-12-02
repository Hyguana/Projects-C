//Algoritmo "Valor Hora Técnica"
// Função : Calcular Hora Técnica, para cobrar corretamente de cliente.
// Autor : Daniel Silva de Assunção
// Data : 06/08/2018
// Seção de Declarações

//Inclusão das bibliotecas
#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>
//#include <locale.h>

//Inicio

main(void)

//Seção de Comandos

{
	//Variávies
	//O comando "float", é para usar valores reais.
	float valorHora, valorMinuto, valorTotal, inicioHora, fimHora, totalMinutos, totalHoras;
	//int inicioHora, fimHora, totalMinutos, totalHoras;
	//system("CLS");//Comando para limpar a tela
	//setlocale(LC_ALL, "Portuguese");//comando p/ definir o idioma de acentuação
	//Coleta dos dados a serem tratados
	// Parte 1
	//system("color 03");
	printf("\n\t\t\t Ola, Obrigado por usar nosso sistema.");
	printf("\n\t\t Por favor insedir o valor da Hora Tecnica atual.: ");
	scanf("%f",& valorHora);
	printf("\n\t Obrigado.\n");
	//system("pause");
	//system("cls");
	//Parte 2
	//system("color 0c");
	printf("\n\t Por favor Inserir a hora inicial (formato 24hs).: ");
	scanf("%f",& inicioHora);
	printf("\n\t Obrigado.\n");
	//system("pause");
	//system("cls");
	//Parte 3
	//system("color 0c");
	printf("\n\t Por favor Inserir a hora final (formato 24hs).: ");
	scanf("%f",& fimHora);
	printf("\n\t Obrigado.\n");
	//system("pause");
	//system("cls");
	//Tratamento dos dados.

	valorMinuto = valorHora / 60;
	printf("\n\t Valor do minuto.: %.2f", valorMinuto);
	totalHoras = fimHora - inicioHora;
	printf("\n\t Total de Horas .: %f", totalHoras);
	totalMinutos = totalHoras * 60;
	printf("\n\t Total de Minutos.: %f", totalMinutos);
	valorTotal = totalMinutos * valorMinuto;
	printf("\n\t Valor Total Realizado .: %.2f\n", valorTotal);

	system("pause");
}

//Fimalgoritmo
