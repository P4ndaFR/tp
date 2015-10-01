#include "arbre.h"


int main()
{
	Noeud *racine;
	racine=creation("lexiquefar.txt");
	//parcoursGRD(racine);
	printf("%s\n",traduction("Profilage",racine));
	//parcoursLargeur(racine);
	//parcoursGRD_action(racine,affichage);
	//arbre_vers_vigne(racine);
	//vigne_vers_arbre(racine);
	//printf("%d\n",hauteur(racine));
	liberte(racine);
	return 0;
}