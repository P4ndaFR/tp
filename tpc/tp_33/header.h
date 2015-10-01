#include <stdio.h>
#include <stdlib.h>

typedef struct element{
	int data;
	struct element *suiv;
} Element;

Element *ajout(int donnee, Element *tete);
void parcours(Element *tete);
void libere(Element *tete);