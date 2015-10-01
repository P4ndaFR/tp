#include <stdio.h>
#include <stdlib.h>

int arg_check (char **tab){

	int i;
	int debut=0; 
	
	

	for (i = 0; i < strlen(tab); i++)
	{
		if ( tab[i] <= '0' || tab[i] >= '9'){

			printf("Respectez le type d'entrée (int)\n");
			return 1;
		}
	}

	return 0;
}



int main(int argc, char **argv)
{
	int *tab = NULL;
	int somme=0;
	int n = argc - 1;
	int i;
	float moyenne;
	tab = malloc ((n)*sizeof(int));

	for (i = 0; i < n; i++)
	{
		if ( arg_check(tab) )
		{
			return 1;
		}
	}
	

	for (i = 0; i < n; i++)
	{
		tab[i] = atoi(argv[i+1]);
		somme = somme + tab[i];
	}

	moyenne = (float)somme/n;
	printf("NB d'entiers : %d, somme : %d, moyenne : %f\n",n ,somme, moyenne);

	free (tab);
	return 0;
}