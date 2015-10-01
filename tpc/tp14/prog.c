/* Ecrire un programme pour recopier chaine_src dans chaine_dest
(sans utiliser strcpy)

	1) faire une saisie utilisateur chaine_src
	2) faire la recopie
	3) afficher chaine_dest avec un printf simple

*/
#include <stdio.h>
#include <string.h>
#define LG_MAX 100

int main(){

	char chaine_src[LG_MAX+1];
	char chaine_dest[LG_MAX+1];
	char *pt_chaine_src = chaine_src;
	char *pt_chaine_dest = chaine_dest;

	printf("Entrez votre chaine, avec %d caractères max\n",LG_MAX-2);
	fgets(chaine_src, LG_MAX+1, stdin);
	chaine_src[strlen(chaine_src)-1]='\0'; // Pour enlever le "\n"
	
	while( *pt_chaine_src != '\0'){

		*pt_chaine_dest = *pt_chaine_src ;
		pt_chaine_src++;
		pt_chaine_dest++;
	}

	*pt_chaine_dest = '\0';
	//printf("%d\n",i);
	printf("%s\n",chaine_dest);
	
	return 0;
}