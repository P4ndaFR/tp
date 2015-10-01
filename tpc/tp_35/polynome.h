#include <stdio.h>
#include <stdlib.h>

typedef struct monome{
	float coeff;
	int exposant;
	struct monome *suiv;
}Monome;

Monome *F_AjoutM(float c, int e, Monome* tete);

void P_AjoutM(float c, int e, Monome** ptete);

void Affichage(const Monome *tete);

int Ajout_ordreM(float c, int e,Monome **ptete);

void P_AjoutM_Queue(float c, int e,Monome** pqueue, Monome *suiv);