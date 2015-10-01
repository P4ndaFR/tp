
/* int tab[2][3] = { { 12, 7, 18} , { 1, 14, 2} };

Affichage */

#include <stdio.h>
#define NBLIGN 2
#define NBCOL 3

int main() {

//---------------------
// Initialisation et
// Déclaration
//---------------------

int tab[NBLIGN][NBCOL] = { { 12, 7, 18 } , { 1, 14 , 2 } }; // Toutes les valeur du tableau sont <= 99
int tab_somme_col[NBCOL] = {0};
int i;
int j;
int somme = 0;
int somme_tot = 0;

//---------------------
// Traitement =
// Affichage des
// données du tableau
//  + Calcul des :
// 1) Somme ligne
// 2) Somme colonne
// 3) Somme totale
//---------------------

for ( i = 0 ; i < NBLIGN ; i++ ){

	somme = 0;
	
	for ( j = 0 ; j < NBCOL ; j++ ){

		printf ( "%10d", tab[i][j] );
		somme = somme + tab[i][j];				// 1)
		tab_somme_col[j] = tab_somme_col[j] + tab[i][j];	// 2)
		somme_tot = somme_tot + tab[i][j];			// 3)
	}
	
	printf("|");		// Séparation verticale
	printf("%3d",somme); 	// Affichage des sommes lignes
	printf("\n");

}

//---------------------------------------
// Affichage de la séparation horizontale 
//---------------------------------------

for ( i = 0 ; i < NBCOL ; i++ ){

	printf ("__________"); // 8*_ A
}

printf ( "_____" );	
printf("\n");

//------------------------------
// Affichage des sommes colonnes
//------------------------------

for ( i = 0 ; i < NBCOL ; i++){

	printf("%10d", tab_somme_col[i]);
	
}

//-----------------------------
// Affichage de la somme totale
//-----------------------------
printf("|");
printf("%3d\n", somme_tot);

return 0;

}
