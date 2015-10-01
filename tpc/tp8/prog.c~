	/* Exercice : saisir 10 entiers
Une fois la Saisie terlinée
1) afficher la somme variable (variable somme)
2) afficher les 10 entiers dans l'ordre ou ils on étés saisis
3) afficher 
4) afficher l'adresse mémoire de i (+ pour toutes les cases du tableau) 
5) bug infinite loop avec buffer underflow */

#include <stdio.h>
#define TAILLE_TAB 10

int main(){

int tab[TAILLE_TAB] = {0};
int somme = 0;
int i;

for( i = 0 ; i < TAILLE_TAB ; i++){

	printf("Saisissez un entier\n");
	scanf("%d",&tab[i]);
	somme = somme + tab[i];
}

printf("La somme de tous les entiers vaut %d\n", somme);
printf("Les entiers, dans l'ordre de saisie valent : ");

for( i = 0; i < TAILLE_TAB; i++){

	printf("%d, ", tab[i]);
	tab[-1]=0;
}
printf("\b\b \n");

printf("Les entiers, dans l'ordre de saisie valent : ");

for( i = TAILLE_TAB; i > 0; i--){

	printf("%d, ", tab[i-1]);
}

printf("\b\b \n");


for( i = 0; i < TAILLE_TAB; i++){

	printf("%p\n", &tab[i]);
	 
}

printf("tab[10]:%d\n", tab[TAILLE_TAB]);
printf("Adresse de tab[10]:%p\n", &tab[TAILLE_TAB]);
printf("tab[-1]:%d\n", tab[-1]);
printf("Adresse de tab[-1]:%p\n", &tab[-1]);

return 0;

}
