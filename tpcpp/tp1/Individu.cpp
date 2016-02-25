#include "Individu.h"

Individu::Individu()
{
	nom = "";
	age=0;
	cout<<"dans csteur ss arg"<<endl;
}

Individu::Individu(int age,string nom)
{
	this->age=age;
	this->nom=nom;
	cout<<this->nom<<" "<<this->age<<endl;
}

