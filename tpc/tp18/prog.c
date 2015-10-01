#include <stdio.h>
#define TAILLE_MAX 100

int voyelle (const char *chaine){
	int i;
	int nbvoy=0;
	for (i=0; i < TAILLE_MAX; ++i){
		if (chaine[i] == 'a' || chaine[i] == 'e' || chaine[i] == 'i' || chaine[i] == 'o' || chaine[i] == 'u' || chaine[i] == 'y'){
			nbvoy++;
		}
	}
	return nbvoy;
}


int main(){

	char chaine[TAILLE_MAX+1];
	fgets(chaine, TAILLE_MAX+2, stdin);
	chaine[strlen(chaine)-1]=	'\0';

	printf("Nombre de voyelle : %d\n",voyelle(chaine));

	return 0;
}
