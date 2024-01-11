//################################################################################
//Calcular la media de tres n�meros pedidos por teclado
//################################################################################
//An�lisis
//Tenemos que leer tres n�meros y calcular la media. Suma de los tres partido 3.
//Datos de entrada: los tres n�meros (Real)
//Informaci�n de salida: la media (Real)
//Variables: num1, num2, num3, media (Real).
//################################################################################
//Dise�o
//1. Leer los tres n�meros
//2. Calcular la media: (num1 + num2 + num3) / 3
//3. Mostrar la media
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float num1,num2,num3, media;
	cout << "Introduce el n�mero 1: ";
	cin >> num1;
	cout << "Introduce el n�mero 2: ";
	cin >> num2;
	cout << "Introduce el n�mero 3: ";
	cin >> num3;
	media = (num1 + num2 + num3) / 3;
	cout << "La media es " << media << endl;
	return 0;
}
