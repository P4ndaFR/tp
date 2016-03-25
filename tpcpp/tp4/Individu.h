#ifndef INDIVIDU_H
#define INDIVIDU_H

#include <iostream>
#include <string>

using namespace std;

class Individu 
{
	private: 
		int age;
		string nom;
	
	public: 
		Individu();
		Individu(int,string);
		//virtual getIdentite()const = 0;
		virtual void affiche()const
		{
			cout<<"Age : "<<age<<" Nom : "+nom<<endl;
		}
		void setNom(string nom)
		{
			this->nom=nom;
		}
		void setAge(int age)
		{
			this->age=age;
		}
		string getNom()const
		{
			return nom;
		}
		int getAge()const
		{
			return age;
		}
		virtual bool operator<(Individu i)
		{
			if(this->nom < i.nom)return true;
			if(this->nom == i.nom)
			{
				if(this->age < i.age)return true;
				return false;
			}
		}
		virtual bool operator==(Individu i)
		{
			if(this->nom == i.nom && this->age == i.age)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
};
#endif