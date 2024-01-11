//################################################################################
//Algoritmo que pida dos n�meros e indique si el primero es mayor que el segundo.
//################################################################################
//An�lisis
//Tenemos que pedir dos n�meros por teclado, compararlos 
//e indicar si el primero es mayor que el segundo o no.
//Datos de entrada: n�mero 1, n�mero 2 
//Informaci�n de salida: Un mensaje de texto indicando si es mayor.
//Variables: num1, num2 (Entero)
//################################################################################
//Dise�o
//1. Leer los n�meros
//2. Si el n�mero 1 es mayor que el segundo escribir "El primero es mayor"
//3. En caso contrario escribir "El primero no es mayor que el segundo"
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1,num2;
	cout << "Dime el n�mero 1: ";
	cin >> num1;
    cout << "Dime el n�mero 2: ";
	cin >> num2;
    if (num1 > num2)
    {
        cout << "n�mero 1 es mayor que n�mero 2";
    }
    else
    {
        cout << "n�mero 1 NO es mayor que n�mero 2";
    }

	return 0;
}
