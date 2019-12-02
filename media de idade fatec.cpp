#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
main()
{
	char resp;
	int idade,somaIdade,contPessoas,idadeMaisVelho,mediaIdade,meiaIdade;
	contPessoas=0;
	somaIdade=0;
	idadeMaisVelho=0;
	resp='s';
	while(resp =='S'||resp =='s')
	{
		printf("\n\t Por favor inserir dua idade: ");
		scanf("%d",&idade);
		somaIdade=somaIdade+idade;
		contPessoas=contPessoas+1;
		if(idade>=idadeMaisVelho)
		{
			idadeMaisVelho=idade;
		}
		
		printf("\n\t Deseja continuar digite S ou N ?");
		fflush(stdin);
		scanf("%c", &resp);
	}
	meiaIdade=somaIdade/contPessoas;
	printf("\n\t Media de idade : %d, Idade da pessoas mais velha: %d", mediaIdade, idadeMaisVelho);
}