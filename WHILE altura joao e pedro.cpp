#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
main()
{
	float alturaJoao = 1.4, alturaPedro = 1.25;
	int anos = 0;
	while (alturaPedro <= alturaJoao)
	{
		alturaJoao = alturaJoao + 0.03;
		alturaPedro = alturaPedro + 0.05;
		anos = anos + 1;
	}
	printf(" Serao necessarios %d anos para Pedro ficar mais alt oque Joao", anos);
	getch();
}