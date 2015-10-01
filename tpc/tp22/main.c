#include "voyelles.h"
int main(){

	char chaine[TAILLE_MAX+1];
	fgets(chaine, TAILLE_MAX+2, stdin);
	chaine[strlen(chaine)-1]='\0';
	printf("Nombre de voyelles: %d\n",voyelle(chaine));
	printf("Voyelles : %s\n",chaine);
	return 0;
}