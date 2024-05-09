#include "Persona.h"

Persona::Persona()
{
	srand(time(NULL));
}

Persona::~Persona()
{
}

int Persona::EleccionGanador()
{
	bool program = true;
	int opc=0;
	while (program) 
	{
		cout << "Que opcion desea: " << endl;
		cout << "1.Piedra" << endl;
		cout << "2.Papel" << endl;
		cout << "3.Tijera" << endl;
		cout << "Ingrese la opción: ";
		cin >> opc;

		switch (opc) 
		{
		case 1:
			eleccionganador = 1;
			program = false;
			break;
		case 2:
			eleccionganador = 2;
			program = false;
			break;
		case 3:
			eleccionganador = 3;
			program = false;
			break;
		default:
			cout << "Por favor ingrese una opcion valida\n" << endl;
			break;
		}
	}
	return eleccionganador;
}

void Persona::DeterminarGanador()
{
	bool program = true;
	bool program2 = true;
	while (program)
	{

		program2 = true;
		PiensaNumero();
		getNumeroRandom();
		EleccionGanador();
		cout << "Usted eligio "<<eleccionganador << endl;
		cout << "La computadora eligio "<<numerorandom << endl;
		switch (eleccionganador)
		{
		case 1:
			if (numerorandom == 1)
			{
				cout << "EMPATE!" << endl;
			}
			else if (numerorandom == 2)
			{
				cout << "PERDISTE!" << endl;
			}
			else if (numerorandom == 3)
			{
				cout << "GANASTE" << endl;
			}
			break;
		case 2:
			if (numerorandom == 1)
			{
				cout << "GANASTE!" << endl;
			}
			else if (numerorandom == 2)
			{
				cout << "EMPATASTE!" << endl;
			}
			else if (numerorandom == 3)
			{
				cout << "PERDISTE" << endl;
			}
			break;
		case 3:
			if (numerorandom == 1)
			{
				cout << "PERDISTE!" << endl;
			}
			else if (numerorandom == 2)
			{
				cout << "GANASTE!" << endl;
			}
			else if (numerorandom == 3)
			{
				cout << "EMPATASTE!" << endl;
			}
			break;
		}
		while (program2)
		{


			cout << "Quieres seguir jugando?" << endl;
			cout << "1.SI" << endl;
			cout << "2.NO" << endl;
			int opc2 = 0;
			cout << "Deme la opción: ";
			cin >> opc2;
			switch (opc2)
			{
			case 1:
				program2 = false;
				continue;
			case 2:
				cout << "Gracias por jugar!" << endl;
				program2 = false;
				program = false;
				break;
			default:
				cout << "Por favor deme una opción valida" << endl;
			}
		}
	}
}

int Persona::getNumeroRandom()
{
	PiensaNumero();
	return numerorandom;
}

void Persona::PiensaNumero()
{
	numerorandom = 1+ rand() % (4 - 1);
}
