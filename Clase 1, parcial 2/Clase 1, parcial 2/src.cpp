#include<iostream>
#include<string>
#include<vector>
#include"Persona.h"

using namespace std;

int main() 
{
	Persona mi_persona;
	Persona mi_persona2("Paul", 32, 1.60);

	mi_persona.set_nombre("David");
	mi_persona.set_edad(30);
	mi_persona.set_altura(1.60);

	cout << mi_persona.get_nombre() << ": " << mi_persona.getNumeroSecreto() << endl;
	cout << mi_persona2.get_nombre() << ": " << mi_persona2.getNumeroSecreto() << endl;
	return 0;
}