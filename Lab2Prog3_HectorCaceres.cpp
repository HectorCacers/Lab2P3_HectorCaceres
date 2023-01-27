// Lab2Prog3_HectorCaceres.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "string"
#include <math.h>
#include <conio.h>
using namespace std;

int main(int argc, char** argv)
{
	int op = 0;

	cout << "\n\n" << endl;

	while (op != 4) {
		cout << "\n\n" << endl;

		cout << "    MENU" << endl;
		cout << "------------------\n\n" << endl;

		cout << "1). PUNTO 1" << endl;
		cout << "2). PUNTO 2" << endl;
		cout << "3). PUNTO 3" << endl;
		cout << "4). SALIR" << endl;
		cout << "\n" << endl;

		cout << "OPCION --> ";
		cin >> op;

		cout << "\n\n" << endl;

		switch (op) {

		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		default:
			cout << "! OPCION INCORRECTO !";
				break;
		}

		cout << "\n\n" << endl;
	}



	cout << "\n\n" << endl;

	system("PAUSE");
	return 0;
}

