#include <stdio.h>
main(){

int age=0;

printf("Tapez votre age:");
scanf("%d",&age);

if (age>=18){
	printf("Vous êtes majeur\n");
}else{
	printf("Vous êtes mineur\n");
}

return 0;
}


