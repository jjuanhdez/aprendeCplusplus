//################################################################################
//Programa que lea una cadena por teclado y compruebe si es una letra mayúscula.
//################################################################################
//Análisis
//Pedimos por teclado una cadena 
//y hay que comprobar que todas las letras sean mayúsculas.
//Datos de entrada: cadena (Cadena)
//Información de salida: Mensajes de es mayúsculas o no es mayúsculas.
//Variables: cadena (Cadena)
//################################################################################
//Diseño
//1. Leer la cadena
//2. Si la cadena es igual a la cadena convertida en mayúsculas, 
//	 mostrar "La cadena es mayúsculas"
//3. En caso contrario mostrar "La cadena no es mayúsculas"
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    string cad;
    cout << "Introduce una cadena: ";
	getline(cin, cad);
    if (cad[0] == toupper(cad[0]))
    {
		cout << "La cadena empieza por una letra mayúscula";
    }
    else
    {
		cout << "La cadena NO empieza por una letra mayúscula";
    }
    return 0;
}
