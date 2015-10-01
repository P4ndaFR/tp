#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct noeud
{
	char *val;
	struct noeuf *left, *right;
}Noeud;

void aff(char *chaine);
int left(Noeud * n);
int right(Noeud * n);
Noeud *create(char * chaine);
void lib (Noeud * n);