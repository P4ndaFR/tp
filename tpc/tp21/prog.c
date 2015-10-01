#include <stdio.h>
#include <string.h>// def str***
#include <stdlib.h> // def malloc et free
#define TAILLE_MAX 100

char *voyelle (const char *chaine){
	char *chainer = malloc((strlen(chaine)+1)*sizeof(char));
	int nbvoy=0;
	int i;
	for (i=0; i < strlen(chaine); ++i){
		switch(chaine[i]){
			case 'a':case 'e':case 'i': case 'o': case 'u': case 'y':
				chainer[nbvoy] = chaine[i];
				nbvoy++;
		}
	}

	chainer[nbvoy]='\0';
	return chainer;
}

int main(){

	char chaine[TAILLE_MAX+1];
	char *chaine2 = NULL;
	fgets(chaine, TAILLE_MAX+2, stdin);
	chaine[strlen(chaine)-1]='\0';
	chaine2 = voyelle(chaine);
	printf("Voyelles : %s\n",chaine2);
	free(chaine2);
	return 0;
}