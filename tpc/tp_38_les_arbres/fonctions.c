#include "arbre.h"

/**
 * [inserer description]
 * @param  I fr     [mot français]
 * @param  I en     [mot anglais]
 * @param  I/O racine [adresse de la racine]
 * @return O      [racine]
 */
Noeud *inserer(char *fr,char *en,Noeud *racine)
{	
	/** Si le mot n'existe pas encore */
	if(!racine)
	{
	racine = malloc(sizeof(Noeud));

	racine -> gauche = NULL;
	racine -> droite = NULL;

	racine -> mot_fr = (malloc((strlen(fr)+1)*sizeof(char)));
	racine -> mot_en = (malloc((strlen(en)+1)*sizeof(char)));

	strcpy(racine->mot_fr,fr);
	strcpy(racine->mot_en,en);
	}
	/** Création du Fils gauche */
	else if(strcmp(fr,racine->mot_fr) < 0)
	{
		//descend et recommence (récursif)
		racine->gauche=inserer(fr,en,racine->gauche);
	}
	/** Création du Fils droit */
	else if(strcmp(fr,racine->mot_fr) > 0)
	{
		//descend et recommence (récursif)
		racine->droite=inserer(fr,en,racine->droite);
	}
	/** Si un mot existe déja */
	else
	{
		printf("Ce mot existe déja\n");
		printf("Mot FR: %s\n",racine->mot_fr);
		printf("Mot EN: %s\n",racine->mot_en);
	}

	return racine;
}

/**
 * [traduction description]
 * @param I fr     [mot français à traduire]
 * @param I racine [adresse de la racine]
 * @return O       [description]
 */
char *traduction(char *fr, Noeud *racine)
{

	if(racine == NULL)
	{
		return "Erreur";
	}
	/** Mot entré correspondant */
	else if (strcmp(fr,racine->mot_fr) == 0)
	{
		return racine->mot_en;
	}
	/** Mot entré précède (alphabet) mot noeud */
	else if(strcmp(fr,racine->mot_fr) < 0)
	{
		racine = racine->gauche;
		traduction(fr,racine);
	}
	/** Mot entré succède (alphabet) mot noeud */
	else if(strcmp(fr,racine->mot_fr) > 0)
	{
		racine = racine->droite;
		traduction(fr,racine);
	}

	return "Fini";
}

/**
 * [affichage description]
 * @param I node [adresse du noeud a afficher]
 */
void affichage(Noeud* node)
{
	if(node==NULL)
	{
		printf("Plus rien a afficher\n");
	}
	else
	{
		printf("Mot français : %s\n",node->mot_fr);
		printf("Mot anglais : %s\n",node->mot_en);
	}
}

/**
 * [parcoursGRD description]
 * @param racine [adresse de la racine]
 */
void parcoursGRD(Noeud* racine)
{
	/**
	 * **************G****************
	 * teste si gauche existant
	 * vas descend a gauche (récursif)
	 */
	if(racine->gauche != NULL)
	{
		parcoursGRD(racine->gauche);
	}
	/**
	 * *******R*********
	 * Affiche la racine
	 */
	affichage(racine);
	/**
	 * ***************D********************
	 * teste si droite existant 	
	 * Vas descend a droite (récursif)
	 */
	if(racine->droite != NULL)
	{
		parcoursGRD(racine->droite);
	}
}

/**
 * [creation description]
 * @param  I filename [Nom du fichier lexique]
 * @return O         [racine]
 */
Noeud *creation(char *filename)
{
	Noeud* getout=NULL;
	FILE *fp = NULL;
	char ligne[LG_MAX_LIGNE+1];
	char *separateur;
	Noeud *racine;
	
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

		racine=inserer(ligne,(separateur+1),racine);
	}

	fclose(fp);

	return racine;
}

/**
 * Statue de
 * la
 */
void liberte(Noeud* racine)
{
	if(racine->gauche != NULL)
	{
		liberte(racine->gauche);
	}

	if(racine->droite != NULL)
	{
		liberte(racine->droite);
	}

	free(racine->mot_fr);
	free(racine->mot_en);
	free(racine);
}

