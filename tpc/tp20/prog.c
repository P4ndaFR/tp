#include <stdio.h>
#include <string.h>
#define TAILLE_MAX 100

char voyelle (const char *chaine, char *chainer){
	int i;
	int nbvoy=0;
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
	char chainer[TAILLE_MAX+1]={0};
	fgets(chaine, TAILLE_MAX+2, stdin);
	chaine[strlen(chaine)-1]='\0';
	char voy;
	
	voy = voyelle(chaine, chainer);

	printf("Voyelles : %s\n",voy);

	return 0;
}