#include "f.h"
int main()
{
	Noeud *racine = create("salut");
	printf("fils D : %d, fils G %d\n",right(racine),left(racine));
	printf("racine :");
	aff(racine->val);
	return 0;
}