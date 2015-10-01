#include <stdio.h>
#define LMAXLIGNE 100

int main()
{

	struct client
	{
		char nom[10];
		char prenom[10];
		int solde;
	};

	struct client un_client;

	FILE *fp;
	//char ligne[LMAXLIGNE+1];
	


	if((fp=fopen("unfichier3","w+"))==NULL)
	{
		printf("Erreur d'ouverture de fichier\n");
		return 1;
	}

	struct client tab[2]={{"Dupont","Marcel",1000},{"Le Gall","Kevin",500}};

	fwrite(tab,sizeof(struct client),2,fp);

	int num_client = 1;

	/*fclose(fp);

	if((fp=fopen("unfichier3","r"))==NULL)
	{
		printf("Erreur d'ouverture de fichier\n");
		return 1;
	}*/

	fseek(fp,sizeof(struct client)*0,SEEK_SET);
	
	while(fread(&un_client ,sizeof(struct client),1,fp))
	{
		printf("Client %d : MR %s %s a %d Euros\n",num_client,un_client.nom,un_client.prenom,un_client.solde);
		num_client++;
	}

	fseek(fp,sizeof(struct client)*0,SEEK_SET);
	fread(&un_client,sizeof(struct client),1,fp);

	printf("Client : MR %s %s a %d Euros\n",un_client.nom,un_client.prenom,un_client.solde);
	fclose(fp);
	 
	/*
	fprintf(fp,"Ici c'est le CIR1\n");
	fprintf(fp,"Bonjour\nTout le monde\n");
	fclose(fp);
	*/

	/*
	while( fgets(ligne,LMAXLIGNE,fp))
	{
	printf("Ligne:%s",ligne);
	}
	*/

	return 0;
}