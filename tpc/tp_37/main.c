#include <stdio.h>
#define MAX_PILE 50

int push(int *pile,int *nb_element,int nb_entre, int *pre_nb_element)
{
	if((*nb_element) == MAX_PILE)
	{
		printf("\n");
		printf("------------------ Pile pleine -----------------\n");
		printf("\n");
		return 1;
	}

	pile[(*nb_element)]=nb_entre;

	*pre_nb_element = *nb_element;
	(*nb_element)++;

	return 0;
}

int pop(int *pile,int *nb_element,int *pre_nb_element)
{
	if((*nb_element) == -1)
	{
		printf("Pile vide\n");
		return -1;
	}

	*pre_nb_element = *nb_element;
	(*nb_element)--;

	pile[(*nb_element)]=0;

	return 0;
}

int peek(int *pile,int nb_element,int pre_nb_element)
{

	if(pre_nb_element < nb_element)
	{

	printf("============Nombre en haut de pile : %d ========\n", pile[nb_element-1]);
	}
	else
	{
	printf("============Nombre en haut de pile : %d ========\n", pile[nb_element]);
	}

	return 0;
}

int empty(int *pile, int nb_element)
{
	if (nb_element == 0)
	{
		printf("================= PILE VIDE ====================\n");
	}else{
		printf("=============== PILE NON VIDE ==================\n");
	}
}

int main(){

	int choix = 0;
	int flag_out = 1;
	int pile[MAX_PILE];
	int nb_element = 0;
	int pre_nb_element = 0;
	int nb_entre = 0;

	system("clear");

	while(flag_out)
	{
		printf("##===============================================##\n");
		printf("#==================# Empilage #===================#\n");
		printf("##===============================================##\n");

		printf("----> PUSH (EMPILER): Press 1 ---------------------\n");
		printf("----> PULL (DEPILER): Press 2 ---------------------\n");
		printf("----> PEEK (ELEMENT EN TETE): Press 3 -------------\n");
		printf("----> EMPTY (VERIFIE SI PILE VIDE ): Press 4 ------\n");
		printf("----> SORTIR: Press 5 -----------------------------\n");

		printf("##===============================================##\n");

		scanf("%d",&choix);

		system("clear");

		switch(choix)
		{
			case 1:
				printf("===================== PUSH =====================\n");
				printf("\n");
				printf("---- Entrez un nombre à mettre dans la pile ----\n");
				printf("\n");
				scanf("%d",&nb_entre);
				printf("================================================\n");
				push(pile,&nb_element,nb_entre,&pre_nb_element);
				system("clear");
			break;
			case 2:
				printf("===================== POP ======================\n");
				printf("\n");
				printf("=============== Dépilage en cour ===============\n");
				pop(pile,&nb_element,&pre_nb_element);
				printf("=============== Dépilage fini ==================\n");
				printf("================================================\n");
				sleep(1);
				system("clear");

			break;
			case 3:
				printf("==================== PEEK ======================\n");
				printf("\n");
				peek(pile,nb_element,pre_nb_element);
				sleep(2);
				system("clear");
			break;	
			case 4:
				printf("==================== PEEK ======================\n");
				printf("\n");
				empty(pile,nb_element);
				printf("================================================\n");
				sleep(2);
				system("clear");
			break;
			case 5:															
				printf("=====================SORTIE=====================\n");
				sleep(3);
				system("clear");
				return 0;
			break;
		}
	}
}