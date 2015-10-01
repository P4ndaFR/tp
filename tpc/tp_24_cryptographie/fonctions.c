#include "crypto.h"

/*=====================================
Fonction de chiffrement avec la lettre 
à chiffrer en 1er par et la clé en 2
======================================*/

char chiffrement(char c, int cle){

	char c_retour = c;

	if( c >= 'A'&& c <= 'Z'){
		
		c_retour = c + cle;

		if (c+cle > 'Z'){

			c_retour = c_retour - 26;
		}
	}

	return c_retour;
}

char dechiffrement(char c, int cle){

	char c_retour = c;

	if( c >= 'A'&& c <= 'Z'){
		
		c_retour = c - cle;

		if (c-cle < 'A'){

			c_retour = c_retour + 26;
		}
	}

	return c_retour;
}

float* analyseFreq(char* texte,int N){

	float* tab_freq = malloc(26*sizeof(float));
	int i;
	int j;

	for (j=0;j<26;j++){
			tab_freq[j]=0;
	}

	for (i = 0; i<N ; i++){
		for (j=0;j<26;j++){
			if (texte[i] == j+'A'){
				tab_freq[j]++;
			}
		}	
	}

	for (j=0;j<26;j++){
			tab_freq[j]=tab_freq[j]/N*100;
	}

	return tab_freq;
}

int calculCle(float* tabFreq){
	int i;
	int compteur = 0;
	char lettre = '\0';
	int cle;

	for(i=0; i < 26; i++){
		if( compteur < tabFreq[i]){
			compteur = tabFreq[i];
			lettre = 'A'+i;
		}
	}

	cle = lettre - 'E';
	//printf("cle : %d\n",cle);
	return cle;
}	

