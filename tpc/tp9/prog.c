/* But : Rechercher dans 2 tableaux les éléments identiques au même indice : combien ? lesquels ?

#define N 5
int main(){ 
	
	char tab1[N] = {'a','b','c','d','e'};
	char tab2[N] = {'b','a','c','a','e'};

*/

#include <stdio.h>
#define N 5

int main(){

//------------------------------
//Déclarations + Initialisations
//------------------------------


char tab1[N] = {'a','b','c','d','e'};
char tab2[N] = {'b','a','c','a','e'};
char tab3[N]  = {0};
int compteur = 0;
int i;
int j;
int nb = 0;

/*----------------------------------
            Traitement
  
   Boucle for : Parcours des indices
   if : condition d'égalité des vale
	urs des tableaux 1 et 2 
   l40 : association de la 1ère 
	valeur commune au 1er indice
	du tab3 (-> compteur placé
	l45 ) 

------------------------------------ */


for ( i = 0 ; i < N ; i++ ){ 				
	
	if ( tab1[i] == tab2[i] ){
		
		tab3[compteur] = tab1[i];

		compteur++;
	
	}
	
	
	for ( j = 0 ; j < N ; j++ ){
	
		if (tab1[i] == tab2[j] ){

			nb++;

			break;
		}

	}

}

//------------------------------
//         Affichage
//-------------------------------

printf( "Nombres d'éléments identiques : %d\n", compteur );

for ( i = 0 ; i < compteur ; i++ ){

	printf( "Les éléments identiques sont : %c\n", tab3[i]);

}

printf( " Il existe %d lettres communes à tab1 et tab2\n", nb );

return 0;

}
