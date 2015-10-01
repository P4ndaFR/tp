#include "hash_table.h"


/**
 * [creation description]
 * @param I filename [Nom du fichier lexique]
 * @return O [chaine]
 */
struct entree *creation(char *filename,struct entree **chaine)
{
	struct entree *getout=NULL;
	FILE *fp = NULL;
	char ligne[LG_MAX_LIGNE+1];
	char *separateur;

	/**
	 * Ouvre le fichier (avec test d'erreur)
	 */
	if((fp=fopen("lexiquefar.txt","r"))==NULL)
	{
		printf("Erreur d'ouverture du fichier\n");
		return getout;
	}
	/**
	 * Récupère le fichier ligne a ligne
	 * Trouve la position du séparateur (ici ':')
	 * insère un nouveau noeud
	 * avec le mot français et anglais
	 */
	while(fgets(ligne,LG_MAX_LIGNE,fp))
	{
		separateur=strchr(ligne,':');

		*separateur='\0';

		add(chaine,ligne,(separateur+1));
	}

	fclose(fp);

	return chaine;
}

void add(struct entree **htab,char *cle,char *val)
{
	struct entree *	elt;

	if ( ( elt = search(htab,cle ) ) == NULL )
	{
		elt = malloc(sizeof(struct entree) );
		elt -> key = strdup(cle); // magie
		
		elt -> value = val;
		index=hash(cle); // appel fct de hachage
		elt -> next = htab[index]; // insertion en tête
		htab[index] = elt;// de la liste / un slot
	}
	else
	{
		elt -> value= val; // Si la clé existe, on remplace la valeur ( ou pas, selon	 spécifs )
	}
}

struct entree * search(struct entree **htab, char *cle)
{
	strut entree *elt;
	elt=htab[hash(cle)];
	while(elt)
	{
		if(!strcmp(cle,elt-key))
		{
			return elt ;
		}
	elt = elt -> next ;
	}
}

int exists(struct entree **htab, char *cle)
{
	return search(htab,cle) != NULL ;
}

int hash (const char *cle) 
{ 

	unsigned long hashval = 0;
	for(hashval=0;*cle != '\0';cle++) 
	{
 		hashval = 31*hashval + *cle;
	}
 	hashval = hashval % HASHSIZE;
 
	return (int)hashval; 
}