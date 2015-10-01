#include "stdio.h"

int main(){

	int a = 12;
	int *ptr;

	//printf("%d\n", *ptr); //Déréférencement d'un pointeur sauvage		
	
	/* printf("Adresse de a : %p\n",&a );
	printf("Adresse de ptr : %p\n", &ptr );
	printf("Contenu de a : %d\n", a );
	ptr = &a;

	printf("Contenu du ptr : %p\n", ptr );
	printf("Contenu de l'Adresse pointée par ptr : %d\n", *ptr);

	printf("Taille de ptr : %ld\n", sizeof(ptr)); //8
	printf("Taille de *ptr : %ld\n", sizeof(*ptr)); //4
	
	*/

	//printf("%d\n", *a );

	int c = 'a';
	ptr = &c;
	printf("%d\n", *ptr );

	// 7fff ..... d0

	printf("Contenu de ptr : %p\n", ptr);
	ptr++; // Arithmétique de pointeur : incrément de 1*sizeof(int) car int *ptr
	printf("Contenu de ptr : %p\n", ptr); // 7fff ... d4
	printf("Ecart entre &c et ptr : %ld\n", ptr-&c );

	return 0;
}

