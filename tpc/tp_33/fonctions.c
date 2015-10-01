#include "header.h"

Element *ajout(int donnee, Element *tete)
{
	Element *nouveau = NULL;
	nouveau = malloc (sizeof(Element));
	nouveau->data = donnee;
	nouveau->suiv = tete;

	return nouveau;
}

void parcours(Element *tete)
{
	Element *temp = tete;

	while(temp)
	{
		printf("%d\n",temp->data);
		temp = temp->suiv;
	}
}

void libere(Element *tete)
{
	Element *temp = tete;
	Element *temp2;
	
	while(temp)
	{
		temp2 = temp->suiv;
		free(temp);
		temp = temp2;
	}
}
