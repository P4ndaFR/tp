#include "Individu.h"

class Professeur: public Individu //Hérite publiquement de la classe Individu
{
	private:
		int salaire;
	public:
		//Constructeurs
		Professeur()// Appel implicite du constructeur de la classe mère
		{
			this->salaire=0;
		}
		Professeur(int salaire)// Appel implicite du constructeur de la classe mère
		{
			this->salaire=salaire;
		}
		Professeur(int age,string nom,int salaire):Individu(age,nom)
		{
			cout<<"Constructeur prof"<<endl;
			this->salaire=salaire;
		}
		//Getters
		int getSalaire()
		{
			return this->salaire;
		}
		//Setters
		void setSalaire(int salaire)
		{
			this->salaire=salaire;
		}
};