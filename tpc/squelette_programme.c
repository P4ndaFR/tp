#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define clrscr printf("\033[H\033[2J") 
#define resetcolor printf("\033[%dm",0) 
#define color(chat) printf("\033[%dm",chat) 

/*code couleur : couleur lettre fond 

noir 30 40 
rouge 31 41 
vert 32 42 
jaune 33 43 
bleu 34 44 
magenta 35 45 
cyan 36 46 
blanc 37 47

*/

int main(){

	int choix = 0;
	int flag_out = 1;
	clrscr;

	while(flag_out)
	{
		color(47);
		color(30);
		printf("##===============================================##\n");
		printf("#==============# NOM DU PROGRAMME #===============#\n");
		printf("##===============================================##\n");
		resetcolor;

		printf("\n");
		printf("----> Choix 1: Press 1 ----------------------------\n");
		printf("----> Choix 2: Press 2 ----------------------------\n");
		printf("----> Choix 3: Press 3 ----------------------------\n");
		printf("----> Choix 4: Press 4 ----------------------------\n");
		printf("----> Choix 5: Press 5 ----------------------------\n");

		printf("\n");
		color(47);
		color(30);
		printf("##===============================================##\n");
		resetcolor;

		scanf("%d",&choix);

		clrscr;

		switch(choix)
		{
			case 1:
				printf("=================== FONCTION ===================\n");
				printf("\n");
				printf("------------------ Instruction -----------------\n");
				printf("\n");
				printf("================================================\n");
				sleep(2);
				clrscr;
			break;
			case 2:
				printf("=================== FONCTION ===================\n");
				printf("\n");
				printf("------------------ Instruction -----------------\n");
				printf("\n");
				printf("================================================\n");
				sleep(2);
				clrscr;

			break;
			case 3:
				printf("=================== FONCTION ===================\n");
				printf("\n");
				printf("------------------ Instruction -----------------\n");
				printf("\n");
				printf("================================================\n");
				sleep(2);
				clrscr;
			break;	
			case 4:
				printf("=================== FONCTION ===================\n");
				printf("\n");
				printf("------------------ Instruction -----------------\n");
				printf("\n");
				printf("================================================\n");
				sleep(2);
				clrscr;
			break;
			case 5:															
				printf("==================== SORTIE ====================\n");
				sleep(3);
				clrscr;
				flag_out=0;
			break;
		}
	}

	return 0;
}

