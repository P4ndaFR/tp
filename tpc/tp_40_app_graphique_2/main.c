#include "header.h"

int main()
{
	int Nvis,deltax,deltay,btndown=0;
	SDL_Surface *fond=NULL;
	SDL_Surface *ecran=init("floor.bmp",&fond);
	SDL_Surface *sprites = LoadSprites("roach.bmp");
	SDL_Surface *tapis = LoadImage ( "bathmat.bmp",X_INIT_TAPIS, Y_INIT_TAPIS );
	Roach *roach = CreateRoaches( sprites, MAX_ROACHES, ecran);

	int continuer = 1;
	SDL_Event event;
	printf("BONJOUR\n");
	while( continuer)
	{
		//SDL_WaitEvent(&event);
		while ( SDL_PollEvent ( &event ) ) 
		{
			switch(event.type)
			{
				case SDL_QUIT:
					continuer = 0;
				break;
				case SDL_MOUSEBUTTONDOWN:
	      			if (event.button.button == SDL_BUTTON_LEFT && PointInRect( event.button.x, event.button.y,tapis->clip_rect.x,tapis->clip_rect.y,tapis->w,tapis->h))
	      			{
					/* Clic sur le tapis */
					btndown = 1;
					// Ecart entre clic et coin sup gauche tapis
					deltax = event.button.x - tapis->clip_rect.x;
					deltay = event.button.y - tapis->clip_rect.y;
					}
        		break;
        		case SDL_MOUSEMOTION :
		  			if ( btndown ) 
		  			{ 	// Drag and drop 
		  				// "Nettoyage" du tapis (2 options )
						//SDL_BlitSurface(floor,NULL, ecran,NULL);//option 1
						//CleanSurf ( tapis, ecran, floor );// option 2
						// Mise à jour position du tapis
						tapis->clip_rect.x = event.button.x - deltax;
						tapis->clip_rect.y = event.button.y - deltay;
            		}
            	break;
        		case SDL_MOUSEBUTTONUP :
            	btndown = 0; 
            	break;
			}
		}
		SDL_BlitSurface(fond,NULL,ecran,NULL);
		//SDL_Flip(ecran);
		Nvis = MarkHiddenRoaches(roach,MAX_ROACHES,tapis);

		if (Nvis != 0)
		{
			MoveRoaches(roach,MAX_ROACHES,ROACH_SPEED,ecran);
			DrawRoaches(roach,MAX_ROACHES,ecran);
		}
		
		DrawImage ( tapis, ecran );
		SDL_Flip(ecran);
		SDL_Delay(DELAY_P_TOUR);
	}

	return 0;
}