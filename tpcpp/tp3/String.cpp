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
String::operator char*()
{
	return this->ptr;
}
char &String::operator[](int i)
{
	range_error e("Indice incorrect");
	if(i<0 || i>=length())
	{
		throw e;
	}
	return ptr[i];
}

