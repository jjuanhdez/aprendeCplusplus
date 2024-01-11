//################################################################################
//Realizar un programa que lea una cadena por teclado y convierta las may�sculas a 
//min�sculas y viceversa.
//################################################################################
//An�lisis
//Leo un cadena, la recorro y voy copiando cada car�cter a otra cadena, teniendo en 
//cuenta que si es may�sculas la convierto a min�sculas y viceversa.
//Datos de entrada: Cadena de caracteres
//Informaci�n de salida: Cadena con el cambio de may�sculas a min�sculas y viceversa.
//Variables: cad, newcad (Caracter), posicion (Entero)
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string cad, newcad;
	int posicion;
	
	cout << "Introduce una cadena: ";
	getline(cin, cad);
		
	for(posicion = 0; posicion < cad.length(); posicion++)
	{
		if(cad[posicion] == toupper(cad[posicion]))
		{
			newcad += tolower(cad[posicion]);
		}
		if(cad[posicion] == tolower(cad[posicion]))
		{
			newcad += toupper(cad[posicion]);
		}
	}
	cout << "La cadena convertida es: " << newcad;
	return 0;
}
