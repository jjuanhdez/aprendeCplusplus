//################################################################################
//Realizar un programa que compruebe si una cadena le�da por teclado comienza por 
//una subcadena introducida por teclado.
//################################################################################
//An�lisis
//Leo una cadena y una subcadena por teclado. Obtengo la subcadena de la primera
//cadena con la misma longitud que la segunda cadena (uso la funci�n subcadena). 
//Si son iguales significa que la primera cadena comienza por la segunda.
//Datos de entrada: Dos cadenas
//Informaci�n de salida: Mensaje indicando si la primera cadena comienza por 
//                       la segunda o no.
//Variables: cad, sub (Caracter)
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string cad,subcad;
	cout << "Introduce una cadena: ";
	getline(cin,cad);
	cout << "Introduce una subcadena: ";
	getline(cin,subcad);
	if (cad.substr(0,subcad.length()) == subcad)
		cout << "La cadena comienza por la subcadena";
	else
		cout << "La cadena NO comienza por la subcadena";
	return 0;
}
