#include "polynome.h"

int main(){
	
	Monome *tete = NULL;

	Ajout_ordreM(1,1,&tete);
	//P_AjoutM(3,2,&tete);
	//P_AjoutM(4,5,&tete);

	Ajout_ordreM(2,10,&tete);
	Ajout_ordreM(2,8,&tete);
	Ajout_ordreM(3.5,2,&tete);
	Ajout_ordreM(4,2,&tete);
	Affichage(tete);

	return 0;
}
