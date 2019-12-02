#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 02");
	int num;
	printf("\n Digite um número entre 1 e 12 para saber quantos dias tem o mês e pressione Enter.: ");
	scanf("%d", &num);
	switch(num)
	{
		case 1:
			case 3:
				case 5:
					case 7:
						case 8:
							case 10:
								case 12: printf("\n 31 dias\n");	break;
								case 2: printf("\n 28 dias \n");	break;
								case 4:
									case 6:
										case 9:
											case 11: printf("\n 30 dias \n");	break;
											default: printf("\n O valor digitado não corresponde a um mês \n"); 
	}
	printf("\n Obrigado por usar nosso sistema.\n");
	system("pause");
}