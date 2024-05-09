#include "Perro.h"

Perro::Perro(string n): Animal(n)
{
	raza = "";
	setVertebrado(true);
}

Perro::~Perro()
{

}

void Perro::ladra()
{
	cout << "Woof Woof!! soy " <<nombre<< endl;
}
