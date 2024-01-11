//################################################################################
//Algoritmo que pida caracteres e imprima 'VOCAL' si son vocales y 'NO VOCAL' 
//en caso contrario, el programa termina cuando se introduce un espacio.
//################################################################################
//An�lisis
//Leer un car�cter hasta que sea el espacio.
//Si el car�cter no es espacio -> si es una vocal -> Muestro "Es vocal"
//Si no muestro "No es vocal"
//Datos de entrada: vamos leyendo un car�cter.
//Informaci�n de salida:Mensajes: "Es vocal", "No es vocal"
//Variables: car (Caracter)
//################################################################################
//Dise�o
//1. Repetir
//2.   Repetir -> Leer car�cter hasta que sea un s�lo car�cter
//3.     Si car no es el espacio
//4.     Si es A,E,I,O,U o a,e,i,o,u -> Mostrar "Es vocal"
//5.     Si no mostrar "No es vocal"
//hasta que el car�cter sea espacio
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string car;
	do
	{
		do {
			cout << "Introduce un car�cter: ";
			getline(cin,car);
		}
		while(car.size() != 1);
		if (toupper(car[0]) == 'A' || toupper(car[0]) == 'E' || toupper(car[0]) == 'I' || toupper(car[0]) == 'O' || toupper(car[0]) == 'U')
		{
			cout << "VOCAL" << endl;
		}
		else
		{
			cout << "NO VOCAL" << endl;
		}
		
	} while(car != " ");
	return 0;
}
