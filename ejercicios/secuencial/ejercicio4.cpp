//################################################################################
//Dados dos n�meros, mostrar la suma, resta, divisi�n y multiplicaci�n de ambos.
//################################################################################
//An�lisis
//Tenemos que leer dos n�meros, calcular la suma, resta, multiplicaci�n y divisi�n
//Datos de entrada: Los dos n�meros (Real)
//Informaci�n de salida: suma, resta, multiplicaci�n, divisi�n (Real)
//Variables: num1, num2 (Real). 
//Considero que las salidas no es necesario guardarla en variables.
//################################################################################
//Dise�o
//1. Leer los n�meros
//2. Mostrar la suma, resta, multiplicaci�n y divisi�n
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float num1, num2;
	cout << "Introduce el n�mero 1: ";
	cin >> num1;
	cout << "Introduce el n�mero 2: ";
	cin >> num2;
	cout << "La suma es  " << num1+num2 << endl;
	cout << "La resta es " << num1-num2 << endl;
	cout << "El producto es " << num1*num2 << endl;
	cout << "La divisi�n es " << num1/num2 << endl;
	return 0;
}
