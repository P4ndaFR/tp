#include "crypto.h"
int main(){
	
	//printf("%c\n", chiffrement('A',2));
	char chaine[LG_MAX+2];

	printf("Entrez votre texte\n");
	fgets(chaine, LG_MAX+2, stdin);
	chaine[strlen(chaine)-1]='\0';
	int i;
	
	char *ptr = chaine;
	/*while(*ptr){
		
		*ptr = chiffrement(*ptr,CLE);
		ptr++;
	}
	*ptr = '\0'; 
	
	printf("%s\n", chaine);*/

	ptr = chaine;
	float* tab_freq = analyseFreq(chaine, strlen(chaine));
	while(*ptr){
		
		*ptr = dechiffrement(*ptr,calculCle(tab_freq));
		ptr++;
	}
	*ptr = '\0';

	printf("%s\n", chaine);


	//float* tab_freq = analyseFreq(chaine, strlen(chaine));

	/*for (i = 0; i < 26; i++){
		printf("%c = %f\n",65+i, tab_freq[i]);
	}*/

	//calculCle(tab_freq);


	return 0;
}