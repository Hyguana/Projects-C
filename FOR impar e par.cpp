#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

main()
{
	system("color 02");
	int contador, num;
	for(contador = 1; contador <= 100; contador = contador + 1)
	{
		printf("\n Digite um numero inteiro: ");
		scanf("%d", &num);
		if(num % 2 != 0)
		{
			printf("\n %d e IMPAR \n", num);
		}
		else
		{
			printf("\n %d e PAR \n", num);
		}
	}
	getch();
}