//################################################################################
//Suponiendo que hemos introducido una cadena por teclado que representa una frase 
//(palabras separadas por espacios), realizar un programa que cuente cuantas 
//palabras tiene.
//################################################################################
//Análisis
//Contando cuantos espacios hay en la frase, tendré el número + 1 de palabras.
//No debo contar los espacios que pueda haber antes de la primera palabra, y los 
//espacios al final de la frase. Además si entre palabras hay varios espacios sólo
//puedo contar 1.
//Datos de entrada: Frase
//Información de salida: Contador de palabras
//Variables: cad (Caracter), posicion, cont (Entero)
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string cad;
	int posicion = 0, cont = 0;
	
	cout << "Introduce una cadena: ";
	getline(cin, cad);
	//Recorro los posibles espacios al principio de la cadena
	while(cad[posicion] == ' ')
		posicion++;
	
	//Desde el primer carácter distinto de espacio
	for(posicion = posicion; posicion < cad.length(); posicion++)
	{
		if(cad[posicion] == ' ')
		{
			cont++;
			//No tengo en cuanta los posibles espacios que haya entre las palabras
			while(cad[posicion] == ' ' && posicion <= cad.length())
				posicion++;
		}
	}
	//Si no acaba en espacios tengo que contar la última palabra
	if(cad.back() != ' ')
		cont++;
	
	cout << "La frase tiene " << cont << " palabras.";
	return 0;
}
