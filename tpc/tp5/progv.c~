/* Auteur : Antoine Blondeau
	23/09/2014 */
#include <stdio.h>

int main(){

//---------------------
//Déclaration
//---------------------

int jour;
int mois;
int annee;
int nbr_jours_m02;

//---------------------
//Saisie
//---------------------

printf("Entrez le jour, le mois et l'année sous le format JJ/MM/AAAA\n");
scanf("%d/%d/%d",&jour,&mois,&annee);

//---------------------
//Test retour de saisie
//---------------------

//printf("%d/%d/%d\n",jour,mois,annee);

//---------------------
//Traitement
//---------------------

int j = jour;
int m = mois;
int a = annee;

if( mois >= 1 && mois <= 12 && annee > 0 && jour >= 1 ){
	
	int bissextile = (annee % 4 == 0) && (annee % 100 != 0) || ( annee % 400 == 0);	
	
	if (mois == 02 && bissextile && jour <= 29){
		
		if (jour < 29){
			jour ++;

		}else if(jour == 29 && mois < 12){
			mois ++;
			jour = 1;
		
		}else if(mois == 12){
			annee ++;
			jour = 1;
			mois = 1;
		
		}
		
	}else if (mois == 02 && jour <= 28){
		
		if (jour < 28){
			jour ++;
			
		}else if  ( jour == 28 && mois < 12 ) {
			mois ++;
			jour = 1;

		}else if ( mois == 12 ){
			annee ++;
			jour = 1;
			mois = 1;
			
		}

	}else if ( mois == 02 && bissextile && jour > 29 ) {
		
		printf("Ce mois ne compte que 29 jours");
	
	
	}else if ( mois == 02 && jour > 28 ) {
		
		printf("Ce mois ne compte que 28 jours");


	}else{
		switch (m){
		
			case 1:case 3:case 5:case 7:case 8: case 10:case 12:
			
				if (jour < 31){
					jour ++;

				}else if  ( jour == 31 && mois < 12 ){
					mois ++;
					jour = 1;
				
				}else if ( mois == 12 ){
					annee ++;	
					jour = 1;				
					mois = 1;				
				}else if ( jour > 31 ){
					printf ("Ce mois ne compte que 31 jours");	
				}
		break;
			case 4:case 6:case 9:case 11:
				if (jour < 30){
					jour ++; 

				}else if  ( jour == 30 && mois < 12 ){
					mois ++;
					jour = 1;
				}else if ( mois == 12 ){
					annee ++;	
					jour = 1;
					mois = 1;
				}else if ( jour > 30 ){
					printf("Ce mois ne compte que 30 jours");
				}
		}		
	
	}

	printf("Demain, nous serons le %d/%d/%d\n",jour,mois,annee);

}else{

	printf("Veuillez respecter le format de saisie des données : J pour Jour , M pour Mois , et A années : JJ/MM/AAAA ex : 15/08/2024\n"); 
}

return 0;

	}





