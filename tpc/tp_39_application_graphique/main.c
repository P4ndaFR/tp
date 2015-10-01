#include "header.h"

int main()
{
	if( SDL_Init ( SDL_INIT_VIDEO ) == -1 )
	{
		fprintf(stderr, "Erreur d'initialisation de la SDL : %s\n",SDL_GetError());
		exit(EXIT_FAILURE);
	}

	SDL_Surface *ecran = NULL;
	ecran = SDL_SetVideoMode(640,480,32, SDL_HWSURFACE | SDL_RESIZABLE | SDL_DOUBLEBUF);

	if(ecran == NULL)
	{
		fprintf(stderr, "Impossible de charger le mode vidéo : %s\n", SDL_GetError());
		exit(EXIT_FAILURE);
	}
	
	SDL_WM_SetCaption("Panda !",NULL);

	SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 50, 110, 0));
	SDL_Flip(ecran);

	SDL_Surface *fleur;
	//Chargement fichiers BMP dans une surface
	
	/*fleur = SDL_LoadBMP("fleur1a.bmp");
	SDL_Rect rect_fleur;
	rect_fleur.x = 100;
	rect_fleur.y = 50;

	SDL_SetColorKey( fleur, SDL_SRCCOLORKEY, SDL_MapRGB( fleur->format,0,0,0 ));

	SDL_BlitSurface(fleur, NULL, ecran, &rect_fleur);
	SDL_Flip(ecran); */


	if ( fleur == NULL )
	{
		fprintf(stderr, "Impossible de charger le fichier bmp : %s\n", SDL_GetError());
	}

	int continuer = 1;
	SDL_Event event;
	while(continuer)
	{
		SDL_WaitEvent(&event);
		switch(event.type)
		{
			case SDL_QUIT:
				continuer = 0;
			break;
			case SDL_MOUSEBUTTONDOWN:
				srand(time(NULL));
				char chaine[14];
				int num_fleur = (rand()%8)+1;
				sprintf(chaine,"fleur%da.bmp",num_fleur);

				fleur = SDL_LoadBMP(chaine);
				SDL_Rect rect_fleur;
				rect_fleur.x = event.button.x;
				rect_fleur.y = event.button.y;

				SDL_SetColorKey( fleur, SDL_SRCCOLORKEY, SDL_MapRGB( fleur->format,0,0,0 ));

				SDL_BlitSurface(fleur, NULL, ecran, &rect_fleur);
				SDL_Flip(ecran);
				SDL_FreeSurface(fleur);
			break;
		}
	}
	
	SDL_Quit();
	return EXIT_SUCCESS;
}


