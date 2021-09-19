#include<stdio.h>

int menu()
{
	int choix = 0;

	if (choix < 1 || choix > 4)
	{ 
		printf("menu:\n");
		printf("1 : Petit salé\n");
		printf("2 : Aligot saucisse fumée\n");
		printf("3 : Couscous Marocain \n");
		printf("4 : Surprise du chef\n");
		printf("Votre choix ?");
		scanf("%d", &choix);
	}
	
	return choix;
}

int main(int argc, char *argv[])
{
	switch (menu())
	{
		case 1:
			printf("Vous avez pris le petit salé\n");
			break;
		case 2:
			printf("Vous avez pris l'aligot\n");
			break;
		case 3:
			printf("Vous avez pris le couscous\n");
			break;
		case 4:
			printf("Vous avez pris la surprise du Chef. Quel aventurier !\n");
			break;
		default:
			printf("Ce plat n'existe pas\n");
	}
	return 0;
}
