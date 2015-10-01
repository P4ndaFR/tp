#include "tri.h"

void tri_insertion(int *tab,int size)
{
	int lg,i,temp,compt,mark;

	lg=size;
	for (i = 1; i < lg; i++)
	{
		temp=tab[i];
		compt=i-1;
		mark=1;
		while(mark)
		{
			mark=0;
			if (tab[compt] > temp)
			{
				tab[compt+1]=tab[compt];
				compt=compt-1;
				mark=1;
			}
			if (compt < 0)
			{
				mark=0;
			}
		}
		tab[compt+1]=temp;	
	}
}

int cmp_int(const void *pval1, const void *pval2)
{
	int a=*(*int *)pval1;
	int b=*(int *)pval2;
	return a-b;
}