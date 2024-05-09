#include "Animal.h"

Animal::Animal(string n)
{
	raza = "";
	nombre = n;
	esVertebrado = true;
}

Animal::~Animal()
{

}

void Animal::ImprimeRaza()
{
	cout << "Mi raza es: " << raza << endl;
}

void Animal::setRaza(string r)
{
	raza = r;
}

void Animal::setVertebrado(bool v)
{
	esVertebrado = v;
}
