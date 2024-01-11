//################################################################################
//Realiza un programa que pida el día de la semana (del 1 al 7) y escriba 
//el día correspondiente. 
//Si introducimos otro número mostrará un error.
//################################################################################
//Análisis
//Leer un día de la semana como número y mostrar el día que corresponde.
//Si el número introducido es incorrecto mostrar mensaje de error.
//Datos de entrada: día (Entero)
//Información de salida: nombre del día
//Variables: día (Entero)
//################################################################################
//Diseño
//1. Leer día de la semana como entero
//2. Según el valor del día mostrar el nombre del día de la semana
//3. Si es un día incorrecto, mostrar mensaje de error
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int dia;
	cout << "Dime un día de la semana (1-7): ";
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
			cout << "Miércoles";
			break;
		case 4:
			cout << "Jueves";
			break;
		case 5:
			cout << "Viernes";
			break;
		case 6:
			cout << "Sábado";
			break;
		case 7:
			cout << "Domingo";
			break;
		default:
			cout << "Día incorrecto";
	}
	return 0;
}
