#include <stdio.h>
#include <stdlib.h>

typedef struct element{
	int data;
	struct element *suiv;
} Element;

Element *ajout_queue(int donnee, Element *queue);
void parcours(Element *tete);
void libere(Element *tete);