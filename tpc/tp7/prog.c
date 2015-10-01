/* Enoncé :

- Demande à l'utilisateur le nbr de valeur à rentrer (n)

- Saisie de N entiers

- Calcul de la somme et de la moyenne

*/

#include <stdio.h>

int main(){

int n = 0;
int entier = 0;
int i;
int somme = 0;

printf("Combien de valeur souhaiter vous entrer ?\n");
scanf("%d",&n);

for ( i=0;i<n;i++){
	
	printf("Entrer votre %d nombre\n",i+1);
	scanf("%d",&entier);
	somme = somme + entier;
}

printf("La somme vaut : %d\n",somme);
printf("la moyenne vaut : %f\n",(float)somme/n);

return 0;

}





