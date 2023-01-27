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
	//////////////////////////////////////
	double sueldo = 0, suma = 0, promedio = 0;
	int falla = 0, fa = 0;
	int j = 6;
	double suma1 = 0, promedio1 = 0;
	double bono = 0.05, rr = 0, total = 0;
	/////////////////////////////////////
	int ymax = 0, xmax = 0;
	int b = 0;
	double m = 0;
	//////////////////////////////////////
	int dia1 = 0, mes1 = 0, ano1 = 0;
	int dia2 = 0, mes2 = 0, ano2 = 0;
	int diferencia = 0, dias = 0;
	int r = 0;
	//////////////////////////////////////

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
			suma = 0;
			suma1 = 0;
			fa = 0;



			cout << "EJERCICIO (1)" << endl;
			cout << "-----------------" << endl;
			cout << "\n" << endl;

			for (int i = 0; i < 12; i++) {

				cout << "\n\n" << endl;
				cout << "MES Nº (" << (i + 1) << ")" << endl;
				cout << "\n\n" << endl;

				cout << "SUELDO_MES : ";
				cin >> sueldo;
				cout << "DIAS_FALTADOS_MES : ";
				cin >> falla;

				suma = suma + sueldo;

				cout << "\n\n" << endl;

				if ((i + 1) > j) {
					suma1 = suma1 + sueldo;

					if (falla > 2) {
						fa = fa + 1;
					}

				}


			}

			cout << "SUMA : " << suma;
			promedio = (suma / 12);
			cout << "PROMEDIO TOTAL : " << promedio << endl;
			cout << "\n\n" << endl;

			cout << "EL AGINALDO DEL EMPLEADO ES $" << promedio << endl;

			cout << "\n\n" << endl;

			cout << "  BONIFICACION" << endl;
			cout << "-----------------" << endl;
			cout << "\n" << endl;

			if (fa > 2) {
				cout << "! NO HAY BONIFICACION !" << endl;
			}
			else {
				cout << "! SI HAY BONIFICACION ! --> 5%" << endl;
				cout << "\n\n" << endl;

				cout << "SUMA : " << suma1;
				promedio1 = (suma1 / j);
				cout << "PROMEDIO TOTAL : " << promedio1 << endl;
				cout << "\n\n" << endl;

				cout << "5% DE BONIFICACION $ ?" << endl;
				cout << "PROMEDIO TOTAL $" << promedio1 << endl;
				rr = (promedio1 * bono);
				cout << "5% DEL PROMEDIO $" << rr << endl;
				total = promedio + rr;
				cout << "TOTAL DEL BONO + EL PROMEDIO TOTAL $" << total << endl;

				cout << "\n\n" << endl;

				cout << "--------------------------------------" << endl;
				cout << "TOTAL A RECIBIR POR TODO ES $" << total << endl;
				cout << "--------------------------------------" << endl;


			}

			break;
		case 2:
			cout << "EJERCICIO (2)" << endl;
			cout << "-----------------" << endl;
			cout << "\n" << endl;

			cout << "VALOR DE YMAX : ";
			cin >> ymax;
			cout << "VALOR DE XMAX : ";
			cin >> xmax;

			cout << "\n\n" << endl;

			if (ymax > 0 & xmax > 0 & ymax >= xmax) {
				cout << "! DATOS CORRECTO !" << endl;

				cout << "\n\n" << endl;

				cout << "DATOS : --> YMAX: " << ymax << "  XMAX: " << xmax << endl;

				cout << "\n\n" << endl;

				m = ymax / xmax;
				cout << "VALOR DE M : " << m << endl;

				cout << "\n\n" << endl;

				for (int i = 0; i < ymax; i++) {
					for (int j = 0; j < i; j++) {
						if (i < m) {
							cout << "*";
						}
						else {
							cout << "X";
						}

					}
					cout << "" << endl;
				}


			}
			else {
				cout << "! ERROR DE DATOS !" << endl;
			}

			break;
		case 3:
			cout << "EJERCICIO (3)" << endl;
			cout << "-----------------" << endl;
			cout << "\n" << endl;

			cout << "DATO Nº (1)" << endl;
			cout << "--------------\n" << endl;

			cout << "DIA : ";
			cin >> dia1;
			cout << "MES : ";
			cin >> mes1;
			cout << "AÑO : ";
			cin >> ano1;

			cout << "\n" << endl;
			cout << "DATO Nº (2)" << endl;
			cout << "--------------\n" << endl;

			cout << "DIA : ";
			cin >> dia2;
			cout << "MES : ";
			cin >> mes2;
			cout << "AÑO : ";
			cin >> ano2;

			cout << "\n\n" << endl;

			if (ano1 > 2000 & ano2 > 2000) {
				cout << "! DATOS CORRECTOS !" << endl;

				cout << "\n\n" << endl;

				cout << "     DATOS" << endl;
				cout << "--------------\n" << endl;


				if (ano1 > ano2) {
					diferencia = (ano1 - ano2);
				}
				else {
					diferencia = (ano2 - ano1);
				}

				cout << "DIFERENCIA : " << diferencia << " AÑOS " << endl;
				dias = (diferencia * 360);
				cout << "DIAS : " << dias << " DIAS " << endl;

				cout << "\n\n" << endl;
				r = (dias - ((12 - mes1) * 30)) - 2;
				cout << "--------------------------------------" << endl;
				cout << "RESULTADO DIAS : " << r << endl;
				cout << "--------------------------------------" << endl;


			}
			else {
				cout << "! ERROR DE DATOS !" << endl;
			}
			break;
		case 4:
			cout << "SALIENDO...." << endl;
			break;
		default:
			cout << "! OPCION INCORRECTO !" << endl;
			break;
		}

		cout << "\n\n" << endl;
	}



	cout << "\n\n" << endl;

	system("PAUSE");
	return 0;
}




