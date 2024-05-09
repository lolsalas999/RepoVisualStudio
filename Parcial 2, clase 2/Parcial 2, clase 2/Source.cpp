#include<iostream>
#include "Perro.h"

using namespace std;

int main() 
{
	Perro miPerro("Agatha");
	miPerro.setRaza("Schnouzer");
	miPerro.ImprimeRaza();
	miPerro.ladra();
	return 0;
}
