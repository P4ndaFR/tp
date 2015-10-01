//==============================================================//
//																//
//					TP 31 : Logiciel de Banque				  	//
//																//
//		Objectif : 	- Créer des clients							//
//				   	- Afficher un clients 						//
//					- Virement entre clients					//
//																//
//	Spécifs détaillées :										//
//																//
//	1) Informations de chaque client : 	- nom					//
//										- prénom				//
//										- solde					//
//	2) Nb max de clients pas connu à l'avance					//
//																//
//	3) Fonction : 	- Saisie des infos 							//
//					- Recherche client par nom et prénom		//
//					- Affichage infos client 					//
//					- Afficher les infos de tous les clients	//
//					- Virement entre 2 clients					//
//					- Suppression d'un client 					//
//																//
//==============================================================//

#include "banque.h"	

int main(){

	int nb_client = 0;
	int i;
	int num_client;
	int choix;
	int verif_virement;
	int verif_suppression;
	Client *tab_client = NULL;

	//nb_client = ajout_client(&tab_client,0);
	//printf("%d\n", nb_client);
	system("clear");
	do 
	{
		//system("clear");
		//printf("%d\n", nb_client);
		

		printf("====================================================\n");
		printf("                Gestion clients						\n");
		printf("    1) Ajout nouveau client 						\n");
		printf("    2) Afficher tous les clients 					\n");
		printf("    3) Recherche client / Afficher info client		\n");
		printf("    4) Effectuer un virement 						\n");
		printf("    5) Supprimer un client 							\n");
		printf("    6) Quitter										\n");
		printf("====================================================\n");

		scanf("%d",&choix);
		getchar();

		switch (choix)
		{
			case 1: 
				system("clear");
				nb_client = ajout_client(&tab_client,nb_client);
				system("clear");
			break;

			case 2:
				system("clear");
				printf("====================================================\n");
				printf("                Liste de des clients                \n");
				affichage(tab_client,nb_client);
				printf("====================================================\n");
			break;

			case 3:
				system("clear");
				printf("====================================================\n");
				printf("                  Recherche de client               \n\n");
				num_client = recherche(tab_client, nb_client);
				if(num_client < 0)
				{
					printf("            Pas de client correspondant             \n");
					printf("====================================================\n");
					//printf("%d\n", num_client);
					break;
				}
				printf("            Mr %s %s , de solde : %lf               \n", tab_client[num_client].prenom, tab_client[num_client].nom, tab_client[num_client].solde);
				printf("====================================================\n");
			break;

			case 4:
			system("clear");
			printf("====================================================\n");
			printf("             Virement inter - clients 				\n\n\n");
		
			verif_virement=virement(tab_client, nb_client);

			switch (verif_virement)
			{
				case -2:
				printf("      Erreur : Pas de client connu à ce nom			\n");
				break;
				case -1:
				printf("        Erreur : Solde virant insuffisant			\n");
				break;
				case 1: 
				printf("      Erreur : Montant virement insuffisant			\n");
				break;
				case 0:
				printf("            Virement effectué						\n");
				break;
			}
			printf("====================================================\n");
			break;

			case 5:
			system("clear");
			printf("====================================================\n");
			printf("             Suppression client 				\n\n\n");
			
			verif_suppression = suppression_client(tab_client,nb_client, num_client);

			switch(verif_suppression)
			{
				case -1:
				printf("            Pas de client connu à ce nom			\n");
				case 0:
				printf("            Suppression effectuée					\n");
				break;
			}

			printf("====================================================\n");
		}
	}while (choix != 6); 

	return 0;
}