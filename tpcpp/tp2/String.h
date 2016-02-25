#include <iostream>
#include <cstring>
using namespace std;
class String
{
	private:
		char *ptr;
		int lg;
		void allocation(int);
	public:
		//Constructeurs
		String()
		{
			ptr=NULL;
			allocation(1);
			ptr[0]='\0';
			cout<<"dans le constructeur / default"<<endl;
		}
		String(const char *ptr)
		{
			this->ptr=NULL;
			allocation(strlen(ptr)+1);
			strcpy(this->ptr,ptr);
			cout<<"dans le constructeur avec chaine"<<endl;
		}
		//Destructeur
		~String()
		{
			delete ptr;
			cout<<"Dans le Destructeur"<<endl;
		}
		//constructeur par recopie
		String(const String &str)
		{
			this->ptr=NULL;
			allocation(str.lg);
			this->lg=str.lg;
			strcpy(this->ptr,str.ptr);

			cout<<"Dans le constructeur par recopie"<<endl;
		}

		//opérateur=
		String &operator=(const String &pstr)
		{
			if(this == &pstr) return *this;
			allocation(pstr.lg);
			this->lg=pstr.lg;
			strcpy(this->ptr,pstr.ptr);
			cout<<"Dans l'opérateur="<<endl;
			return *this;
		}
		int length();
		void clear();
		bool isEmpty();
		

};