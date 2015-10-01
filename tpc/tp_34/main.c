#include "header.h"

int main()
{
	Element* tete=NULL, *queue = NULL;

	tete = ajout(12, tete);
	queue=tete;
	queue = ajout_queue(45, queue);
	queue = ajout_queue(17, queue);

	parcours(tete);
	libere(tete);
	return 0;
}