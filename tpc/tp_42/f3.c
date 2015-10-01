#include "f.h"

Noeud * create(char * chaine)
{
	Noeud *n=malloc(sizeof(Noeud));
	n->left=NULL;
	n->right=NULL;
	n->val=malloc(strlen(chaine)+1);
	strcpy(n->val,chaine);
	return n;
}

void lib(Noeud *n)
{
	free(n->val);
	free(n);
}
