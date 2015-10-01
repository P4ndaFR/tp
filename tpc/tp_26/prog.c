#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i;
	printf("Je récupère %d argument(s)\n",argc-1 );
	for  (i = 0; i < argc; ++i){
	
		printf("Argument %d : %s\n", i,argv[i] );		
	}
	return 0;
}