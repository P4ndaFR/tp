#include "hash_table.h"

int main()
{
	struct entree *htab[HASHSIZE];
	int i;

	for ( i = 0 ; i < HASHSIZE ; i++ )
	{
		htab[i]=NULL;
	}

	creation("lexiquefar.txt",htab);

	return 0;
}