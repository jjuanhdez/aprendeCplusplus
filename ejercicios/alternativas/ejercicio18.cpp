//################################################################################
//Realiza un programa que pida el d�a de la semana (del 1 al 7) y escriba 
//el d�a correspondiente. 
//Si introducimos otro n�mero mostrar� un error.
//################################################################################
//An�lisis
//Leer un d�a de la semana como n�mero y mostrar el d�a que corresponde.
//Si el n�mero introducido es incorrecto mostrar mensaje de error.
//Datos de entrada: d�a (Entero)
//Informaci�n de salida: nombre del d�a
//Variables: d�a (Entero)
//################################################################################
//Dise�o
//1. Leer d�a de la semana como entero
//2. Seg�n el valor del d�a mostrar el nombre del d�a de la semana
//3. Si es un d�a incorrecto, mostrar mensaje de error
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int dia;
	cout << "Dime un d�a de la semana (1-7): ";
	cin >> dia;
	switch(dia)
	{
		case 1:
			cout << "Lunes";
			break;
		case 2:
			cout << "Martes";
			break;
		case 3:
			cout << "Mi�rcoles";
			break;
		case 4:
			cout << "Jueves";
			break;
		case 5:
			cout << "Viernes";
			break;
		case 6:
			cout << "S�bado";
			break;
		case 7:
			cout << "Domingo";
			break;
		default:
			cout << "D�a incorrecto";
	}
	return 0;
}
