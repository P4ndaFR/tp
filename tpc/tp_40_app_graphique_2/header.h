#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <math.h>

#define ROACH_ORIENTATIONS 	24 		/* nb orientations distinctes */
#define ROACH_ANGLE			15		/* angle (deg) entre orientations */
#define ROACH_WIDTH			48		/* pixels */
#define ROACH_HEIGHT		48		/* pixels */
#define NB_SPRITES_P_LINE	6		/* dans bitmap des sprites */
#define ROACH_SPEED			25.0	/* pixels / tours */
#define MAX_STEPS			50		/* nb depl max avant chgmt orientation */
#define DELAY_P_TOUR		20		/* en milliseconde */
#define MAX_ROACHES			20		/* nb maxi de cafards */
#define X_INIT_TAPIS		100
#define Y_INIT_TAPIS		100

typedef struct Roach
{
	SDL_Surface *sprites;
	int dir;		//orientation (de 0 à ROACH_ORIENTATION - 1)
	int x;			//pixels
	int y;			//pixels
	int hidden; 	// 0 visible , 1 caché
	float angle;	//orientation en radians
	int turnLeft;	// 0 : droitier, 1 : gaucher
	int steps;
} Roach;

SDL_Surface *init(char * imgFond_filename, SDL_Surface **pFond);
SDL_Surface *LoadSprites(char * sprites_filename);

void DrawRoach ( Roach roach, SDL_Surface *ecran);
int RandInt(int maxVal);
Roach CreateRoach( SDL_Surface *ecran, SDL_Surface *sprites);
int RoachInRect(int x, int y, int rectx, int recty, int rectwidth, int rectheight);
void TurnRoach(Roach *roach);
void MoveRoach(Roach *roaches, int nbRoaches, int index, float roachSpeed, SDL_Surface *ecran);

Roach *CreateRoaches ( SDL_Surface *sprites, int nbRoach , SDL_Surface *ecran);
void DrawRoaches ( Roach *roaches, int nbRoach, SDL_Surface *ecran );
void MoveRoaches ( Roach *roaches, int nbRoach, float roachSpeed,SDL_Surface *ecran);

int RoachIntersectRect(int x, int y, int rectx, int recty, int rectwidth, int rectheight);
SDL_Surface *LoadImage ( char * img_filename, int x, int y );
void DrawImage (SDL_Surface *img, SDL_Surface *ecran);

int MarkHiddenRoaches(Roach *roaches,int nbRoaches,SDL_Surface *rect);

int PointInRect(int x, int y, int rectx, int recty, int rectwidth, int rectheight);