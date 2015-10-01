/*

|=================================================|
|- Lire au clavier les informations pour remplir  |
|   un tableau de structures "point" le nbr       |
|   d'éléments du tableau est fixé par un #define |
| - une fois toutes les saisies terminées, 	      |
|   afficher toutes les informations			  |
|=================================================|

*/

#include <stdio.h>
#include <stdlib.h>
#define LG_MAX 2

typedef struct 
	{
		int num;
		float x;
		float y;
	} point;

void saisie(point *tab_saisie)
{
	int i;

	for (i = 0; i < LG_MAX; i++)
	{
		printf("Entrez x\n");
		scanf("%f",&tab_saisie[i].x);
		printf("Entrez y\n");
		scanf("%f",&tab_saisie[i].y);
		tab_saisie[i].num = i+1;
	}
}

void affiche(point *tab)
{
	int i;
	for (i = 0; i < LG_MAX; i++)
	{
		printf("Numéro d'ordre:%d\nx:%f\ny:%f\n",tab[i].num,tab[i].x,tab[i].y);
	}
}

int main()
{

	point *tab = malloc(LG_MAX*sizeof(point));

	saisie(tab);

	affiche(tab);

	return 0;
}