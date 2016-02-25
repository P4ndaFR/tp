#include <iostream> //header de la STL qui correspond à stdio.h en correspond
using namespace std;

int main()
{
	int n=0;
	cout<<"Bonjour. Tapez un entier:\n";

	//ou std::cout << "---------\n";
	//std = namespace(package)  :: = opération de résolution de portée
	//le >> ou << envoie le message sur l'opérande ciblé
	
	cin>>n;

	cout<<"Nombre : "<<n<<endl; //à la place de \n on peut écrire endl ou std::endl

	return 0;
}