#pragma once

#include<iostream>
#include <string>

using namespace std;

class Animal
{
public:
	Animal(string);
	~Animal();
	void ImprimeRaza();
	void setRaza(string);
	void setVertebrado(bool);

private:
	bool esVertebrado;

protected:
	string raza;
	string nombre;

};

