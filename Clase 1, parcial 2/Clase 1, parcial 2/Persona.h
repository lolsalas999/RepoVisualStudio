#pragma once

#include<iostream>
#include<string>
#include<vector>
#include<cstdlib>
#include<ctime>

using namespace std;


class Persona
{
public:

	Persona();
	Persona(string, int, float);
	~Persona();

	void set_nombre(string);
	void set_edad(int);
	void set_altura(float);

	string get_nombre();
	int get_edad();
	float get_altura();

	void add_hobby(string);
	vector<string>getHobbies();

	void sayHello();
	void sayAge();
	void birthday();

	string sayChisme();
	void rememberChisme(string);

	int getNumeroSecreto();

private:
	int numeroSecreto;
	void piensaNumero();
	string nombre;
	int edad;
	float altura;
	vector<string>hobbies;
	string chisme;
};
