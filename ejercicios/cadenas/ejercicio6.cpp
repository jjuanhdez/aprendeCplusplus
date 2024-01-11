//################################################################################
//Algoritmo que, dada una cadena de caracteres, genere otra cadena resultado de 
//invertir la primera.
//################################################################################
//An�lisis
//Leemos una cadena, la recorremos desde el final al principio y cada car�cter 
//lo vamos concatenando en una nueva cadena, que inicialmente tendr� como valor
//la cadena vac�a.
//Datos de entrada: Una cadena de caracteres.
//Informaci�n de salida: La cadena invertida.
//Variables: cad, invertida (Caracter)
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    string cad, invertida = "";
    int posicion;
    cout << "Introduce una cadena: ";
    getline(cin, cad);

    for(posicion = cad.length()-1; posicion >= 0;posicion--)
	    invertida += cad[posicion];
	
	cout<< "La cadena invertida es: " << invertida;
	return 0;
}
