#include <iostream>
#include <cstring>
#include <stdexcept>
#define LG_MAX_SAISIE 100
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

		friend ostream &operator<<(ostream &os, const String &str)
		{
			//pas d'ajout courant dans une fonction friend
			os << str.ptr;
			return os;
		}

		friend istream &operator>>(istream &is,String &str)
		{
			char temp[LG_MAX_SAISIE+1];
			is.getline(temp,LG_MAX_SAISIE);
			str=temp;
			str.allocation(strlen(temp)+1);
			strcpy(str.ptr,temp);
			return is;
		}

		String &operator+=(const String &str)
		{

			char *temp;
			temp = new char[lg];
			strcpy(temp,ptr);
			lg =( lg + str.lg ) - 1;
			allocation(lg);
			strcpy(ptr,temp);
			delete temp;
			strcat(ptr,str.ptr);
			return *this;
		}
		friend String operator+(const String& str1,const String& str2)
		{
			String str3;
			str3+=str1;
			str3+=str2;
			return str3;
		}
		bool operator==(const String& str)const
		{
			if (!strcmp(this->ptr,str.ptr))
				return true;
			return false;
		}
		bool operator!=(const String& str)const
		{
			if (!strcmp(this->ptr,str.ptr))
				return false;
			return true;
		}
		bool operator<(const String& str)const
		{
			if (strcmp(this->ptr,str.ptr) < 0)
				return true;
			return false;
		}
		bool operator>(const String& str)const
		{
			if (strcmp(this->ptr,str.ptr) > 0)
				return true;
			return false;
		}
		bool operator<=(const String& str)const
		{
			if (strcmp(this->ptr,str.ptr) <= 0)
				return true;
			return false;
		}
		bool operator>=(const String& str)const
		{
			if (strcmp(this->ptr,str.ptr) >= 0)
				return true;
			return false;
		}
		operator char*();
		char &operator[](int);


		int length();
		void clear();
		bool isEmpty();
};