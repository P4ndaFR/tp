#include "Individu.h"

class Eleve: public Individu
{
	private:
		double moyenne;
	public:
		Eleve()
		{
			cout<<"Constructeur eleve"<<endl;
			this->moyenne = 0 ;
		}
		Eleve(int age, string nom,double moyenne):Individu(age,nom)
		{
			this->moyenne=moyenne;
			cout<<"Constructeur eleve"<<endl;
		}
};