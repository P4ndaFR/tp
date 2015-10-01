#include <stdio.h>

double puissance( double x, int n){
	int i;
	double b=1;

	if (x<0 || n<0){
		printf("Entrez un nombre et une puissance positive !\n");
		return 1;
	} 
	for (i = 0; i < n; ++i){
		b = b*x;
	}
	return b;
}

int main(){
	double x=0;
	int n=0;
	printf("Entrez \"x\"\n");
	scanf("%lf",&x);
	printf("Entrez \"n\"\n");
	scanf("%d",&n);	
 	x = puissance (x,n);
 	printf("%lf,\n",x);
 	return 0;
}