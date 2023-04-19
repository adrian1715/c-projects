#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// VERSAO SIMPLIFICADA: sorteia apenas um jogo por vez

int i;

// VERSAO UTILIZADA (com switch e strcpy):
void sorteador()
{
	char times1[20], times2[20];
	int num, num2;

	srand(time(NULL));

	do
	{
		system("cls");
		num = rand() % 8 + 1;

		switch (num)
		{
		case 1:
			strcpy(times1, "Palmeiras");
			break;
		case 2:
			strcpy(times1, "Internacional");
			break;
		case 3:
			strcpy(times1, "Barcelona SC");
			break;
		case 4:
			strcpy(times1, "Fluminense");
			break;
		case 5:
			strcpy(times1, "Racing");
			break;
		case 6:
			strcpy(times1, "Argentinos Juniors");
			break;
		case 7:
			strcpy(times1, "Flamengo");
			break;
		case 8:
			strcpy(times1, "Atletico Mineiro");
			break;
		}

		num2 = rand() % 8 + 1;

		switch (num2)
		{
		case 1:
			strcpy(times2, "Defensa y Justicia");
			break;
		case 2:
			strcpy(times2, "Olimpia");
			break;
		case 3:
			strcpy(times2, "Boca Juniors");
			break;
		case 4:
			strcpy(times2, "River Plate");
			;
			break;
		case 5:
			strcpy(times2, "Sao Paulo");
			break;
		case 6:
			strcpy(times2, "Universidad Catolica");
			break;
		case 7:
			strcpy(times2, "Velez Sarsfield");
			break;
		case 8:
			strcpy(times2, "Cerro Porteno");
			break;
		}

		printf("%s x %s\n", times1, times2);

		printf("\n1- Sortear novamente\n2- Sair\n");
		scanf("%d", &i);
	} while (i == 1);
}

main()
{
	do
	{
		sorteador();
		while (i > 2 || i < 1)
		{
			printf("Valor invalido!\n");
			printf("\n1- Sortear novamente\n2- Sair\n");
			scanf("%d", &i);
		}
	} while (i == 1);
}
