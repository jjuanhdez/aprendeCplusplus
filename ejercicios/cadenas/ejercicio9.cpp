//################################################################################
//Realizar un programa que compruebe si una cadena contiene una subcadena.
//Las dos cadenas se introducen por teclado.
//################################################################################
//Análisis
//Leo dos cadenas. Tengo que ir comprobando todas las subcadenas de la primera 
//cadena que tengan la misma longitud que la segunda. Si alguna de estas subcadenas
//es igual a la segunda, la primera cadena contiene la segunda.
//Datos de entrada: Cadena de caracteres y subcadena a buscar.
//Información de salida: Mensaje indicadndo si la cadea contiene la subcadena o no.
//Variables: cad, subcad (Caracter), num_subcadenas, nsubc (Entero), 
//			 indicador (Logico)
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string cad, subcad;
	cout <<  "Introduce una cadena: ";
	getline(cin, cad);
	cout <<  "Introduce una subcadena: ";
	getline(cin, subcad);
	if(cad.find(subcad) != -1)
		cout << "La cadena contiene la subcadena.";
	else
		cout << "La cadena NO contiene la subcadena.";
	return 0;
}
