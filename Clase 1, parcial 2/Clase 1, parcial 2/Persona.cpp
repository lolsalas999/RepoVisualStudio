#include "Persona.h"

Persona::Persona()
{
	srand(static_cast<unsigned int>(time(0)));
	nombre = "";
	edad = 0;
	altura = 0.0;
	numeroSecreto = 0;
	chisme = "";
}

Persona::Persona(string n, int e, float a)
{
	srand(static_cast<unsigned int>(time(0)));
	nombre = n;
	edad = e;
	altura = a;
	numeroSecreto = 0;
}

Persona::~Persona()
{
}

void Persona::set_nombre(string n)
{
	nombre = n;
}

void Persona::set_edad(int e)
{
	edad = e;
}

void Persona::set_altura(float a)
{
	altura = a;
}

string Persona::get_nombre()
{
	return nombre;
}

int Persona::get_edad()
{
	return edad;
}

float Persona::get_altura()
{
	return altura;
}

void Persona::add_hobby(string h)
{
	hobbies.push_back(h);
}

vector<string> Persona::getHobbies()
{
	return hobbies;
}

void Persona::sayHello()
{
	cout << "Hola soy" << nombre<< endl;
}

void Persona::sayAge()
{
	cout << "Mi edad: " << edad << endl;
}

void Persona::birthday()
{
	edad += 1;
}

string Persona::sayChisme()
{
	return chisme;
}

void Persona::rememberChisme(string c)
{
	chisme = c;
}

int Persona::getNumeroSecreto()
{
	piensaNumero();
	return numeroSecreto;
}

void Persona::piensaNumero()
{
	numeroSecreto = (rand() % 100) + 1;
}

