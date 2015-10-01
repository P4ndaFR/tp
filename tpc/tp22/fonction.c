#include "voyelles.h"
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