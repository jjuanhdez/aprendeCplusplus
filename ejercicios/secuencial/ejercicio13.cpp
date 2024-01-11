//################################################################################
//Realizar un algoritmos que lea un n�mero y muestre su ra�z cuadrada y su ra�z c�bica.
//PSeInt no tiene ninguna funci�n predefinida que permita calcular la ra�z c�bica,
//�c�mo se puede calcular?
//################################################################################
//An�lisis
//Se pide un n�mero y se muestra la ra�z cuadrada y la c�bica. 
//Datos de entrada: numero (Entero).
//Informaci�n de salida: ra�z cuadrada, ra�z c�bica (Real).
//Variables: num (Entero).
//################################################################################
//Dise�o
//1. Leer el n�mero.
//2. Calcular ra�z cuadrada: tenemos una funci�n
//3. Calcular ra�z c�bica: es igual que elevar el n�mero a 1/3
//4. Mostrar las ra�ces
//################################################################################

#include<iostream>
#include<cmath>
using namespace std;

int main(int argc, char *argv[]) {
	int num;
	cout << "Dime el n�mero: ";
	cin >> num;
	cout << "Ra�z cuadrada: " << sqrt(num) << endl;
	cout << "Ra�z c�bica: " << pow(num, (1/3)) << endl;
	return 0;
}
