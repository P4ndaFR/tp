#include "String.h"

void String::allocation(int taille)
{
	if(ptr)
	{
		delete ptr;
	}
	
	ptr = new char[taille];
	lg = taille;
}

int String::length()
{
	return strlen(this->ptr);
}

void String::clear()
{
	strcpy(ptr,"");
	delete ptr;
	cout<<"Clear Complete"<<endl;
}
bool String::isEmpty()
{
	if(strlen(ptr) == 0)
	{
		return true;
	}
}

