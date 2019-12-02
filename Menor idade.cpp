#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
main()
{
	int i, idade, menoridade;
	menoridade=200;
	for(i=1;i<=10;i++)
	{
		printf("\n\t Por favor colocar sua idade: ");
		scanf("%d", &idade);
		if(idade<menoridade)
		{
			menoridade=idade;
		}
	}
	printf("\n\t Mennor idade: %d", menoridade);
}