#include <stdio.h>
#include <stdlib.h>

typedef struct element{
	int data;
	struct element *suiv;
} Element;

int main()
{
	Element* tete=NULL;
	
	/* Création élément 1 */
	
	tete = malloc (sizeof(Element));
	tete->data = 12;
	tete->suiv = NULL;
	
	/*Création élément 2 */
	
	Element *newElement = NULL;
	
	newElement= malloc(sizeof(Element));
	newElement->data = 45;
	newElement->suiv = tete;
	
	tete = newElement;
	
	Element *temp = tete;

	while(temp)
	{
		printf("%d\n",temp->data);
		temp = temp->suiv;
	}

	free(tete);
	free(newElement);

	return 0;
}