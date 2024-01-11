//################################################################################
//Escribe un programa que pida un n�mero entero entre uno y doce e imprima el 
//n�mero de d�as que tiene el mes correspondiente.
//Si introducimos otro n�mero nos da un error.
//################################################################################
//An�lisis
//Leer un mes como entero e indicar los d�as que tiene el mes. 
//El mes de febrero ponemos que tiene 28 o 29 d�as.
//Si el n�mero introducido es incorrecto mostrar mensaje de error.
//Datos de entrada: mes (Entero)
//Informaci�n de salida: cantidad de d�as del mes indicado o mensaje de error
//Variables: mes (Entero)
//################################################################################
//Dise�o
//1. Leer mes como entero
//2. Seg�n el valor del mes:
//3. Si es el 1,3,5,7,8,10,12: tiene 31 d�as
//4. Si es el 2: tiene 28 o 29 d�as
//5. Si es el 2,4,9,11: tiene 30 d�as
//6. Si es otro n�mero, mostrar mensaje de error
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int mes;
	cout << "Introduce el n�mero de mes (1-12): ";
	cin >> mes;
	switch(mes)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			cout << "31 d�as";
			break;
		case 2:
			cout << "28 o 29 d�as";
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			cout << "30 d�as";
			break;
		default:
			cout << "Mes incorrecto";			
	}
	return 0;
}
