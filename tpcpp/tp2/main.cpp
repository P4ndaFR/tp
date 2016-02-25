#include "String.h"

String &f(String &s)
{
	cout<<"Dans f()"<<endl;
	return s;
}
int main()
{
	String chaine0("Bonjour");
	String chaine1("Panda");
	String chaine2(chaine1);
	chaine0=f(chaine2);
	//String chaine2;
	//chaine2=chaine1;
	cout<<chaine1.length()<<endl;
	//chaine1.clear();
	cout<<chaine1.length()<<endl;
	cout<<"car:"<<chaine1[2]<<endl;
	chaine1[2]='x';
	cout<<chaine1<<endl;
	//cout<<chaine0.isEmpty();
	return 0;
}