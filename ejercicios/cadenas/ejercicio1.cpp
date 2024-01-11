//################################################################################
//Escribir por pantalla cada car�cter de una cadena introducida por teclado.
//################################################################################
//An�lisis
//Leemos una cadena y tenemos que recorrerla (necesito un bucle que vaya desde la 
//posici�n 0 hasta la longitud de la cadena menos 1. En cada iteraci�n mostramos
//un car�cter (utilizamos la funci�n subcadena).
//Datos de entrada: La cadena
//Informaci�n de salida: Cada uno de los caracteres de la cadena
//Variables: cad (Caracter), posicion (Entero)
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string cad;
	int posicion;
	cout << "Introduce una cadena: ";
	getline(cin, cad);
	for(posicion = 0; posicion < cad.length(); posicion++)
	{
		cout << cad[posicion] << endl;
	}
	return 0;
}
