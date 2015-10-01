#include <stdio.h>
#define TAILLE_MAX 100

int voyelle (const char *chaine, char *chainer){
	int i;
	int nbvoy=0;
	for (i=0; i < TAILLE_MAX; ++i){
		switch(chaine[i]){
			case 'a':case 'e':case 'i': case 'o': case 'u': case 'y':
				nbvoy++;
				chaine[i] = chainer[i];
		}
	}
	return nbvoy;
}


int main(){

	char chaine[TAILLE_MAX+1];
	CHAR chainer[LG_MAX+1];
	fgets(chaine, TAILLE_MAX+2, stdin);
	chaine[strlen(chaine)-1]=	'\0';

	printf("Nombre de voyelle : %d\n",voyelle(chaine));
	printf

	return 0;
}