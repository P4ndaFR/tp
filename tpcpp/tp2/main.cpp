#include "String.h"

int main()
{
	String chaine0("Bonjour");
	String chaine1("Panda");
	String chaine2(chaine1);
	//String chaine2;
	//chaine2=chaine1;
	cout<<chaine1.length()<<endl;
	chaine1.clear();
	cout<<chaine1.length()<<endl;
	//cout<<chaine0.isEmpty();
	return 0;
}