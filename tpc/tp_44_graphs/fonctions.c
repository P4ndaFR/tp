#include "graph.h"

ushort **create_graph(int nb_nds)
{
	ushort **adj = NULL;
	uint i,j,i_deb,i_fin;
	char nom1[LG_MAX],nom2[LG_MAX];
	FILE *fp;
	char *separateur1,separateur2,ligne;

	adj=malloc(nb_nds * sizeof(ushort *));
	for ( i = 0; i < nb_nds ; i++)
	{
		adj[i]=malloc(sizeof(ushort));
		for( j = 0 ; j < nb_nds ; j++)
		{
			adj[i][j]=0;
		}
	}

	if((fp=fopen("lexiquefar.txt","r"))==NULL)
	{
		printf("Erreur d'ouverture du fichier\n");
		exit();
	}

	while(fgets(ligne,LG_MAX_LIGNE,fp))
	{
		separateur1=strchr(ligne,',');
		*separateur1='\0';
		separateur2=strchr(ligne,',');
		*separateur2='\0';
		

	}


	fclose(fp);

}	

int indice( char *tab_ville )
{
	
}
