//################################################################################
//Escribir un programa que lea un a�o e indique si es bisiesto. 
//Nota: un a�o es bisiesto si es un n�mero divisible por 4, pero no si es 
//divisible por 100, excepto que tambi�n sea divisible por 400.
//################################################################################
//An�lisis
//Pedir un a�o y comprobar si es bisiesto.
//Datos de entrada: el a�o (Entero)
//Informaci�n de salida: Si el a�o es bisiesto o no
//Variables: year (Entero)
//################################################################################
//Dise�o
//1. Leer year
//2. Si el a�o es divisible por 4, pero no si es divisible por 100, excepto que 
//   tambi�n sea divisible por 400 mostrar "A�o bisiesto"
//3. En caso contrario, mostrar "A�o no bisiesto"
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int year;
	cout << "Introduce el a�o: ";
	cin >> year;
	if ((year % 4 == 0 && !(year % 100 == 0)) || year % 400 == 0) {
		cout << "A�o bisiesto.";
	}
	else {
		cout << "A�o no bisiesto.";
	}
	return 0;
}
