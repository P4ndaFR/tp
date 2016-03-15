#include "String.h"

String &f(String &s)
{
	cout<<"Dans f()"<<endl;
	return s;
}
int main()
{
	String chaine0("aab");
	String chaine1("aaa");
	String chaine2;
	//chaine0+=chaine1;
	chaine2 = chaine0 + chaine1;
	int i;
	if (chaine0 <= chaine1)
	{
		cout<<"Vrai"<<endl;
	}
	else
	{
		cout<<"Faux"<<endl;
	}
	cin >> chaine2;
	cout << chaine2 <<endl;
	cin >> i;
	try
	{
		chaine1[i]='x';
		cout<<"Après écriture"<<endl;
	}
	catch(range_error &err)
	{
		cout<<"Exception:"<<err.what()<<endl;
		return 1;
	}
	return 0;
}