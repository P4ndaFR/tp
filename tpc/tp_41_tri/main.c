#include "tri.h"


int main()
{
	srand(time(NULL));
	int tab[TAILLE],i;
	for (i = 0; i < TAILLE; i++)
	{
		tab[i]=rand();
	}
	//tri_insertion(tab,TAILLE);
	qsort()
	for (i = 0; i < 3; i++)
	{
		printf("%d\n",tab[i]);
	}
	for (i = TAILLE-3; i < TAILLE; i++)
	{
		printf("%d\n",tab[i]);
	}
	return 0;
}