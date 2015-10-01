#include <stdio.h>

void increment(int *i){
	//*i = *i + 1;
	(*i)++;
}
int main(){
	int i=0;
	increment(&i);
	printf("i=%d\n",i );
	return 0;
}
