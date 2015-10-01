#include <stdio.h>
#define LG_MAX 4
#define NB_ESSAI 3


int main(){

	char lock[LG_MAX+2]="abcd";
	char key[LG_MAX+2];
	int i=0;


	printf("Entrez votre mot de passe\n");
	fgets(key, LG_MAX+2, stdin);
	key[strlen(key)-1]=	'\0';

	while (key[i]==lock[i] && i < LG_MAX){
		i++;
	}

	if ( i==LG_MAX){
			
		printf("Accès Autorisé\n");

	}else{

		printf("Accès Refusé\n");
	
		return 0;
	}
}


