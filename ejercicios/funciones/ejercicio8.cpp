//################################################################################
//Crear una funci�n recursiva que permita calcular el factorial de un n�mero. 
//Realiza un programa principal donde se lea un entero y se muestre el resultado 
//del factorial.
//################################################################################

#include <iostream>
using namespace std;

//Declaraci�n de la funci�n
int CalcularFactorial(int num);	

int main(int argc, char *argv[]) {
	int numero1;
	cout << "N�mero: ";
	cin >> numero1;
	cout << "El factorial es: " << CalcularFactorial(numero1);
	return 0;
}


//################################################################################
//Funci�n "CalcularFactorial": Recibe un n�mero, si el n�mero = 1 devuelve que el 
//factorial es 1, sino acumula el producto del n�mero con el c�lculo del factorial 
//del numero-1. Es una funci�n recursiva.
//Par�metros de entrada: n�mero
//Dato devuelto: Factorial del n�mero
//################################################################################

int CalcularFactorial(int num) {
	if(num == 1)
		return 1;
	else
		return num * CalcularFactorial(num-1);
}