int hauteur(Noeud* racine)
{
	if(racine == NULL)
	{
		return 0;
	}
	else
	{
		return 1+MAX(hauteur(racine->droite),hauteur(racine->gauche));
	}
}

void push(File **p_file,Noeud *node)
{
	File *new_p=malloc(sizeof(new_p));

	
	new_p->suivant=NULL;
	new_p->node=node;

	if(*p_file == NULL)
	{
		*p_file=new_p;
	}
	else
	{
		File *p_temp = *p_file;
		while(p_temp->suivant != NULL)
		{
			p_temp=p_temp->suivant;	
		}
		p_temp->suivant=new_p;
	}
}

Noeud *pull(File **p_file)
{
    Noeud *ret = NULL;
    /* On teste si la file n'est pas vide. */
    if (*p_file != NULL)
    {
        /* Création d'un élément temporaire pointant vers le deuxième élément de la file. */
        File *p_tmp = (*p_file)->suivant;
        /* Valeur à retourner */
        ret = (*p_file)->node;
        /* Effacement du premier élément. */
        free(*p_file), *p_file = NULL;
        /* On fait pointer la file vers le deuxième élément. */
        *p_file = p_tmp;
    }
    return ret;
}

/**
 * [parcoursLargeur description]
 * @param racine I[racine de l'arbre]
 */
void parcoursLargeur(Noeud *racine)
{
	//Création du pointeur de file 
	File *p_file=NULL;
	//Création du noeud de stockage temporaire
	Noeud* node=NULL;
	//On met la racine dans la file
	push(&p_file,racine);
	//Tant qu'il y a un élément dans la file;
	while(p_file != NULL)
	{
		//on retire le noeud de la file et on le stocke
		//dans le noeud temp
		node = pull(&p_file);
		//on affiche le contenu du noeud temporaire
		affichage(node);
		//Si il existe un fils gauche a ce noeud
		//on le met dans la file
		if(node->gauche != NULL)
		{
			push(&p_file,node->gauche);
		}

		//Si il existe un fils droit a ce noeud
		//on le met dans la file
		if(node->droite != NULL)
		{
			push(&p_file,node->droite);
		}
		//et on recommence
	}
}

void parcoursGRD_action(Noeud* racine,void(*f)(Noeud *))
{
	if(racine->gauche != NULL)
	{
		parcoursGRD_action(racine->gauche,f);
	}
	f(racine);
	if(racine->droite != NULL)
	{
		parcoursGRD_action(racine->droite,f);
	}
}

Noeud* arbre_vers_vigne(Noeud* racine)
{
    // Convert tree to a "vine", i.e., a sorted linked list,
    // using the droite pointers to point to the next node in the list
    Noeud* tail = racine;
    Noeud* rest = racine->droite;
    Noeud* temp=NULL;
    while (rest != NULL)
    {
        if(rest->gauche == NULL)
        {
            tail = rest;
            rest = rest->droite;
        }
        else
        {
            temp = rest->gauche;
            rest->gauche = temp->droite;
            temp->droite = rest;
            rest = temp;
            tail->droite = temp;
    	}
    }

    return racine;
}

Noeud* vigne_vers_arbre(Noeud *racine)
{
	int size = hauteur(racine);
	int node = size + 1 - (pow(2, floor(log2(size + 1))));
    compress(racine, node);
    size = size - node;
    while (size > 1)
    {
        compress(racine, floor(size / 2));
        size = floor(size / 2);
    }

    return racine;
}

Noeud* compress(Noeud* racine, int count)
{
	Noeud *scanner = racine;
	int i;
    for( i = 0 ; i < count ; i++)
    {	
        Noeud *enfant = scanner->droite;
        scanner->droite = enfant->droite;
        scanner = scanner->droite;
        enfant->droite = scanner->gauche;
        scanner->gauche = enfant;
    }

    return racine;
}