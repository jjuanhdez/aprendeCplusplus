//################################################################################
//Programa que lea una cadena por teclado y compruebe si es una letra may�scula.
//################################################################################
//An�lisis
//Pedimos por teclado una cadena 
//y hay que comprobar que todas las letras sean may�sculas.
//Datos de entrada: cadena (Cadena)
//Informaci�n de salida: Mensajes de es may�sculas o no es may�sculas.
//Variables: cadena (Cadena)
//################################################################################
//Dise�o
//1. Leer la cadena
//2. Si la cadena es igual a la cadena convertida en may�sculas, 
//	 mostrar "La cadena es may�sculas"
//3. En caso contrario mostrar "La cadena no es may�sculas"
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    string cad;
    cout << "Introduce una cadena: ";
	getline(cin, cad);
    if (cad[0] == toupper(cad[0]))
    {
		cout << "La cadena empieza por una letra may�scula";
    }
    else
    {
		cout << "La cadena NO empieza por una letra may�scula";
    }
    return 0;
}
