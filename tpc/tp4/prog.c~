#include <stdio.h>
#define MAJORITE 18
#define FONDS_MIN1 100
#define FONDS_MIN2 100000 
int main(){	

//--------------------------------------
//Définitions de Variables
//--------------------------------------

int age=0; 		    
int majeur=0;
int fonds_client=0;

//-------------------------------------
//Lecture
//-------------------------------------

printf("Bonjour,\nQuelle somme voulez-vous déposer ?\n");
scanf("%d",&fonds_client);

printf("Tapez votre age:");
scanf("%d",&age);

majeur=age>=MAJORITE; 						// Définition de la condition "majeur"

//-------------------------------------
//Traitement
//-------------------------------------

if ( fonds_client >= FONDS_MIN2 ){
	printf("Félicitation votre compte est ouvert");


}else if( majeur ){
	if ( fonds_client >= FONDS_MIN1 ){
		printf("Félicitation votre compte est ouvert\n");
	}else{ 
		printf("Ouverture de compte impossible, vous devez déposer au moins %d € pour pouvoir ouvrir un compte dans notre banque\n", 			FONDS_MIN1);
	}
}else{
	printf( "Ouverture de compte impossible, vous devez être majeur ou déposer au moins %d € pour pouvoir ouvrir un compte dans notre banque\n", 		FONDS_MIN2);
}
return 0;
}
