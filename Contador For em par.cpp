#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
main()
{
	int contador;
	for (contador=1;contador<=100;contador++)
	{
		if(contador % 2 == 0)
		{
			printf("\n %d", contador);
		}
	}
}