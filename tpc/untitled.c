#include <stdio.h>
#define MAX_PILE 50

int main(){

	int choix = 0;

	while(1)
	{
		printf("###################################################\n");
		printf("#################### Empilage #####################\n");
		printf("###################################################\n");

		printf("====> 			: Press 1 =========================\n");
		printf("====>			: Press 2 =========================\n");
		printf("====>			: Press 3 =========================\n");
		printf("====>			: Press 4 =========================\n");
		printf("====>			: Press 5 =========================\n");

		scanf("%d",choix)

		switch(choix)
		{
			case 1:
				printf("Choix 1\n");
			break:
			case 2:
				printf("Choix 2\n");
			break;
			case 3:
				printf("Choix 3\n");
			break;
			case 4:
				printf("Choix 4\n");
			break;
			case 5:
				printf("Choix 5\n");
			break;
		}
	}
}