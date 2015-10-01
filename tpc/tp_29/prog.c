#include <stdio.h>

int factorielle(int n)
{
	if ( n == 0)
	{
		return 1;
	}
	return n*factorielle(n-1);
}

int main()
{
	int n=0;
	printf("Entrez Votre Nombre\n");
	scanf("%d",&n);
	n=factorielle(n);
	printf("%d\n",n );
	return 0;
}