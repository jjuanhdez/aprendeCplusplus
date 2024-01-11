//################################################################################
//Pedir el nombre y los dos apellidos de una persona y mostrar sus iniciales.
//################################################################################
//An�lisis
//Hay que pedir el nombre y los apellidos, y mostrar las iniciales. 
//Primer car�cter de cada cadena.
//Datos de entrada: nombre y apellidos (Cadena)
//Informaci�n de salida: Iniciales (Cadena)
//Variables: nombre, apellido1, apellido2, inicial (Cadena).
//################################################################################
//Dise�o
//1. Leer nombre y apellidos
//2. Obtener primer car�cter de cada cadena
//3. Concatenar los caracteres
//4. Mostrar iniciales
//################################################################################

#include<iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string apellido1;
	string apellido2;
	string inicial;
	string nombre;
	cout << "Dime tu nombre: ";
	getline(cin, nombre);
	cout << "Dime tu primer apellido: ";
	getline(cin, apellido1);
	cout << "Dime tu segundo apellido: ";
	getline(cin, apellido2);
	inicial = toupper(nombre[0]);
	inicial = inicial + char(toupper(apellido1[0]));
	inicial = inicial + char(toupper(apellido2[0]));
	cout << "Las iniciales son: " << inicial << endl;
	return 0;
}
