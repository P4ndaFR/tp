/* Programme demandé :
Sur la ligne de commande, passer une chaine quelconque et un entier

- tester qu'il y a bien 2 args / ligne de commande (verfife que le second est un entier > 0)
- Afficher la chaine le nombre de fois demandé.
./a.out "bonjour comment ça va" 3
bonjour comment ça va
bonjour comment ça va
bonjour comment ça va
si test KO ===> message d'erreur explicite puis arrêt du programme. */

#include <stdio.h>

int main(int argc, char **argv)
{

	int i;

	if( argc != 3 || atoi (argv[2]) <= 0)
	{
		printf("Entrez un nombre positif et respectez le format : \n \" chaine de caractère / nombre de répétition \" \n");
		return 1;
	}
	for ( i = 0; i < atoi( argv[2]) ; ++i)
	{
		printf("%s\n", argv[1]);
	}

	return 0;
}