#include <stdio.h>
#define MAX_SAISIE 5
int main(){

int entier = 0;
int compteur = 0;
int somme = 0;


while ( entier >= 0 && compteur < MAX_SAISIE){

	printf("Entrez un entier positif\n");
	
	scanf("%d",&entier);
	while(getchar()!='\n');
	
	if ( entier >= 0 ){
		
		printf(" L'entier est %d \n",entier);
			
		compteur ++;
		
		somme = somme + entier;

	}

	
}
if (compteur != 0){

	printf("La somme vaut : %d\n",somme);

	//printf("%d",compteur);

	printf("la moyenne vaut : %f\n",(float)somme/compteur);
}else{
	printf("Vous devez taper un entier positif pour obtenir un résultat\n");

}


return 0;

}
