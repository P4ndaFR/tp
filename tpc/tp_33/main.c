#include "header.h"

int main()
{
	Element* tete=NULL;

	tete = ajout(12, tete);
	tete = ajout(45, tete);
	tete = ajout(63, tete);

	parcours(tete);
	libere(tete);
	return 0;
}