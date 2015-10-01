#include <stdio.h>

void puissance( double *px, int n){
	int i;
	int b = 1;
	if (*px<0 || n<0){
		printf("Entrez un nombre et une puissance positive !\n");
	}else{ 
		
		for (i = 0; i < n; ++i){
			b = b * (*px);
		}
		b = *px;
	}
}


int main(){
	double x=0;
	int n=0;
	printf("Entrez \"x\"\n");
	scanf("%lf",&x);
	printf("Entrez \"n\"\n");
	scanf("%d",&n);	
 	puissance (&x,n);
 	printf("%lf,\n",x);
 	return 0;
}