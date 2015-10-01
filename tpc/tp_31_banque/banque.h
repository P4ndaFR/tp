#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LG_MAX 30

typedef struct 
{
	char *nom;
	char *prenom;
	double solde;
} Client; 

int ajout_client(Client**, int);

void affichage(Client *,int);

int recherche(Client *, int);

int virement(Client *, int);

int suppression_client(Client *, int,int);
