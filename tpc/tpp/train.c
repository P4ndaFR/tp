#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
	int *p=malloc(sizeof(int)*50);

	FILE* fp = NULL;
	int i;

	if(fp=fopen("stockage","w")==NULL)
	{
		printf("Erreur d'ouverture fichier\n");
		return -1;
	}

	for (i = 0; i < 50; ++i)
	{
		*p=5;
		fwrite(&(p),sizeof(int),1,fp);
		i++;
	}
}