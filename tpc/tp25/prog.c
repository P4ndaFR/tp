#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LG_MAX 100
#define NB_SAISIE_MAX 50
int main(){

	char chaine[LG_MAX+1]= {'\0'};
	//char *tab_chaine_dest[NB_SAISIE_MAX];
	char **tab_chaine_dest=NULL;
	int i=0;
	int nb_saisie;
	int lg_saisie;

	/* for(i=0; i<NB_SAISIE_MAX;i++){
		printf("Saisissez votre chaine\n");
		
		fgets(chaine, LG_MAX+1, stdin);
		int lg_saisie=strlen(chaine);
		chaine[lg_saisie-1]='\0';
		
		
		if(chaine[0]== 'f' && chaine[1] == 'i' && chaine[2] == 'n'){
			break;
		}else{
			tab_chaine_dest = realloc(tab_chaine_dest, (1+i)*sizeof(char *));
			tab_chaine_dest[i] = malloc(lg_saisie*sizeof(char));
			strcpy(tab_chaine_dest[i], chaine);
		}	
	}
	*/

	while( strcmp(chaine, "fin") ){

		printf("Entrez votre chaine : \n");

		fgets(chaine, LG_MAX+1, stdin);
		lg_saisie=strlen(chaine);
		chaine[lg_saisie-1]='\0';

		if( strcmp(chaine, "fin") ){

			tab_chaine_dest = realloc(tab_chaine_dest, (1+i)*sizeof(char *));
			tab_chaine_dest[i] = malloc(lg_saisie*sizeof(char));
			strcpy(tab_chaine_dest[i], chaine);
			i++;
		}
	}	
	
	nb_saisie = i;

	for(i=0; i<nb_saisie; i++){
		
		printf("%s\n", tab_chaine_dest[i]);
		free(tab_chaine_dest[i]);
	}

	free(tab_chaine_dest);

	return 0;
}