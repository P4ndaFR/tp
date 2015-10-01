#include <stdio.h>
#include <string.h>// def str***
#define TAILLE_MAX 100

int voyelle (char *);

int main(){

	char chaine[TAILLE_MAX+1];
	fgets(chaine, TAILLE_MAX+2, stdin);
	chaine[strlen(chaine)-1]='\0';
	printf("Nombre de voyelles: %d\n",voyelle(chaine));
	printf("Voyelles : %s\n",chaine);
	return 0;
}

int voyelle (char *chaine){

	int nbvoy=0;
	int i;
	
	for (i=0; i < strlen(chaine); ++i){
		switch(chaine[i]){
			case 'a':case 'e':case 'i': case 'o': case 'u': case 'y':
				chaine[nbvoy] = chaine[i];
				nbvoy++;
		}
	}

	chaine[nbvoy]='\0';
	return nbvoy;
}