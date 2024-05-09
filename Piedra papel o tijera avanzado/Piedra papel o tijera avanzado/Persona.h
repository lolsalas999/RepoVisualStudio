#pragma once
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace std;

class Persona
{
public:
	int EleccionGanador();
	void DeterminarGanador();
	int eleccionganador=0;
	Persona();
	~Persona();
private:

	int getNumeroRandom();
	int numerorandom;
	void PiensaNumero();
};

