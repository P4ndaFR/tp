#include "f.h"
int left(Noeud *n)
{
	if(n->left) return 1;
	return 0;
}
int right(Noeud *n)
{
	if(n->right) return 1;
	return 0;
}