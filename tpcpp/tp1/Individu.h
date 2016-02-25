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
};
#endif