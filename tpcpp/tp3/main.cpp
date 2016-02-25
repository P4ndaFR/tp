#include "String.h"

String &f(String &s)
{
	cout<<"Dans f()"<<endl;
	return s;
}
int main()
{
	String chaine0("Hello");
	String chaine1(" World");
	String chaine2;
	//chaine0+=chaine1;
	chaine2 = chaine0 + chaine1;

	return 0;
}