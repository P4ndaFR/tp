#include "polynome.h"

/**
 * [F_ajoutM
 * Ajout en tête d'un monome dans la liste chainée
 * du polynome]
 * @param  c    [E coefficient du monome]
 * @param  e    [E exposant du monome]
 * @param  next [E adresse de l'élément suivant]
 * @return      [E nouvelle adresse de tête]
 */

Monome *F_AjoutM(float c, int e, Monome* next)
{
	
	Monome *nouveau = NULL;
	nouveau = malloc(sizeof(Monome));
	nouveau->coeff=c;
	nouveau->exposant=e;
	nouveau->suiv=next;

	return nouveau;
}

/**
 * [P_ajoutM
 * Ajout en tête d'un monome dans la liste chainée du polynome]
 * @param c     [E coefficient du monome]
 * @param e     [E exposant du monome]
 * @param ptete [E/S Adresse de tête de la liste chainée]
 */
void P_AjoutM(float c, int e, Monome** ptete)
{
	
	Monome *tete = *ptete;
	
	Monome *nouveau = NULL;
	nouveau = malloc(sizeof(Monome));
	nouveau->coeff=c;
	nouveau->exposant=e;
	nouveau->suiv=tete;

	*ptete = nouveau;
}

/**
 * [Affichage]
 * Parcours avec Affichage de la Liste Chainée
 * @param tete [E tete de chaine]
 */
void Affichage(const Monome *tete)
{
	
	Monome *pmonome = tete;
	while(pmonome){
		
		printf("%fX^%d",pmonome->coeff,pmonome->exposant);
		
		if(tete->coeff >= 0 && pmonome->suiv)
		{
			printf(" + ");
		}
	
		pmonome = pmonome->suiv;
	}
	printf("\n");
}

/**
 * [P_AjoutM_Queue description]
 * 
 * @param c      [description]
 * @param e      [description]
 * @param pqueue [description]
 * @param suiv   [description]
 */
void P_AjoutM_Queue(float c, int e,Monome** pqueue,Monome *suiv)
{
	Monome* queue = *pqueue;

	Monome *nouveau = NULL;
	nouveau = malloc (sizeof(Monome));
	nouveau->coeff = c;
	nouveau->exposant = e;
	nouveau->suiv=suiv;
	queue->suiv = nouveau;

	*pqueue = queue;
	
}

int Ajout_ordreM(float c, int e,Monome** ptete)
{
	Monome *tete = *ptete;

	Monome *pmonome = tete;
	Monome *precedent = NULL;

	/* Cas 1 a : polynome vide */
	if( !tete )
	{
		P_AjoutM(c,e,ptete);
		return 0;
	}


	while(pmonome)
	{ 
		/**
		 * Cas 4
		 * 
		 * Quand monome de même
		 * degré déja exisant
		 *
		 * (Non Fonctionnel)
		 */
		if ( c == 4) printf("exp:%d\n",pmonome->exposant);
		if(e == pmonome->exposant)
		{
			printf("cas 4\n");
			pmonome->coeff = pmonome->coeff + c;
			*ptete = tete;
			return 0;
		}
		/**
		 * Cas 1
		 *
		 * Ajout en tête de tous les monomes
		 *
		 * (FOnctionnel)
		 */
		if(e > tete->exposant)
		{
			P_AjoutM(c,e,ptete);
			return 0;
		}

		/**
		 * Cas 2
		 * 
		 * Ajout entre deux
		 * éléments (En queue)
		 * 
		 * (Non Fonctionnel)
		 */
		
		if(e > pmonome->exposant)
		{
			P_AjoutM_Queue(c,e,&precedent,pmonome->suiv);
			*ptete = tete;
			return 0;
		}

		/**
		 * Stockage de l'adresse précédente, 
		 * Progression de l'adresse à la structure suivante
		 */
		precedent = pmonome;
		pmonome = pmonome->suiv;

	}

	*ptete = tete;
	return 0;
}