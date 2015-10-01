#include "banque.h"

int ajout_client(Client **ptab_client,int nb_client)
{

	//===============================================================================//
	//							Fonction ajout_client 								 //
	//																				 //
	//            But : Créer un nouveau client 	                      			 //
	//																				 //
	//			  Détail ( l. 29 / l. 54 -> 78 ) :									 //
	//			  		-	ajouter une nouvelle case du tableau de struct 			 //
	//						(utilisation du double pointeur)						 //
	//					-   saisir le nom et le prénom dans les champs nom et 		 //
	//						prénom de cette nouvelle case :	 						 //
	// 						tab_client[nb_client].nom 								 //
	//						tab_client[nb_client].prenom 							 //
	//					-   incrémenter le nombre de client							 //
	//						 	                                                     //
	//			  Retour : indice du tableau correspondant a la structure 			 //
	//					   contenant le Nom et Prénom recherché	(i) 				 //
	//			   																	 //
	//			  Nouvelle Fonctionnalité : recherche des espaces libres dans les    //
	//			  			tableau de struct :										 //
	//																				 //
	//					- l37 -> 45 : recherche d'une case du tableau dont le 		 //
	//								  champ "nom" est inexistant					 //
	//								  si case disponible							 //
	//								  association de l'indice à une variable		 //
	//								  dédiée (i_vide)								 //
	//								  décrémentation du nombre de client 			 //
	//								  pour équilibrer avec l'incrémentation auto	 //
	//								  (réutilisation d'un case existante)			 //
	//								 												 //
	//					- l54 -> 61 : si i_vide n'as pas de valeur d'indice 		 //
	//								  (i_vide == par default -1)					 //
	//								  on crée une nouvelle case						 //
	//								  équivalence de compatibilité avec le reste	 //
	//			  					  de la fonction								 //				
	//																				 //
	//===============================================================================//
	
	Client *tab_client = *ptab_client; //prologue (passage des arguments par pointeur)

	int i, nb_client_temp, i_vide = -1;

	for (i = 0; i < nb_client; i++)
	{
		if(!tab_client[i].nom)
		{
			nb_client--;
			i_vide = i;
			break;
		}
	}
	
	if(i_vide == -1)
	{
		tab_client = realloc(tab_client, (nb_client+1)*sizeof(Client));
		i_vide = nb_client;
	}

	nb_client_temp = nb_client;
	nb_client = i_vide;
	
	printf("Création d'un nouveau client\n");

	printf("Saisissez le nom\n");
	tab_client[nb_client].nom = malloc(LG_MAX*sizeof(char));
	fgets(tab_client[nb_client].nom, LG_MAX+1, stdin);
	tab_client[nb_client].nom[strlen(tab_client[nb_client].nom)-1]='\0';

	//printf("%s\n", tab_client[i].prenom);

	printf("Saisissez le prénom\n");
	tab_client[nb_client].prenom = malloc(LG_MAX*sizeof(char));
	fgets(tab_client[nb_client].prenom, LG_MAX+1, stdin);
	tab_client[nb_client].prenom[strlen(tab_client[nb_client].prenom)-1]='\0';

	//printf("%s\n", tab_client[i].nom);
	
	printf("Saisissez le solde de votre client\n");
	scanf("%lf",&tab_client[nb_client].solde);

	//printf("%lf\n", tab_client[i].solde);

	nb_client = nb_client_temp;
	nb_client++;
	
	*ptab_client = tab_client; //épilogue (passage des arguments par pointeur)

	return nb_client;
}

void affichage(Client *tab_client,int nb_client)
{
	//===============================================================================//
	//							Fonction Affichage 									 //
	//																				 //
	//            But : Afficher les infos de tous les client ligne à ligne			 //
	//																				 //
	//			  																	 //
	//===============================================================================//

	int i;

	for (i = 0; i < nb_client; ++i)
	{
		if ( tab_client[i].nom ) 
		{
			printf("	Mr %s %s , de solde : %lf			\n", tab_client[i].prenom, tab_client[i].nom, tab_client[i].solde);
		}
	}

}

int recherche(Client *tab_client,int nb_client)
{
	//===============================================================================//
	//							Fonction recherche 									 //
	//																				 //
	//            But : Parcourir les chaines de caractère	nom et prenom			 //
	//			  Retour : indice du tableau correspondant a la structure 			 //
	//					   contenant le Nom et Prénom recherché	(i) 				 //
	//			  																	 //
	//===============================================================================//

	int i;

	printf("Entrez le nom de votre client\n");

	char chaine_client_nom[LG_MAX+1];
	fgets(chaine_client_nom, LG_MAX+1, stdin);
	chaine_client_nom[strlen(chaine_client_nom)-1]='\0';

	printf("Entrez le prénom de votre client\n");

	char chaine_client_prenom[LG_MAX+1];
	fgets(chaine_client_prenom, LG_MAX+1, stdin);
	chaine_client_prenom[strlen(chaine_client_prenom)-1]='\0';


	for (i = 0; i < nb_client ; i++)
	{
		if(strcmp(chaine_client_nom,tab_client[i].nom) == 0 && strcmp(chaine_client_prenom,tab_client[i].prenom) == 0)
		{
			return i;
		}
	}

	return (-1);
}

int virement(Client *tab_client,int nb_client)
{

	int solde_virant;
	int solde_recevant;
	int somme_virement;
	int num_client_virant;
	int num_client_recevant;
			
	printf("------------Recherche client virant-----------------\n\n");
	num_client_virant = recherche(tab_client, nb_client);

	if(num_client_virant < 0)
	{
		return -2;
	}

	solde_virant = tab_client[num_client_virant].solde;

	printf("-----------Recherche client recevant----------------\n\n");
	num_client_recevant = recherche(tab_client, nb_client);

	if(num_client_recevant < 0)
	{
		return -2;
	}

	solde_recevant = tab_client[num_client_recevant].solde;

	printf("Entrez la somme à virer\n");
	scanf("%d",&somme_virement);

	if(somme_virement > solde_virant)
	{
		return -1;
	}

	if(somme_virement <= 0)
	{
		return 1;
	}

	tab_client[num_client_virant].solde = tab_client[num_client_virant].solde - somme_virement;

	tab_client[num_client_recevant].solde = tab_client[num_client_recevant].solde + somme_virement;

	return 0;

}


int suppression_client(Client *tab_client, int nb_client, int num_client)
{

	int i;

	num_client = recherche(tab_client, nb_client);
			
	if(num_client<0)
	{
		return -1;
	}

	free(tab_client[num_client].nom);
	tab_client[num_client].nom = NULL;
	free(tab_client[num_client].prenom);
	tab_client[num_client].prenom = NULL;

	tab_client[num_client].solde = 0;

	return 0;
}