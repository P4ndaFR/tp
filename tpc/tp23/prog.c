/* Ecrire une fonction qui prend deux entier en argument et inverse leur valeur.
cette inversion soit être visible dans le main() après l'appel de la fonction*/

#include <stdio.h>

void swap(int *pnb1,int *pnb2){
	int aux = 0;

	//printf("%p,%p,%p\n", aux, nb1, nb2 );

	aux = *pnb1;
	*pnb1 = *pnb2;
	*pnb2 = aux;

	//printf("%p,%p,%p\n", aux, nb1, nb2 );
}

int main(){
	int i=12, j=5;
	swap(&i,&j);
	printf("i=%d,j=%d\n",i,j);

	return 0;
}