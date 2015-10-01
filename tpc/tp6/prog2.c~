#include <stdio.h>
#define MAX_SAISIE 5
int main(){

int entier = 0;
int compteur = 1;
int somme = 0;

do{
	printf("Entrez un entier\n");
	
	scanf("%d",&entier);
	while(getchar()!='\n');
	  
	if ( entier >= 0 ){
		
		printf(" L'entier est %d \n",entier);
		compteur ++;
		somme = somme + entier;
	}

}while (entier >= 0 && compteur <= MAX_SAISIE);

printf("La somme vaut : %d\n",somme);

return 0;

}
