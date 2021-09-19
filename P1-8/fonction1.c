#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int plusMoins(int i)

{
	int coups = 0;
	int nombreMystere = 0, nombreEntre = 0;
	const int MAX = 100, MIiN = 1;

	srand(time(NULL));
	nombreMystere = (rand() % (MAX - MIN +1)) + MIN;

	do 
	{
		printf("Quel est le nombre ?");
		coups++;
		scanf("%d", &nombreEntre);

		if (nombreMystere > nombreEntre)
			printf("C'est plus !\n\n");
		else if (nombreMystere < nombreEntre)
			printf("C'est moins !\n\n");
		else
			printf("Bravo, vous avez trouvé le nombre mystère en %d coups!!\n\n", coups);
	}
	while (nombreEntre != nombreMystere);

	return 0;
}

int main(int argc, char** argv)
{
	int continuerPartie = 0;

	do 
	{ 
		plusMoins(0);
		{

		printf("Voulez-vous refaire une partie ? Si oui tapez 1, sinon tapez 0\n");
	       scanf("%d", &continuerPartie);
		}
	}
	while (continuerPartie != 0);

	return 0;
}


