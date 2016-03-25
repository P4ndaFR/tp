#include "Individu.h"
#include "Professeur.h"
#include "Eleve.h"

int main()
{
	//Individu rene; //Instanciation d'un objet (appel du constructeur par défaukt si aucun n'es précisé) alloué dans la pile
	//Individu prene(89,"rene" ); //alloué dans le tas
	//Individu tab[5]; //alloué dans la pile

	//Individu *i = new Individu(5,"yves");

	//Professeur un_prof(50,"Gerval",6000);

	//un_prof.setSalaire(2000);
	//cout<<un_prof.getSalaire()<<endl;

	Eleve un_eleve;
	un_eleve.affiche();
}