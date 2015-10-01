/* 
1) Programme : Saisie d'une chaine de caractère
2) Sans utiliser strlen, afficher le nombre de caractère de la chaine saisie

*/

#include <stdio.h>
#include <string.h>
#define LG_MAX 9

int main()
{
	char chaine[LG_MAX+1];
	printf("Tapez une chaine(%d car. max):\n",LG_MAX);
	//gets(chaine);
	fgets(chaine, LG_MAX+1, stdin);
	chaine[strlen(chaine)-1]=	'\0';

	int i = 0;


	while( chaine[i] != '\0')i++;

	printf("Nb de caractères de %s : %d\n",chaine, i);

	char chaine2[strlen(chaine)+1];
	//char *s = chaine2;

	for(i=0; i < strlen(chaine)+1; i++){
		chaine2[i] = chaine[i];	
	}

	printf("%s\n",chaine2);
	return 0;
}