//################################################################################
//Introducir una cadena de caracteres e indicar si es un pal�ndromo. 
//Una palabra pal�ndroma es aquella que se lee igual adelante que atr�s.
//################################################################################
//An�lisis
//Leo una cadena. Creo una nueva cadena invirtiendo la cadena le�da. Si so iguales 
//la cadena original y la inversa-> Es un pal�ndromo. No hemos tenido en cuanta 
//las may�sculas y min�sculas.
//Datos de entrada: Cadena de caracteres 
//Informaci�n de salida: Mensaje indicando si es pal�ndromo o no.
//Variables: cad1, cad2 (Caracter), posicion (Entero) 
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string cad1, cad2;
	int posicion;
	
	cout << "Introduce una cadena: ";
	getline(cin, cad1);
	for(posicion = cad1.length()-1; posicion >= 0; posicion--)
		cad2 += cad1[posicion];
	if(cad1 == cad2)
		cout << "Es un pal�ndromo";
	else
		cout << "NO es un pal�ndromo";
	return 0;
}
