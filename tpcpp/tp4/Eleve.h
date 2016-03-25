#include "Individu.h"
#include "sstream"

class Eleve: public Individu
{
	private:
		int annee;
	public:
		Eleve()
		{
			cout<<"Constructeur eleve"<<endl;
			annee=0;
		}
		Eleve(int age, string nom,int annee):Individu(age,nom)
		{
			this->annee=annee;
			cout<<"Constructeur eleve"<<endl;
		}
		void affiche()const
		{
			Individu::affiche();
			cout<<" Année :"<<annee<<endl;
		}
		void getIdentite()const
		{
			ostringstream csout;
			csout<<annee<<":"<<getNom()<<endl;
		}
};